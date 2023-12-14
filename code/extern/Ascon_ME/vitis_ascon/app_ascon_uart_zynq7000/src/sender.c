#define SENDER 0


#include <stdio.h>
#include "xbasic_types.h"
#include "xparameters.h" // Contains definitions for all peripherals
#include "platform.h"
#include "xil_printf.h"
#include "xaxi_ascon.h" // Contains hls Ascon (axilite) IP macros and functions
#include "xuartlite.h"

// Define global values for HLS Ascon IP
XAxi_ascon hls_ascon;
XAxi_ascon_Config *hls_ascon_cfg;

// Define global values for uartlite IP
XUartLite uart;
XUartLite_Config *uart_config;

void uint32ToByteArray(u32* value, unsigned char* array) {
    array[0] = (*value >> 24) & 0xFF;
    array[1] = (*value >> 16) & 0xFF;
    array[2] = (*value >> 8) & 0xFF;
    array[3] = *value & 0xFF;
}

void printVector(unsigned char* c, unsigned char* x, unsigned long long xlen) {
  unsigned long long i;
  xil_printf("%s[%d]=", c, (int)xlen);
  for (i = 0; i < xlen; ++i) xil_printf("%02x", x[i]);
  xil_printf("\n");
}

void init_HLS_ascon(){

		int status;
		// Create HLS Ascon IP pointer
		hls_ascon_cfg = XAxi_ascon_LookupConfig(XPAR_XAXI_ASCON_0_DEVICE_ID);

		if (!hls_ascon_cfg) {
			xil_printf(
					"Error loading configuration for hls_ascon_cfg \n\r");
		}

		status = XAxi_ascon_CfgInitialize(&hls_ascon,
				hls_ascon_cfg);
		if (status != XST_SUCCESS) {
			xil_printf("Error initializing for hls_ascon \n\r");
		}

		XAxi_ascon_Initialize(&hls_ascon,
		XPAR_XAXI_ASCON_0_DEVICE_ID);
}


