#include "grt.h"
#include <stddef.h>

// Define your memory region and size
#define MEMORY_START 0x00114000
#define MEMORY_SIZE  0x0000a000

typedef struct Block {
    size_t size;
    struct Block *next;
} Block;

static Block *freeList = NULL;

void init_memory() {
    // Initialize memory region as a single free block
    freeList = (Block *)MEMORY_START;
    freeList->size = MEMORY_SIZE - sizeof(Block);
    freeList->next = NULL;
}

void *malloc(size_t size) {
    Block *prevBlock = NULL;
    Block *currentBlock = freeList;

    // Find a suitable free block
    while (currentBlock) {
        if (currentBlock->size >= size) {
            // Split the block if it's larger than the requested size
            if (currentBlock->size > size + sizeof(Block)) {
                Block *newBlock = (Block *)((char *)currentBlock + sizeof(Block) + size);
                newBlock->size = currentBlock->size - size - sizeof(Block);
                newBlock->next = currentBlock->next;
                currentBlock->size = size;
                currentBlock->next = newBlock;
            }

            if (prevBlock) {
                prevBlock->next = currentBlock->next;
            } else {
                freeList = currentBlock->next;
            }

            return (char *)currentBlock + sizeof(Block);
        }

        prevBlock = currentBlock;
        currentBlock = currentBlock->next;
    }

    return NULL;  // No suitable block found
}

void free(void *ptr) {
    if (ptr == NULL) {
        return;  // Nothing to free
    }

    Block *blockToFree = (Block *)((char *)ptr - sizeof(Block));
    blockToFree->next = freeList;
    freeList = blockToFree;
}


// The Trie root
static grt_node* root = NULL;
static uint32_t * nlvl = NULL;

// Queue utilities
static struct grt_node** createQueue(int* front, int* rear){
    struct grt_node** queue = (struct grt_node**)malloc(
        sizeof(struct grt_node*) * MAX_Q_SIZE);
 
    *front = *rear = 0;
    return queue;
}
 
static void enQueue(struct grt_node** queue, int* rear,
             struct grt_node* new_node){
    queue[*rear] = new_node;
    (*rear)++;
}
 
static struct grt_node* deQueue(struct grt_node** queue, int* front){
    (*front)++;
    return queue[*front - 1];
} 

// Trie
static limit_node* createLimit(const uint32_t range, const uint8_t perm, 
                            const uint32_t reloc_off){
    limit_node* newLimit = (limit_node*)malloc(sizeof(limit_node));
    newLimit->range = range;
    newLimit->perm= perm;
    newLimit->reloc_off= reloc_off; 
    return newLimit;
}

static grt_node* createNode(const uint8_t level, const uint8_t checkedsize, 
                    const uint32_t guard, const uint8_t gsize, 
                    const bool valid, const bool limit, const uint16_t hint) {
    grt_node* newNode = (grt_node*)malloc(sizeof(grt_node));
    // Utilities
    newNode->level = level;
    newNode->checkedsize = checkedsize;
    //bank 0
    newNode->guard = guard;
    //bank 1
    newNode->gsize = gsize;
    newNode->valid = valid;
    newNode->limit = limit;
    newNode->hint = hint;
    //children
    newNode->left = NULL;
    newNode->right = NULL;
    //limit node 
    newNode->limit_table = NULL;
    return newNode;
}

// grt children node creation
static grt_node* createChildrenNode(const uint8_t level, const uint8_t checkedsize, 
                    const uint32_t guard, const uint8_t gsize) {
    return createNode(level,checkedsize,guard,gsize,1,0,0);
}

// grt parent node creation
static grt_node* createParentNode(const uint8_t level, const uint8_t checkedsize, 
                    const uint32_t guard, const uint8_t gsize) {
    return createNode(level,checkedsize,guard,gsize,1,0,3); 
}


// Extract from value a number of bit equal to sice from start
static uint32_t extractBitsRange(const uint32_t value, const uint8_t size, 
                            const int start) {
    uint32_t bitmask = (((uint64_t)1 << size) - 1) << start;
    uint32_t extractedBits = (value & bitmask) >> start;
    return extractedBits;
}

// Check if the value contains the guard in the right position 
static int checkGuard(const uint32_t value,const uint32_t guard,
                const uint8_t gsize,const uint8_t checkedsize){ 
    uint32_t extractedBits = extractBitsRange(value, gsize, (32-checkedsize-gsize));
    return guard == extractedBits;
}

// Starting from a guard, fina a new guard for the value
static void findGuard(const uint32_t value, uint32_t* guard, 
                uint8_t* gsize, const uint8_t checkedsize){
    do {
        *gsize = *gsize-1;
        *guard = extractBitsRange(*guard, *gsize, 1);
    }while(!checkGuard(value, *guard, *gsize, checkedsize)); 
}

