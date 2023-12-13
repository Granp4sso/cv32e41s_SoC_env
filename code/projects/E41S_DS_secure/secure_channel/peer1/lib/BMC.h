/**
 * \file BMC.h
 * \author Davide Marcello
 * \author Francesco Bianco
 * \author Sossio Cirillo
 * \brief 
 * Specifica delle funzionalità previste per il protocollo BMC.
 * 
 */

#ifndef BMC_H__
#define BMC_H__

#include <stdint.h>

#define MAX_LENGTH 32

typedef enum{
    PEERUNKHELLO = 0,
    PEERHELLO = 1,
    CERTSENT = 2,
    KEYEXC = 3,
    FINISH = 4,
    PEERACCEPT = 5,
    PEERREJECT = 6,
    DATA = 7
}HeaderType;

/* Dichiarazione funzioni pubbliche */
/**
 * \brief 
 * Funzione di inizializzazione del protocollo BMC
 *
 * \details
 * La funzione ha lo scopo di inizializzare il clock e la periferica spi
 */
void BMCinit();

/**
 * \brief 
 * Funzione di autenticazione del protocollo BMC
 *
 * \details
 * La funzione ha lo scopo gestire tutte le fasi del previste dal protocollo BMC per l'autenticazione, valutando i 
 * pacchetti ricevuti ed eseguendo le azioni previste dal protocollo
 * 
 *\param[in] type tipo del pacchetto ricevuto
 * 
 */
HeaderType BMCAuthenticate ();

/**
 * \brief 
 * Funzione di invio di un pacchetto BMC
 *
 * \details
 * La funzione ha lo scopo trasmettere di generare il pacchetto BMC di tipo DATO e trasmetterlo 
 * tramite lo standard output.
 * 
 *\param[in] length dimensione in byte del pacchetto
 * \param[in] data puntatore all'area di memoria contenente i dati da inserire nel pacchetto
 * 
 */
void BMCSendData(uint8_t * data, uint8_t length);

/**
 * \brief 
 * Funzione di ricezione di un pacchetto BMC
 *
 * \details
 * La funzione ha lo scopo di prelevare un pacchetto DATO BMC ricevuto tramite lo 
 * standard input e di fornire la lunghezza e i dati presenti.
 * 
 *\param[in] data puntatore all'area di memoria dove sono presenti i dati ricevuti
 * 
 *\param[out] length dimensione in byte del pacchetto ricevuto
 */
HeaderType BMCReceiveData(uint8_t * data,uint8_t * length);


#endif