void ascon(int decrypt,unsigned char c[32],
		  unsigned char m[16],
		  const unsigned char ad[16],
		  unsigned char nsec[16],
		  const unsigned char npub[16],
		  const unsigned char k[16]){

	// npub = Public message number
	u32 u32_npub_1 = (npub[0] << 24) | (npub[1] << 16) | (npub[2] << 8) | npub[3];
	u32 u32_npub_2 = (npub[4] << 24) | (npub[5] << 16) | (npub[6] << 8) | npub[7];
	u32 u32_npub_3 = (npub[8] << 24) | (npub[9] << 16) | (npub[10] << 8) | npub[11];
	u32 u32_npub_4 = (npub[12] << 24) | (npub[13] << 16) | (npub[14] << 8) | npub[15];

	XAxi_ascon_Set_npub_1(&hls_ascon, u32_npub_1);
	XAxi_ascon_Set_npub_2(&hls_ascon, u32_npub_2);
	XAxi_ascon_Set_npub_3(&hls_ascon, u32_npub_3);
	XAxi_ascon_Set_npub_4(&hls_ascon, u32_npub_4);

	// k = key
	u32 u32_k_1 = (k[0] << 24) | (k[1] << 16) | (k[2] << 8) | k[3];
	u32 u32_k_2 = (k[4] << 24) | (k[5] << 16) | (k[6] << 8) | k[7];
	u32 u32_k_3 = (k[8] << 24) | (k[9] << 16) | (k[10] << 8) | k[11];
	u32 u32_k_4 = (k[12] << 24) | (k[13] << 16) | (k[14] << 8) | k[15];

	XAxi_ascon_Set_k_1(&hls_ascon, u32_k_1);
	XAxi_ascon_Set_k_2(&hls_ascon, u32_k_2);
	XAxi_ascon_Set_k_3(&hls_ascon, u32_k_3);
	XAxi_ascon_Set_k_4(&hls_ascon, u32_k_4);

	// a = associated data
	u32 u32_ad_1 = (ad[0] << 24) | (ad[1] << 16) | (ad[2] << 8) | ad[3];
	u32 u32_ad_2 = (ad[4] << 24) | (ad[5] << 16) | (ad[6] << 8) | ad[7];
	u32 u32_ad_3 = (ad[8] << 24) | (ad[9] << 16) | (ad[10] << 8) | ad[11];
	u32 u32_ad_4 = (ad[12] << 24) | (ad[13] << 16) | (ad[14] << 8) | ad[15];

	XAxi_ascon_Set_ad_1(&hls_ascon, u32_ad_1);
	XAxi_ascon_Set_ad_2(&hls_ascon, u32_ad_2);
	XAxi_ascon_Set_ad_3(&hls_ascon, u32_ad_3);
	XAxi_ascon_Set_ad_4(&hls_ascon, u32_ad_4);

	if(!decrypt){

		XAxi_ascon_Set_decrypt(&hls_ascon,0);

		// m = plain text
		u32 u32_m_1 = (m[0] << 24) | (m[1] << 16) | (m[2] << 8) | m[3];
		u32 u32_m_2 = (m[4] << 24) | (m[5] << 16) | (m[6] << 8) | m[7];
		u32 u32_m_3 = (m[8] << 24) | (m[9] << 16) | (m[10] << 8) | m[11];
		u32 u32_m_4 = (m[12] << 24) | (m[13] << 16) | (m[14] << 8) | m[15];

		XAxi_ascon_Set_m_1_i(&hls_ascon, u32_m_1);
		XAxi_ascon_Set_m_2_i(&hls_ascon, u32_m_2);
		XAxi_ascon_Set_m_3_i(&hls_ascon, u32_m_3);
		XAxi_ascon_Set_m_4_i(&hls_ascon, u32_m_4);

		// nsec = secret message number
		u32 u32_nsec_1 = (nsec[0] << 24) | (nsec[1] << 16) | (nsec[2] << 8) | nsec[3];
		u32 u32_nsec_2 = (nsec[4] << 24) | (nsec[5] << 16) | (nsec[6] << 8) | nsec[7];
		u32 u32_nsec_3 = (nsec[8] << 24) | (nsec[9] << 16) | (nsec[10] << 8) | nsec[11];
		u32 u32_nsec_4 = (nsec[12] << 24) | (nsec[13] << 16) | (nsec[14] << 8) | nsec[15];

		XAxi_ascon_Set_nsec_1_i(&hls_ascon, u32_nsec_1);
		XAxi_ascon_Set_nsec_2_i(&hls_ascon, u32_nsec_2);
		XAxi_ascon_Set_nsec_3_i(&hls_ascon, u32_nsec_3);
		XAxi_ascon_Set_nsec_4_i(&hls_ascon, u32_nsec_4);

		xil_printf("[ASCON] ENCRYPT start \n");
		XAxi_ascon_Start(&hls_ascon);
		// Wait until it is finished
		while (!XAxi_ascon_IsDone(&hls_ascon));

		u32 u32_c_1 = XAxi_ascon_Get_c_1_o(&hls_ascon);
		u32 u32_c_2 = XAxi_ascon_Get_c_2_o(&hls_ascon);
		u32 u32_c_3 = XAxi_ascon_Get_c_3_o(&hls_ascon);
		u32 u32_c_4 = XAxi_ascon_Get_c_4_o(&hls_ascon);
		u32 u32_c_5 = XAxi_ascon_Get_c_5_o(&hls_ascon);
		u32 u32_c_6 = XAxi_ascon_Get_c_6_o(&hls_ascon);
		u32 u32_c_7 = XAxi_ascon_Get_c_7_o(&hls_ascon);
		u32 u32_c_8 = XAxi_ascon_Get_c_8_o(&hls_ascon);

		uint32ToByteArray(&u32_c_1, &c[0]);
		uint32ToByteArray(&u32_c_2, &c[4]);
		uint32ToByteArray(&u32_c_3, &c[8]);
		uint32ToByteArray(&u32_c_4, &c[12]);
		uint32ToByteArray(&u32_c_5, &c[16]);
		uint32ToByteArray(&u32_c_6, &c[20]);
		uint32ToByteArray(&u32_c_7, &c[24]);
		uint32ToByteArray(&u32_c_8, &c[28]);

		int res_encrypt;

		res_encrypt = XAxi_ascon_Get_return(&hls_ascon);

		/*if(res_encrypt == 0)
			xil_printf("OK\n");

		xil_printf("\n");
		xil_printf("KEY: ");
		printVector("k", k, 16);
		xil_printf("Public Message Number: ");
		printVector("npub", npub, 16);
		xil_printf("Associated Data: ");
		printVector("ad", ad, 16);

		xil_printf("\n");*/

		xil_printf("PLAINTEXT: ");
		printVector("m", m, 16);
		xil_printf("CIPHERTEXT: ");
		printVector("c",c,32);

		/*xil_printf("\n----------------------------------------------\n\n");*/

	} else {

		XAxi_ascon_Set_decrypt(&hls_ascon,1);

		// c = Ciphertext
		u32 u32_c_1 = (c[0] << 24) | (c[1] << 16) | (c[2] << 8) | c[3];
		u32 u32_c_2 = (c[4] << 24) | (c[5] << 16) | (c[6] << 8) | c[7];
		u32 u32_c_3 = (c[8] << 24) | (c[9] << 16) | (c[10] << 8) | c[11];
		u32 u32_c_4 = (c[12] << 24) | (c[13] << 16) | (c[14] << 8) | c[15];
		u32 u32_c_5 = (c[16] << 24) | (c[17] << 16) | (c[18] << 8) | c[19];
		u32 u32_c_6 = (c[20] << 24) | (c[21] << 16) | (c[22] << 8) | c[23];
		u32 u32_c_7 = (c[24] << 24) | (c[25] << 16) | (c[26] << 8) | c[27];
		u32 u32_c_8 = (c[28] << 24) | (c[29] << 16) | (c[30] << 8) | c[31];

		XAxi_ascon_Set_c_1_i(&hls_ascon, u32_c_1);
		XAxi_ascon_Set_c_2_i(&hls_ascon, u32_c_2);
		XAxi_ascon_Set_c_3_i(&hls_ascon, u32_c_3);
		XAxi_ascon_Set_c_4_i(&hls_ascon, u32_c_4);
		XAxi_ascon_Set_c_5_i(&hls_ascon, u32_c_5);
		XAxi_ascon_Set_c_6_i(&hls_ascon, u32_c_6);
		XAxi_ascon_Set_c_7_i(&hls_ascon, u32_c_7);
		XAxi_ascon_Set_c_8_i(&hls_ascon, u32_c_8);

		xil_printf("[ASCON] DECRYPT start \n");

		XAxi_ascon_Start(&hls_ascon);
		// Wait until it is finished
		while (!XAxi_ascon_IsDone(&hls_ascon));

		u32 u32_m_1 = XAxi_ascon_Get_m_1_o(&hls_ascon);
		u32 u32_m_2 = XAxi_ascon_Get_m_2_o(&hls_ascon);
		u32 u32_m_3 = XAxi_ascon_Get_m_3_o(&hls_ascon);
		u32 u32_m_4 = XAxi_ascon_Get_m_4_o(&hls_ascon);

		u32 u32_nsec_1 = XAxi_ascon_Get_nsec_1_o(&hls_ascon);
		u32 u32_nsec_2 = XAxi_ascon_Get_nsec_2_o(&hls_ascon);
		u32 u32_nsec_3 = XAxi_ascon_Get_nsec_3_o(&hls_ascon);
		u32 u32_nsec_4 = XAxi_ascon_Get_nsec_4_o(&hls_ascon);

		uint32ToByteArray(&u32_m_1, &m[0]);
		uint32ToByteArray(&u32_m_2, &m[4]);
		uint32ToByteArray(&u32_m_3, &m[8]);
		uint32ToByteArray(&u32_m_4, &m[12]);

		uint32ToByteArray(&u32_nsec_1, &nsec[0]);
		uint32ToByteArray(&u32_nsec_2, &nsec[4]);
		uint32ToByteArray(&u32_nsec_3, &nsec[8]);
		uint32ToByteArray(&u32_nsec_4, &nsec[12]);

		int res_decrypt;

		res_decrypt = XAxi_ascon_Get_return(&hls_ascon);

		/*if(res_decrypt == 0)
			xil_printf("OK\n");

		xil_printf("\n");
		xil_printf("KEY: ");
		printVector("k", k, 16);
		xil_printf("Public Message Number: ");
		printVector("npub", npub, 16);
		xil_printf("Associated Data: ");
		printVector("ad", ad, 16);

		xil_printf("\n");

		xil_printf("CIPHERTEXT: ");
		printVector("c",c,32);
		xil_printf("PLAINTEXT: ");
		printVector("m", m, 16);

		xil_printf("\n----------------------------------------------\n\n");*/
	}
}


