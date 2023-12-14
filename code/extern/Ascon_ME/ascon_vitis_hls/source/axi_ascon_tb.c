#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "crypto_aead.h"

// byte length of public message number
#define CRYPTO_NPUBBYTES 16
// byte length of key
#define CRYPTO_KEYBYTES 16

// #define CRYPTO_ABYTES 32

#define ENCRYPT 0
#define DECRYPT 1


// wrapper for axi_decrypt function to overcome 32-bit parallelism of AXI bus
int wrapper_axi_decrypt( uint32_t *m_1, uint32_t *m_2, uint32_t *m_3, uint32_t *m_4,
		uint32_t *nsec_1, uint32_t *nsec_2, uint32_t *nsec_3, uint32_t *nsec_4,
		const uint32_t *c_1, const uint32_t *c_2, const uint32_t *c_3, const uint32_t *c_4, const uint32_t *c_5, const uint32_t *c_6, const uint32_t *c_7, const uint32_t *c_8,
		  const uint32_t *ad_1, const uint32_t *ad_2, const uint32_t *ad_3, const uint32_t *ad_4,
		  const uint32_t *npub_1, const uint32_t *npub_2, const uint32_t *npub_3, const uint32_t *npub_4,
		  const uint32_t *k_1, const uint32_t *k_2, const uint32_t *k_3, const uint32_t *k_4);


// wrapper for axi_encrypt function to overcome 32-bit parallelism of AXI bus
int wrapper_axi_encrypt(
  uint32_t *c_1, uint32_t *c_2, uint32_t *c_3, uint32_t *c_4, uint32_t *c_5, uint32_t *c_6, uint32_t *c_7, uint32_t *c_8,
const uint32_t *m_1, const uint32_t *m_2, const uint32_t *m_3, const uint32_t *m_4,
  const uint32_t *ad_1, const uint32_t *ad_2, const uint32_t *ad_3,
const uint32_t *ad_4,
  const uint32_t *nsec_1, const uint32_t *nsec_2, const uint32_t *nsec_3, const uint32_t *nsec_4,
  const uint32_t *npub_1, const uint32_t *npub_2, const uint32_t *npub_3, const uint32_t *npub_4,
  const uint32_t *k_1, const uint32_t *k_2, const uint32_t *k_3, const uint32_t *k_4);

// utility function for conversion
void uint32ToByteArray(uint32_t* value, unsigned char* array);

// utility function for debug print
void print(unsigned char c, unsigned char* x, unsigned long long xlen) {
  unsigned long long i;
  //printf("%c[%d]=", c, (int)xlen);
  for (i = 0; i < xlen; ++i) printf("%02x", x[i]);
  printf("\n");
}

// utility function for debug print
void print32char(unsigned char* x) {
  unsigned long long i;
  for (i = 0; i < 4; i++) printf("%02x", x[i]);
}

// utility function for debug print
void print32uint(uint32_t* x) {
	unsigned char c[4];
	uint32ToByteArray(x, c);
	unsigned long long i;
	for (i = 0; i < 4; i++) printf("%02x", c[i]);
}



// utility function for debug print
void print_part(uint32_t x){
	  printf("%08x", x);
	  printf("\n");
}

