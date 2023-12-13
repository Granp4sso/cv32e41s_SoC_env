/**
 * \file BMC.c
 * \author Davide Marcello
 * \author Francesco Bianco
 * \author Sossio Cirillo
 * \brief 
 * Implementazione delle funzionalità previste per il protocollo BMC.
 * 
 */

#include <stdint.h>
#include <string.h>
#include "spi.h"
#include "dev_access.h"
#include "demo_system.h"
#include "timer.h"
#include "BMC.h"

#define STAMPA 1

static uint8_t BMCHeader(HeaderType type, uint8_t length);
static void BMCsend(HeaderType type,uint8_t * data, uint8_t length);
static uint8_t BMCreceive(HeaderType * type , uint8_t *);
static uint8_t BMCGetPublicKey(uint8_t * data);
static uint8_t BMCCreateCertificate(uint8_t * data);
static uint8_t BMCCheckCertificate(uint8_t * certificate);
static uint8_t BMCGetCertificate(uint8_t * data);

static spi_t spi;
static uint8_t peer_autenticated = 0;
static HeaderType last_header = PEERUNKHELLO;
static uint8_t publicKey[MAX_LENGTH];
static uint8_t dataCert[MAX_LENGTH];
static HeaderType state;

void BMCinit(){
    uint8_t * spi_reg = (uint8_t *) 0x80004000;
    uint32_t speed;
    spi_init(&spi, spi_reg, speed);
    //spi_slave_interrupt_enable();
    state = PEERUNKHELLO;
}

HeaderType BMCAuthenticate (){
    uint8_t data[MAX_LENGTH];
    switch (state)
    {
    case PEERUNKHELLO:
        switch (last_header){
            case PEERUNKHELLO:
                
                BMCsend(PEERUNKHELLO,data,0);
                #ifdef STAMPA
                puts("[BMC] case PEERUNKHELLO\n");
                #endif
                state = KEYEXC;
                break;
            default:
                BMCsend(PEERREJECT,data,0);
                #ifdef STAMPA
                puts("[BMC] ERROR case PEERUNKHELLO\n");
                #endif       
                break;
        }
        break;
    case PEERHELLO:
        switch (last_header){
            case PEERUNKHELLO:
                BMCsend(PEERHELLO,data,0);
                uint8_t length = BMCGetPublicKey(data);
                BMCsend(KEYEXC,data,length);
                #ifdef STAMPA
                puts("[BMC] case PEERHELLO\n");
                #endif
                state = CERTSENT;
                break;
            default:
                BMCsend(PEERREJECT,data,0);
                #ifdef STAMPA
                puts("[BMC] ERROR case PEERHELLO\n");
                #endif
                break;
        }
        break;
    case KEYEXC:
        switch (last_header){
            case PEERHELLO:
                state = CERTSENT;
                #ifdef STAMPA
                puts("[BMC] case KEYEXC\n");
                #endif
                break;
            default:
                BMCsend(PEERREJECT,data,0);
                #ifdef STAMPA
                puts("[BMC] ERROR case KEYEXC\n");
                #endif      
                break;
        }
        break;
    case CERTSENT:
        switch (last_header){
            case KEYEXC:
                uint8_t length = BMCCreateCertificate(data);
                BMCsend(CERTSENT,data,length);
                BMCsend(FINISH,data,0);
                #ifdef STAMPA
                puts("[BMC] case Send Certificate\n");
                #endif
                state = FINISH;
                break;
            case CERTSENT:
                #ifdef STAMPA
                puts("[BMC] case Check Certificate\n");
                #endif
                if(BMCCheckCertificate(dataCert) == 1){
                    state = PEERACCEPT;
                }
                else{
                    state = PEERREJECT;
                }   
                break;
            default:
                BMCsend(PEERREJECT,data,0);
                #ifdef STAMPA
                puts("[BMC] ERROR case CERTSENT\n");
                #endif
                break;
        }
        break;
    case FINISH:
        switch (last_header){
            case PEERACCEPT:
                #ifdef STAMPA
                puts("[BMC] case FINISH Peer autenticated\n");
                #endif
                peer_autenticated = 1;
                state = PEERUNKHELLO;
                return PEERACCEPT;
                break;
            case PEERREJECT:
                #ifdef STAMPA
                puts("[BMC] case FINISH Peer not autenticated\n");
                #endif
                peer_autenticated = 0;
                state = PEERUNKHELLO;
                last_header = PEERUNKHELLO;
                return PEERREJECT;
            default:
                BMCsend(PEERREJECT,data,0);
                #ifdef STAMPA
                puts("[BMC] ERROR case FINISH\n");
                #endif
                break;
        }
        break;
    case PEERACCEPT:
        switch (last_header){
            case FINISH:
                peer_autenticated = 1;
                state = PEERUNKHELLO;
                last_header = PEERUNKHELLO;
                BMCsend(PEERACCEPT,data,0);
                #ifdef STAMPA
                puts("[BMC] PEER autenticated\n");
                #endif
                return FINISH;
                break;
            default:
                BMCsend(PEERREJECT,data,0);
                #ifdef STAMPA
                puts("[BMC] ERROR case PEERACCEPT\n");
                #endif
                state = PEERUNKHELLO;
                last_header = PEERUNKHELLO;
                break;
        }
        break;
    case PEERREJECT:
        peer_autenticated = 0;
        state = PEERUNKHELLO;
        last_header = PEERUNKHELLO;
        #ifdef STAMPA
        puts("[BMC] PEER not autenticated\n");
        #endif
        BMCsend(PEERREJECT,data,0);
        return FINISH;
        break;
        
    default:
        state = PEERUNKHELLO;
        BMCsend(PEERREJECT,data,0);
        #ifdef STAMPA
        puts("[BMC] ERROR case DEFAULT\n");
        #endif  
        break;
    }
    return PEERUNKHELLO;
}