// Modify the current node to became parent and create two children
static void becomeParent(grt_node* node, const uint32_t value){
    node->limit = 0;        //Parents are not limit
    node->hint = 3;         //Parents always have two childrens
    node->valid = 1;        //Parents are always valid

    uint32_t new_checkedsize = node->checkedsize + node->gsize;
    uint32_t new_level = node->level + 1;
    uint32_t new_gsize = ADDR_SIZE - node->checkedsize - node->gsize; 
    uint32_t new_rightguard = ((1 << new_gsize) -1) & (value);
    uint32_t new_leftguard = 0;

    // For now all the nodes all valide
    node->left = createChildrenNode(new_level, new_checkedsize, new_leftguard, new_gsize);
    node->right = createChildrenNode(new_level, new_checkedsize, new_rightguard, new_gsize);
}

static void levelUp(grt_node* node){
    if(node == NULL){
        puts("[M-Mode] Cannot LevelUP, Node doesn't exist!");
    }
    node->level++;
    if(node->left != NULL){
        levelUp(node->left);
    }
    if(node->right != NULL){
        levelUp(node->right);
    }
}

static void insertInTheMiddle(grt_node** node, grt_node ** parent_node, const uint32_t value){
    grt_node* current = *node;
    grt_node* parent = *parent_node;
    
    // Create a copy of the current node
    grt_node* new_node = createParentNode(current->level, current->checkedsize, current->guard, current->gsize);
    
    // Find new guard and gsize for the current node
    findGuard(value, &new_node->guard, &new_node->gsize, new_node->checkedsize);
    
    // old node now point to the new node
    if(!extractBitsRange(current->guard, 1, (current->gsize -1))){
        parent->left = new_node;
    } else {
        parent->right = new_node;
    }
    
    // modify the current node 
    current->gsize = current->gsize - new_node->gsize;
    current->checkedsize = current->checkedsize + new_node->gsize;
    current->guard = extractBitsRange(current->guard, current->gsize, 0);
    
    // the current node become the new node child
    uint32_t new_checkedsize = new_node->checkedsize + new_node->gsize;
    uint32_t new_level = new_node->level + 1;
    uint32_t new_gsize = ADDR_SIZE - new_node->checkedsize - new_node->gsize;  
    if(!extractBitsRange(current->guard, 1, (current->gsize -1))){
        uint32_t new_rightguard = ((1 << new_gsize) -1) & (value);
        new_node->left = current;
        new_node->right = createChildrenNode(new_level, new_checkedsize, new_rightguard, new_gsize);
    } else {
        uint32_t new_leftguard = 0;
        new_node->right = current;
        new_node->left = createChildrenNode(new_level, new_checkedsize, new_leftguard, new_gsize);
    }
    levelUp(current);
}

static int height(const grt_node* node)
{
    if (node == NULL)
        return 0;
    else {
        /* compute the height of each subtree */
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        /* use the larger one */
        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }
}

static int search(const uint32_t value, grt_node ** node) {
    // Check root 
    if (root == NULL || root->right == NULL || root->left == NULL) {
        puts("[M-Mode] GRT not initialized!");
        return -1;
    }
    grt_node* current = root;
 
    while(1){
        // Last level, check the guard!
        if (current->hint == 0) {  
            if(checkGuard(value, current->guard, current->gsize, current->checkedsize)){
                *node = current;
                return 1;
            }
            else{
                return 0;
            }   
        } 
        else if (current->hint == 1) {                  
            current = current->right;
        } 
        else if (current->hint == 2) {
            current = current->left;
        }
        //chech guard and if it exist continue trie traversal
        else { 
            if(!checkGuard(value, current->guard, current->gsize, current->checkedsize)){   
                return 0;
            }
            else{
                uint32_t mask = 1 << ((ADDR_SIZE - current->checkedsize - current->gsize)-1); // take the bit after the guard
                if (value & mask) {
                    current = current->right;
                } else {
                    current = current->left;
                }
            }
        }
    }
}

static void nlvlFill(){
    if(root == NULL) return;

    int front,rear;
    struct grt_node** queue = createQueue(&front, &rear);
    struct grt_node* temp_node = root;   
    uint32_t h = height(root) + 1;                    //plus 1 for the limit table
    nlvl = (uint32_t*)malloc(h * sizeof(uint32_t));   //Number of elements for level
    for(int i=0; i<h; i++){
        nlvl[i]=0;
    }

    // Level Ordered Traversal
    while (temp_node) {
        nlvl[temp_node->level]++;                                       // Increment number of nodes for the level
        if(temp_node->limit) nlvl[h-1] = nlvl[h-1] + temp_node->hint;   // Increment number of limit tables
        
        if (temp_node->left)
            enQueue(queue, &rear, temp_node->left);
        if (temp_node->right)
            enQueue(queue, &rear, temp_node->right); 
        temp_node = deQueue(queue, &front);
    }
}