// testbench main
int main()
{
	// npub = public message number (16 bytes / 128 bits)
	unsigned char npub[16] = {4,7,8,9,5,6,4,3,3,2,5,6,9,8,6,4};

    unsigned char npub_1[4] = {4,7,8,9};
	unsigned char npub_2[4] = {5,6,4,3};
	unsigned char npub_3[4] = {3,2,5,6};
	unsigned char npub_4[4] = {9,8,6,4};

	uint32_t u32_npub_1 = (npub_1[0] << 24) | (npub_1[1] << 16) | (npub_1[2] << 8) | npub_1[3];
	uint32_t u32_npub_2 = (npub_2[0] << 24) | (npub_2[1] << 16) | (npub_2[2] << 8) | npub_2[3];
	uint32_t u32_npub_3 = (npub_3[0] << 24) | (npub_3[1] << 16) | (npub_3[2] << 8) | npub_3[3];
	uint32_t u32_npub_4 = (npub_4[0] << 24) | (npub_4[1] << 16) | (npub_4[2] << 8) | npub_4[3];


	// k = secret key (16 bytes / 128 bits)
    unsigned char k[16] = {11,11,11,11,12,5,5,4,3,2,1,5,5,6,2,14};

    unsigned char k_1[4] = {11,11,11,11};
    unsigned char k_2[4] = {12,5,5,4};
    unsigned char k_3[4] = {3,2,1,5};
    unsigned char k_4[4] = {5,6,2,14};

    uint32_t u32_k_1 = (k_1[0] << 24) | (k_1[1] << 16) | (k_1[2] << 8) | k_1[3];
	uint32_t u32_k_2 = (k_2[0] << 24) | (k_2[1] << 16) | (k_2[2] << 8) | k_2[3];
	uint32_t u32_k_3 = (k_3[0] << 24) | (k_3[1] << 16) | (k_3[2] << 8) | k_3[3];
	uint32_t u32_k_4 = (k_4[0] << 24) | (k_4[1] << 16) | (k_4[2] << 8) | k_4[3];


	// ad = associated data of 16 bytes (16 bytes / 128 bits)
	unsigned char ad[32] = {1,0,0,0,1,1,2,2,3,3,3,3,7,9,8,13};

    unsigned char ad_1[4] = {1,0,0,0};
    unsigned char ad_2[4] = {1,1,2,2};
    unsigned char ad_3[4] = {3,3,3,3};
    unsigned char ad_4[4] = {7,9,8,13};

    uint32_t u32_ad_1 = (ad_1[0] << 24) | (ad_1[1] << 16) | (ad_1[2] << 8) | ad_1[3];
	uint32_t u32_ad_2 = (ad_2[0] << 24) | (ad_2[1] << 16) | (ad_2[2] << 8) | ad_2[3];
	uint32_t u32_ad_3 = (ad_3[0] << 24) | (ad_3[1] << 16) | (ad_3[2] << 8) | ad_3[3];
	uint32_t u32_ad_4 = (ad_4[0] << 24) | (ad_4[1] << 16) | (ad_4[2] << 8) | ad_4[3];


	// m = plain text (16 bytes / 128 bits)
	unsigned char m[16] = {11,11,22,3,1,1,1,1,1,5,4,3,4,3,2,5};

    unsigned char m_1[4] = {11,11,22,3};
    unsigned char m_2[4] = {1,1,1,1};
    unsigned char m_3[4] = {1,5,4,3};
    unsigned char m_4[4] = {4,3,2,5};

    uint32_t u32_m_1 = ((uint32_t)m_1[0] << 24) | ((uint32_t)m_1[1] << 16) | ((uint32_t)m_1[2] << 8) | (uint32_t)m_1[3];
	uint32_t u32_m_2 = ((uint32_t)m_2[0] << 24) | ((uint32_t)m_2[1] << 16) | ((uint32_t)m_2[2] << 8) | (uint32_t)m_2[3];
	uint32_t u32_m_3 = ((uint32_t)m_3[0] << 24) | ((uint32_t)m_3[1] << 16) | ((uint32_t)m_3[2] << 8) | (uint32_t)m_3[3];
	uint32_t u32_m_4 = ((uint32_t)m_4[0] << 24) | ((uint32_t)m_4[1] << 16) | ((uint32_t)m_4[2] << 8) | (uint32_t)m_4[3];


	// c = ciphered text (32 bytes / 256 bits)
    unsigned char c[32];

    unsigned char c_1[4];
    unsigned char c_2[4];
    unsigned char c_3[4];
    unsigned char c_4[4];
    unsigned char c_5[4];
    unsigned char c_6[4];
    unsigned char c_7[4];
    unsigned char c_8[4];

    uint32_t u32_c_1;
    uint32_t u32_c_2;
    uint32_t u32_c_3;
    uint32_t u32_c_4;
    uint32_t u32_c_5;
    uint32_t u32_c_6;
    uint32_t u32_c_7;
    uint32_t u32_c_8;


    // nsec = secret message number (16 bytes / 128 bits)
    unsigned char nsec[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    unsigned char nsec_1[4] = {0,0,0,0};
    unsigned char nsec_2[4] = {0,0,0,0};
    unsigned char nsec_3[4] = {0,0,0,0};
    unsigned char nsec_4[4] = {0,0,0,0};

    uint32_t u32_nsec_1 = (nsec_1[0] << 24) | (nsec_1[1] << 16) | (nsec_1[2] << 8) | nsec_1[3];
	uint32_t u32_nsec_2 = (nsec_2[0] << 24) | (nsec_2[1] << 16) | (nsec_2[2] << 8) | nsec_2[3];
	uint32_t u32_nsec_3 = (nsec_3[0] << 24) | (nsec_3[1] << 16) | (nsec_3[2] << 8) | nsec_3[3];
	uint32_t u32_nsec_4 = (nsec_4[0] << 24) | (nsec_4[1] << 16) | (nsec_4[2] << 8) | nsec_4[3];


    unsigned long long alen = 16;
    unsigned long long mlen = 16;
    unsigned long long clen = 32;		// cipher text length is 32 bytes (256 bits)

    int res_encrypt, res_decrypt;

    printf("\n\n----------------------------------------------\n");
    printf("TESTBENCH START\n");
    printf("----------------------------------------------\n\n");
    printf("KEY k \n ");
    print32char(k_1);
    print32char(k_2);
    print32char(k_3);
    print32char(k_4);
    printf("\n");
    printf("Public Message Number npub \n ");
    print32char(npub_1);
    print32char(npub_2);
    print32char(npub_3);
    print32char(npub_4);
    printf("\n");
    printf("Associated Data ad \n ");
    print32char(ad_1);
    print32char(ad_2);
    print32char(ad_3);
    print32char(ad_4);
    printf("\n");
    printf("Plaintext m \n ");
    print32char(m_1);
    print32char(m_2);
    print32char(m_3);
    print32char(m_4);
    printf("\n");

    printf("\n\n----------------------------------------------\n");
	printf("ENCRYPT TEST\n");
	printf("----------------------------------------------\n\n");

    printf("\nCALLING wrapper_axi_encrypt\n");
    res_encrypt = axi_ascon(ENCRYPT, &u32_c_1,&u32_c_2,&u32_c_3,&u32_c_4,&u32_c_5,&u32_c_6,&u32_c_7,&u32_c_8, &u32_m_1,&u32_m_2,&u32_m_3,&u32_m_4,&u32_ad_1,&u32_ad_2,&u32_ad_3,&u32_ad_4,&u32_nsec_1,&u32_nsec_2,&u32_nsec_3,&u32_nsec_4,&u32_npub_1,&u32_npub_2,&u32_npub_3,&u32_npub_4, &u32_k_1, &u32_k_2, &u32_k_3, &u32_k_4); 		// nsec secret message number is set to 0

    if(res_encrypt == 0)
    	printf("ENCRYPT OK\n");

    printf("CIPHERTEXT (wrapped) \n ");
    print32uint(&u32_c_1);
	print32uint(&u32_c_2);
	print32uint(&u32_c_3);
	print32uint(&u32_c_4);
	print32uint(&u32_c_5);
	print32uint(&u32_c_6);
	print32uint(&u32_c_7);
	print32uint(&u32_c_8);
	printf("\n");


    printf("\nCALLING non-wrapped encrypt\n");
    res_encrypt = crypto_aead_encrypt(c, &clen, m, mlen, ad, alen, nsec, npub, k);

    if(res_encrypt == 0)
    	printf("ENCRYPT OK\n");

    printf("CIPHERTEXT (non-wrapped) \n ");
    print('c', c, clen);

    printf("\n\n----------------------------------------------\n");
	printf("DECRYPT TEST\n");
	printf("----------------------------------------------\n\n");

    printf("CALLING wrapper_axi_decrypt\n");

    uint32_t mf_1;
    uint32_t mf_2;
    uint32_t mf_3;
    uint32_t mf_4;

    uint32_t nsecf_1;
    uint32_t nsecf_2;
    uint32_t nsecf_3;
    uint32_t nsecf_4;

    res_decrypt = axi_ascon(DECRYPT,&u32_c_1,&u32_c_2,&u32_c_3,&u32_c_4,&u32_c_5,&u32_c_6,&u32_c_7,&u32_c_8, &mf_1,&mf_2,&mf_3,&mf_4,&u32_ad_1,&u32_ad_2,&u32_ad_3,&u32_ad_4,&nsecf_1,&nsecf_2,&nsecf_3,&nsecf_4,&u32_npub_1,&u32_npub_2,&u32_npub_3,&u32_npub_4, &u32_k_1, &u32_k_2, &u32_k_3, &u32_k_4); 		// nsec secret message number is set to 0

    if(res_decrypt == 0)
        printf("DECRYPT OK\n");
    printf("PLAINTEXT (wrapped) \n ");
    print32uint(&mf_1);
    print32uint(&mf_2);
    print32uint(&mf_3);
    print32uint(&mf_4);
    printf("\n");

	//printf("NSEC secret message number (wrapped) \n ");
	//print32uint(&nsecf_1);
	//print32uint(&nsecf_2);
	//print32uint(&nsecf_3);
	//print32uint(&nsecf_4);
    //printf("\n");

	printf("\nCALLING non-wrapped decrypt\n");

	unsigned char nsecf[16];

	res_decrypt = crypto_aead_decrypt(m,&mlen,nsecf,c,clen,ad,alen,npub,k);

	if(res_decrypt == 0)
		printf("DECRYPT OK\n");

	printf("PLAINTEXT (non-wrapped) \n ");
	print('m', m, mlen);

	//printf("NSEC secret message number (non-wrapped) \n ");
	//print('n',nsecf,16);

    printf("\n----------------------------------------------\n");
    printf("TESTBENCH END\n");
    printf("----------------------------------------------\n\n");


}
  
 