void BMCSendData(uint8_t * data, uint8_t length){
    if(peer_autenticated){
        BMCsend(DATA,data,length);
    }
}

HeaderType BMCReceiveData(uint8_t * data,uint8_t * length){
    HeaderType type;
    uint8_t received[MAX_LENGTH];
    uint8_t len;
    len = BMCreceive(&type,received);
    last_header = type;
    if(type == DATA){
        for(int i=0;i<len;i++){
            data[i] = received[i];
        }
        *length = len;
        return type;
    } 
    if(type == PEERUNKHELLO) state = PEERHELLO;
    if(type == CERTSENT) {
        for(int i=0;i<len;i++){
            dataCert[i] = received[i];
        }
    }
    return BMCAuthenticate();
}


/**
 * \brief 
 * Funzione di creazione dell'header di un pacchetto BMC
 *
 * \details
 * La funzione ha lo scopo di creare l'header di un pacchetto BMC.
 * L'Header ha la dimesione di 1 byte, dove i 3 bit più significativi contengono 
 * l'identificativo del tipo di pacchetto da trasmettere, mentre i restanti 5 bit 
 * contengono la dimensione del pacchetto.
 * Gli identificativi previsti dal protocollo sono i seguenti:
 * PEERUNKHELLO
 * PEERHELLO
 * CERTSENT
 * KEYEXC
 * FINISH
 * PEERACCEPT
 * PEERREJECT
 * DATA
 * 
 *\param[in] type identificativo del pacchetto
 *\param[in] length dimensione in byte del pacchetto
 *
 *\param[out] header header del pacchetto
 */
uint8_t BMCHeader(HeaderType type, uint8_t length){
    uint8_t header = (type << 5) | (length & 0b00011111);
    return header;
}

/**
 * \brief 
 * Funzione di invio di un pacchetto BMC
 *
 * \details
 * La funzione ha lo scopo trasmettere di generare il pacchetto BMC e trasmetterlo 
 * tramite il protocollo spi.
 * 
 *\param[in] type identificativo del pacchetto
 *\param[in] length dimensione in byte del pacchetto
 * \param[in] data puntatore all'area di memoria contenente i dati da inserire nel pacchetto
 * 
 */