static void writeBanks(uint32_t* rpm, uint32_t* rpm_index, grt_node* node, 
                                    uint32_t * current_addr_off, const uint32_t h){
    uint32_t bank_offset = BANK_OFFSET;    
    uint32_t local_gsize = 0;
    uint32_t cfg = 0;
    uint16_t nptr = 0;
    uint32_t current_level = 0;
    uint32_t next_addr_start = 0;
    uint32_t* bank0 = rpm;
    uint32_t* bank1 = rpm + bank_offset;
    
    if (node == root) return;                       //The root node is not in the RPM

    // find NPTR
   if(node->hint == 3){                             //The node has two children
        current_level = node->level;
        for(int i = 1; i <= current_level; i++){    //Start from 1 beacuse root node is not in the rpm
            next_addr_start = next_addr_start + nlvl[i];
        } 
        nptr = next_addr_start + current_addr_off[current_level];  
        current_addr_off[current_level] = current_addr_off[current_level] + 2;
    } 
    else if(node->limit){                           // node points to the limit table
        node->gsize = 1;
        for(int i = 1; i < h-1; i++){               // next level start = limit table
           next_addr_start = next_addr_start + nlvl[i];
        }  
        nptr = next_addr_start + current_addr_off[h-1];
        current_addr_off[h-1]= current_addr_off[h-1] + node->hint;
        //write limit table 
        for(int i = 0;i < node->hint; i++){            //all limit tables
            bank0[nptr] = node->limit_table->range | node->limit_table->perm;
            bank1[nptr] = node->limit_table->reloc_off;
        }
    }
    nptr=nptr*4;                                    //byte addressable cpu
 
    //check on gsize??
    //local_gsize = (node->gsize == 32) ? 0 : node->gsize;
    //local_gsize = (node->gsize) - 1;
    node->gsize = (node->gsize) - 1;

    // Write cfg 
    cfg = ((uint64_t)nptr << NPTR_SHIFT) | ((uint64_t)node->valid << VALID_SHIFT) |
      ((uint64_t)node->limit << LIMIT_SHIFT) | ((uint64_t)local_gsize << GSIZE_SHIFT) |
      ((uint64_t)node->hint << HINT_SHIFT);

    // Write banks
    bank0[*rpm_index] = cfg;
    bank1[*rpm_index] = 0; //node->guard;

    *rpm_index= *rpm_index + 1;
}

int writeRPM(uint32_t * rpm){
    nlvlFill();
    int front,rear;
    struct grt_node** queue = createQueue(&front, &rear);
    struct grt_node* temp_node = root;
    uint32_t rpm_index=0;
    uint32_t h = height(root) + 1;  // plus 1 for the limit tables
    uint32_t* current_addr_off = (uint32_t*) malloc(h*sizeof(uint32_t)); 

    for(int i = 0; i < h; i++){
        current_addr_off[i] = 0;
    }

    // Level Ordered Traversal of the trie
    while (temp_node) {
        writeBanks(rpm, &rpm_index, temp_node, current_addr_off, h);

        if (temp_node->left)
            enQueue(queue, &rear, temp_node->left);
        if (temp_node->right)
            enQueue(queue, &rear, temp_node->right);
        temp_node = deQueue(queue, &front); 
    }

    free(current_addr_off);
    return 0;
}

int insertAddr(const uint32_t value) {
    // Check root 
    if (root == NULL || root->right == NULL || root->left == NULL) {
        puts("[M-Mode] Error: GRT not initialized!");
        return -1;
    }
    grt_node* current = root;
    grt_node* parent = NULL;
    while (1) { 
        // Check if the node has children (and how many)
        if (current->hint == 0) {                       // No children
            // Check Value to see if the node already exist.
            if(checkGuard(value, current->guard, current->gsize, current->checkedsize)){
                if(!current->valid){
                    // The node exist but now is valid
                    current->valid = 1;
                }
                else{
                    // The node exist and is already valid (it is an error?)
                    // puts("[M-Mode] Error, the node alredy exists!\n");           
                    // return -1;
                }
                return 0;
            }
            // Find the new guard for the current node 
            findGuard(value, &current->guard, &current->gsize, current->checkedsize);           
            // Current node now became a parent 
            becomeParent(current,value);
            return 0;
        } 
        else if (current->hint == 1) {                // only left child
            puts("[M-Mode] NOT IMPLEMENTED (HINT 1)\n");
            return -1;
        } 
        else if (current->hint == 2) {                // only right child
            puts("[M-Mode] NOT IMPLEMENTED (HINT 2)\n");
            return -1;
        } 
        else {                                        // Both exists
            // Check the guard, if the guard is not the same a node is created in the middle of the tree
            if(!checkGuard(value, current->guard, current->gsize, current->checkedsize)){
                insertInTheMiddle(&current,&parent,value);
                return 0;
            }   
            // Continue trie traversal
            else{        
                uint32_t mask = 1 << ((ADDR_SIZE - current->checkedsize - current->gsize)-1); // take the bit after the guard
                if (value & mask) {
                    parent = current;           
                    current = current->right;
                } else {
                    parent = current; 
                    current = current->left;
                }
            } 
        }
    }
    return 0;
}