int main()
{
#ifdef SENDER
	xil_printf("[TX] SENDER START \n");
#endif
#ifdef RECEIVER
	xil_printf("[RX] RECEIVER START \n");
#endif

	// initializations
    init_platform();
    init_HLS_ascon();
    XUartLite_Initialize(&uart, XPAR_AXI_UARTLITE_0_DEVICE_ID);

	// k = key
	unsigned char k[16] = {11,11,11,11,12,5,5,4,3,2,1,5,5,6,2,14};

	// npub = Public message number
	unsigned char npub[16] = {4,7,8,9,5,6,4,3,3,2,5,6,9,8,6,4};

	// a = associated data
	unsigned char ad[16] = {1,0,0,0,1,1,2,2,3,3,3,3,7,9,8,13};

	// nsec = secret message number
	unsigned char nsec[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	// c = ciphertext
	unsigned char c[32] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	#ifdef SENDER
	// m = plain text
	unsigned char m[16] = {11,11,22,3,1,1,1,1,1,5,4,3,4,3,2,5};

	xil_printf("[TX] Cifratura messaggio... \n");
	// call Ascon IP to encrypt
	ascon(0,c,m,ad,nsec,npub,k);
	xil_printf("[TX] Cifratura messaggio OK\n");

	xil_printf("[TX] Invio messaggio cifrato tramite UART... \n");

	int byte_sent = 0;

	while (byte_sent < 32) {
			while(XUartLite_Send(&uart, c+byte_sent, 1) == 0);
			while(XUartLite_IsSending(&uart));
			byte_sent++;
	}

	xil_printf("[TX] Invio messaggio cifrato tramite UART OK\n");
	#endif

	#ifdef RECEIVER

	// result = decrypted, received message
	unsigned char result[16] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	xil_printf("[RX] Ricezione messaggio cifrato tramite UART... \n");

	int byte_received = 0;
	while (byte_received < 32) {
		while(XUartLite_Recv(&uart, c+byte_received, 1) == 0);
		byte_received++;
	}

	xil_printf("[RX] Ho ricevuto: ");
	printVector("c",c,32);

	xil_printf("[RX] Ricezione messaggio cifrato tramite UART OK\n");

	xil_printf("[RX] Decifratura messaggio... \n");
	ascon(1,c,result,ad,nsec,npub,k);
	xil_printf("[RX] Decifratura messaggio OK \n");

	xil_printf("[RX] Messaggio ricevuto e decifrato: ");
	printVector("result",result,16);
	#endif

    cleanup_platform();
    return 0;
}