void BMCsend(HeaderType type,uint8_t * data, uint8_t length){
    
    uint8_t header = BMCHeader(type,length);
    spi_send_byte_blocking(&spi, header);
    // #ifdef STAMPA
    // puts("[COMMUNICATION] Invio Header: ");
    // puthex(header);
    // puts("\n");
    // #endif 
    
    for(int i=0;i<length;i++){
        
        spi_send_byte_blocking(&spi, data[i]);
        
    }

    // #ifdef STAMPA
    // puts("[COMMUNICATION] Inviati ");
    // putdec(length);
    // puts(" dati \n");
    // #endif

}

/**
 * \brief 
 * Funzione di ricezione di un pacchetto BMC
 *
 * \details
 * La funzione ha lo scopo di prelevare un pacchetto BMC ricevuto tramite il protocollo 
 * spi e di fornire il tipo del pacchetto ricevuto, la lunghezza e i dati presenti.
 * 
 *\param[in] type puntatore all'area di memoria in cui salvare il tipo dle pacchetto ricevuto
 *\param[in] data puntatore all'area di memoria dove sono presenti i dati ricevuti
 * 
 *\param[out] length dimensione in byte del pacchetto ricevuto
 */
uint8_t BMCreceive(HeaderType * type , uint8_t * data){
    char header;
   
    header = spi_recv_byte_blocking(&spi);
    // #ifdef STAMPA
    // puts("[COMMUNICATION] Ricevuto Header ");   
    // puthex(header);
    // puts("\n");
    // #endif   
    *type = header >> 5;
    uint8_t length = (header & 0b00011111);
    for(int i=0;i<length;i++){
        
        data[i] = spi_recv_byte_blocking(&spi);
        
    }
    // #ifdef STAMPA
    // puts("[COMMUNICATION] Ricevuti ");
    // putdec(length);
    // puts(" dati \n");
    // #endif
    return length;

}

/**
 * \brief 
 * Funzione di ottenimento chiave pubblica
 *
 * \details
 * La funzione ha lo scopo di ottenere la chiave pubblica da inviare al Peer per cifrare il certificato di autenticità.
 * 
 *\param[in] data puntatore all'area di memoria da valorizzare con la chiave pubblica
 * 
 *\param[out] length lunghezza in byte della chiave
 */
static uint8_t BMCGetPublicKey(uint8_t * data){
    char key[] = "1";
   for(int i = 0;i<1;i++)
        data[i] = key[i];
    return 1;
}
/**
 * \brief 
 * Funzione di ottenimento certificato di autenticità
 *
 * \details
 * La funzione ha lo scopo di ottenere il certificato di autenticità presente in ROM.
 * 
 *\param[in] data puntatore all'area di memoria da valorizzare con il certificato di autenticità
 * 
 *\param[out] length lunghezza in byte del certificato di autenticità
 */
static uint8_t BMCGetCertificate(uint8_t * data){
    char certificate[] = "B";
    for(int i = 0;i<1;i++)
        data[i] = certificate[i];
    return 1;
}
/**
 * \brief 
 * Funzione di ottenimento certificato
 *
 * \details
 * La funzione ha lo scopo di ottenere il certificato cifrato.
 * 
 *\param[in] data puntatore all'area di memoria da valorizzare con il certificato cifrato
 *\param[in] publicKey puntatore all'area di memoria contenente la chiave pubblica
 * 
 *\param[out] length lunghezza in byte del certificato.
 */
static uint8_t BMCCreateCertificate(uint8_t * data){
    //STUB: questa funzione dovrebbe cifrare il certificato con la chiave pubblica e restituire il certificato cifrato e la sua lunghezza.
    return BMCGetCertificate(data);
}

/**
 * \brief 
 * Funzione di verifica certificato
 *
 * \details
 * La funzione ha lo scopo di verificare il certificato ricevuto.
 * 
 *\param[in] certificate puntatore all'area di memoria contenente il certificato cifrato ricevuto
 * 
 *\param[out] esito operazione. (1 certificato autentico, 0 certificato non autentico)
 */
static uint8_t BMCCheckCertificate(uint8_t * certificate){
    //STUB questa funzione dovrebbe decifrare con la chiave privata il certificato in ingresso e verificare che questo sia conforme con quello ottenuto dalla funzione BMCGetCertificate
    return 1;
}