int setAddrCfg(const uint32_t value, const uint32_t reloc_off, 
                    const uint32_t range, const uint8_t perm){
    grt_node* node = NULL;
    // Search the node
    search(value, &node);
    if(node != NULL){
        // Configure the Limit table
        node->limit_table = createLimit(range, perm, reloc_off);
        node->limit = 1;
        node->valid = 1;
        node->hint++;
    }
}

int grtInit() {
    uint32_t value=0x013;
    // Program the xpmpcfg register to enable the TRIE. Bit 0 is the only writable
    __asm__ inline("csrw 0x7c4, %0" :: "r"(value));
    
    // Init memory for dynamic allocation
    init_memory();
    
    // Create the default grt structure
    if( root != NULL){
        puts("[M-Mode] GRT already initialized!");
        return -1;
    }
    root = createParentNode(0, 0, 0, 0);
    root->left = createChildrenNode(1,0,0,32);
    root->right = createChildrenNode(1,0,1<<31,32); 

    return 0;
}

static void deleteNode(grt_node* node){
    if(node == NULL) return;
    deleteNode(node->left);
    deleteNode(node->right);
    free(node); 
    return;  
}

void deleteTree(){
    if(root == NULL) return;
    deleteNode(root->left);
    deleteNode(root->right);
    free(root);
    if(nlvl != NULL) free(nlvl);
    return;
}

// Print Utilities

// Print size bits of the value
static void printSizeBits(const uint32_t value, const uint8_t size) {
    char binaryString[size + 1]; // +1 for null terminator
    binaryString[size] = '\0';

    for (int i = size - 1; i >= 0; i--) {
        binaryString[size - 1 - i] = (value & (1 << i)) ? '1' : '0';
    }

    puts("\t(0b"); 
    puts(binaryString);
    puts(")"); 
}

// Print Limit Node
static void printLimitNode(const limit_node* limit_node){
    if(limit_node == NULL){
        puts("[M-Mode] Limit Node is NULL\n");
        return;
    }
    puts("[M-Mode] \tLimit Table:\n");
    puts("[M-Mode] \t\tRange:\t\t0x");
    puthex(limit_node->range);
    puts("\n"); 
    puts("[M-Mode] \t\tPerm:\t\t");
    putdec(limit_node->perm);
    puts("\n"); 
    puts("[M-Mode] \t\tReloc:\t\t0x");
    puthex(limit_node->reloc_off);
    puts("\n"); 
}

// Print Node
static void printNode(const grt_node* node) {
    if (node == NULL) {
        puts("[M-Mode] Node is NULL.\n");
        return;
    }
    puts("[M-Mode] Level:\t");    
    putdec(node->level);
    puts("\n"); 
    puts("[M-Mode] \tGuard:\t0x");
    puthex(node->guard);
    printSizeBits(node->guard,node->gsize); 
    puts("\n"); 
    puts("[M-Mode] \tGuard Size:\t");
    putdec(node->gsize);
    puts("\n");
    puts("[M-Mode] \tChecked Size:\t");
    putdec(node->checkedsize);
    puts("\n");
    puts("[M-Mode] \tValid:\t\t");
    putdec(node->valid);
    puts("\n");
    puts("[M-Mode] \tLimit:\t\t");
    putdec(node->limit);
    puts("\n");
    puts("[M-Mode] \tHint:\t\t"); 
    putdec(node->hint);
    puts("\n");

    if(node->limit_table != NULL){
        printLimitNode(node->limit_table);
    }
}

// Print all the trie
static void printGRT(const grt_node* node) {
    if (node == NULL) {
        return;
    }
    printNode(node);
    printGRT(node->left);
    printGRT(node->right);
}

void printTree(){
    printGRT(root);
}
// Level Ordered Print of the trie
void printLevelOrder()
{
    int rear, front;
    struct grt_node** queue = createQueue(&front, &rear);
    struct grt_node* temp_node = root;
 
    while (temp_node) {
        printNode(temp_node);
 
        // Enqueue left child
        if (temp_node->left)
            enQueue(queue, &rear, temp_node->left);
 
        // Enqueue right child
        if (temp_node->right)
            enQueue(queue, &rear, temp_node->right);
 
        // Dequeue node and make it temp_node
        temp_node = deQueue(queue, &front);
    }
}
 