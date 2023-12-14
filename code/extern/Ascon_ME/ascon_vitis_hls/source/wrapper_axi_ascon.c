#include "crypto_aead.h"
#include <stdint.h>
#include <stdio.h>


void uint32ToByteArray(uint32_t* value, unsigned char* array) {
    array[0] = (*value >> 24) & 0xFF;
    array[1] = (*value >> 16) & 0xFF;
    array[2] = (*value >> 8) & 0xFF;
    array[3] = *value & 0xFF;
}

int axi_ascon(
  int decrypt,
  uint32_t *c_1, uint32_t *c_2, uint32_t *c_3, uint32_t *c_4, uint32_t *c_5, uint32_t *c_6, uint32_t *c_7, uint32_t *c_8,
  uint32_t *m_1, uint32_t *m_2, uint32_t *m_3, uint32_t *m_4,
  const uint32_t *ad_1, const uint32_t *ad_2, const uint32_t *ad_3, const uint32_t *ad_4,
  uint32_t *nsec_1, uint32_t *nsec_2, uint32_t *nsec_3, uint32_t *nsec_4,
  const uint32_t *npub_1, const uint32_t *npub_2, const uint32_t *npub_3, const uint32_t *npub_4,
  const uint32_t *k_1, const uint32_t *k_2, const uint32_t *k_3, const uint32_t *k_4) {

	// flag
	#pragma HLS INTERFACE s_axilite port=decrypt bundle=BUS_A

	// ciphertext
	#pragma HLS INTERFACE s_axilite port=c_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_4 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_5 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_6 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_7 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_8 bundle=BUS_A

	// plaintext
	#pragma HLS INTERFACE s_axilite port=m_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=m_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=m_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=m_4 bundle=BUS_A

	// associated data
	#pragma HLS INTERFACE s_axilite port=ad_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=ad_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=ad_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=ad_4 bundle=BUS_A

	// secret message number
	#pragma HLS INTERFACE s_axilite port=nsec_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=nsec_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=nsec_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=nsec_4 bundle=BUS_A

	// public message number
	#pragma HLS INTERFACE s_axilite port=npub_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=npub_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=npub_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=npub_4 bundle=BUS_A

	// secret key
	#pragma HLS INTERFACE s_axilite port=k_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=k_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=k_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=k_4 bundle=BUS_A

	#pragma HLS INTERFACE s_axilite port=return bundle=BUS_A

	unsigned char c[32];

	uint32ToByteArray(c_1, &c[0]);
	uint32ToByteArray(c_2, &c[4]);
	uint32ToByteArray(c_3, &c[8]);
	uint32ToByteArray(c_4, &c[12]);
	uint32ToByteArray(c_5, &c[16]);
	uint32ToByteArray(c_6, &c[20]);
	uint32ToByteArray(c_7, &c[24]);
	uint32ToByteArray(c_8, &c[28]);

	unsigned char m[16];

	uint32ToByteArray(m_1, &m[0]);
	uint32ToByteArray(m_2, &m[4]);
	uint32ToByteArray(m_3, &m[8]);
	uint32ToByteArray(m_4, &m[12]);

	unsigned char ad[16];

	uint32ToByteArray(ad_1, &ad[0]);
	uint32ToByteArray(ad_2, &ad[4]);
	uint32ToByteArray(ad_3, &ad[8]);
	uint32ToByteArray(ad_4, &ad[12]);

	unsigned char nsec[16];

	uint32ToByteArray(nsec_1, &nsec[0]);
	uint32ToByteArray(nsec_2, &nsec[4]);
	uint32ToByteArray(nsec_3, &nsec[8]);
	uint32ToByteArray(nsec_4, &nsec[12]);

	unsigned char npub[16];

	uint32ToByteArray(npub_1, &npub[0]);
	uint32ToByteArray(npub_2, &npub[4]);
	uint32ToByteArray(npub_3, &npub[8]);
	uint32ToByteArray(npub_4, &npub[12]);

	unsigned char k[16];

	uint32ToByteArray(k_1, &k[0]);
	uint32ToByteArray(k_2, &k[4]);
	uint32ToByteArray(k_3, &k[8]);
	uint32ToByteArray(k_4, &k[12]);

	unsigned long long clen;
	unsigned long long mlen;

	if(decrypt==0) {

		int result = crypto_aead_encrypt(c, &clen , m, 16, ad, 16, nsec, npub, k); // clen = 32, adlen = mlen = 16

		*c_1 = ((uint32_t)c[0] << 24) | ((uint32_t)c[1] << 16) | ((uint32_t)c[2] << 8) | (uint32_t)c[3];
		*c_2 = ((uint32_t)c[4] << 24) | ((uint32_t)c[5] << 16) | ((uint32_t)c[6] << 8) | (uint32_t)c[7];
		*c_3 = ((uint32_t)c[8] << 24) | ((uint32_t)c[9] << 16) | ((uint32_t)c[10] << 8) | (uint32_t)c[11];
		*c_4 = ((uint32_t)c[12] << 24) | ((uint32_t)c[13] << 16) | ((uint32_t)c[14] << 8) | (uint32_t)c[15];
		*c_5 = ((uint32_t)c[16] << 24) | ((uint32_t)c[17] << 16) | ((uint32_t)c[18] << 8) | (uint32_t)c[19];
		*c_6 = ((uint32_t)c[20] << 24) | ((uint32_t)c[21] << 16) | ((uint32_t)c[22] << 8) | (uint32_t)c[23];
		*c_7 = ((uint32_t)c[24] << 24) | ((uint32_t)c[25] << 16) | ((uint32_t)c[26] << 8) | (uint32_t)c[27];
		*c_8 = ((uint32_t)c[28] << 24) | ((uint32_t)c[29] << 16) | ((uint32_t)c[30] << 8) | (uint32_t)c[31];

		return result;

	} else {

		int result = crypto_aead_decrypt(m,&mlen,nsec,c,32,ad,16,npub,k); // clen = 32, adlen = mlen = 16

		*m_1 = ((uint32_t)m[0] << 24) | ((uint32_t)m[1] << 16) | ((uint32_t)m[2] << 8) | (uint32_t)m[3];
		*m_2 = ((uint32_t)m[4] << 24) | ((uint32_t)m[5] << 16) | ((uint32_t)m[6] << 8) | (uint32_t)m[7];
		*m_3 = ((uint32_t)m[8] << 24) | ((uint32_t)m[9] << 16) | ((uint32_t)m[10] << 8) | (uint32_t)m[11];
		*m_4 = ((uint32_t)m[12] << 24) | ((uint32_t)m[13] << 16) | ((uint32_t)m[14] << 8) | (uint32_t)m[15];

		*nsec_1 = ((uint32_t)nsec[0] << 24) | ((uint32_t)nsec[1] << 16) | ((uint32_t)nsec[2] << 8) | (uint32_t)nsec[3];
		*nsec_2 = ((uint32_t)nsec[4] << 24) | ((uint32_t)nsec[5] << 16) | ((uint32_t)nsec[6] << 8) | (uint32_t)nsec[7];
		*nsec_3 = ((uint32_t)nsec[8] << 24) | ((uint32_t)nsec[9] << 16) | ((uint32_t)nsec[10] << 8) | (uint32_t)nsec[11];
		*nsec_4 = ((uint32_t)nsec[12] << 24) | ((uint32_t)nsec[13] << 16) | ((uint32_t)nsec[14] << 8) | (uint32_t)nsec[15];

		return result;
	}
}


int wrapper_axi_encrypt(
  uint32_t *c_1, uint32_t *c_2, uint32_t *c_3, uint32_t *c_4, uint32_t *c_5, uint32_t *c_6, uint32_t *c_7, uint32_t *c_8,
const uint32_t *m_1, const uint32_t *m_2, const uint32_t *m_3, const uint32_t *m_4,
  const uint32_t *ad_1, const uint32_t *ad_2, const uint32_t *ad_3,
const uint32_t *ad_4,
  const uint32_t *nsec_1, const uint32_t *nsec_2, const uint32_t *nsec_3, const uint32_t *nsec_4,
  const uint32_t *npub_1, const uint32_t *npub_2, const uint32_t *npub_3, const uint32_t *npub_4,
  const uint32_t *k_1, const uint32_t *k_2, const uint32_t *k_3, const uint32_t *k_4) {

    // ciphertext
    #pragma HLS INTERFACE s_axilite port=c_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_4 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_5 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_6 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_7 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_8 bundle=BUS_A

	// plaintext
    #pragma HLS INTERFACE s_axilite port=m_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=m_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=m_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=m_4 bundle=BUS_A

	// associated data
    #pragma HLS INTERFACE s_axilite port=ad_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=ad_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=ad_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=ad_4 bundle=BUS_A

    // secret message number
    #pragma HLS INTERFACE s_axilite port=nsec_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=nsec_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=nsec_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=nsec_4 bundle=BUS_A

    // public message number
    #pragma HLS INTERFACE s_axilite port=npub_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=npub_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=npub_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=npub_4 bundle=BUS_A

    // secret key
    #pragma HLS INTERFACE s_axilite port=k_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=k_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=k_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=k_4 bundle=BUS_A

    #pragma HLS INTERFACE s_axilite port=return bundle=BUS_A


	unsigned char c[32];

	unsigned char m[16];

	uint32ToByteArray(m_1, &m[0]);
	uint32ToByteArray(m_2, &m[4]);
	uint32ToByteArray(m_3, &m[8]);
	uint32ToByteArray(m_4, &m[12]);


	/*printf("m_1: %08x\n", *m_1);
	printf("m_2: %08x\n", *m_2);
	printf("m_3: %08x\n", *m_3);
	printf("m_4: %08x\n", *m_4);*/

	/*printf("m del wrapper: ");
	for(int i=0; i<16; i++)
		printf("%02x", m[i]);
	printf("\n");*/


	unsigned char ad[16];


	uint32ToByteArray(ad_1, &ad[0]);
	uint32ToByteArray(ad_2, &ad[4]);
	uint32ToByteArray(ad_3, &ad[8]);
	uint32ToByteArray(ad_4, &ad[12]);

	unsigned char nsec[16];


	uint32ToByteArray(nsec_1, &nsec[0]);
	uint32ToByteArray(nsec_2, &nsec[4]);
	uint32ToByteArray(nsec_3, &nsec[8]);
	uint32ToByteArray(nsec_4, &nsec[12]);


	unsigned char npub[16];


	uint32ToByteArray(npub_1, &npub[0]);
	uint32ToByteArray(npub_2, &npub[4]);
	uint32ToByteArray(npub_3, &npub[8]);
	uint32ToByteArray(npub_4, &npub[12]);

	unsigned char k[16];

	uint32ToByteArray(k_1, &k[0]);
	uint32ToByteArray(k_2, &k[4]);
	uint32ToByteArray(k_3, &k[8]);
	uint32ToByteArray(k_4, &k[12]);

	unsigned long long clen;

    int result = crypto_aead_encrypt(c, &clen , m, 16, ad, 16, nsec, npub, k); // clen = 32, adlen = mlen = 16

    *c_1 = ((uint32_t)c[0] << 24) | ((uint32_t)c[1] << 16) | ((uint32_t)c[2] << 8) | (uint32_t)c[3];
    *c_2 = ((uint32_t)c[4] << 24) | ((uint32_t)c[5] << 16) | ((uint32_t)c[6] << 8) | (uint32_t)c[7];
    *c_3 = ((uint32_t)c[8] << 24) | ((uint32_t)c[9] << 16) | ((uint32_t)c[10] << 8) | (uint32_t)c[11];
    *c_4 = ((uint32_t)c[12] << 24) | ((uint32_t)c[13] << 16) | ((uint32_t)c[14] << 8) | (uint32_t)c[15];
    *c_5 = ((uint32_t)c[16] << 24) | ((uint32_t)c[17] << 16) | ((uint32_t)c[18] << 8) | (uint32_t)c[19];
    *c_6 = ((uint32_t)c[20] << 24) | ((uint32_t)c[21] << 16) | ((uint32_t)c[22] << 8) | (uint32_t)c[23];
    *c_7 = ((uint32_t)c[24] << 24) | ((uint32_t)c[25] << 16) | ((uint32_t)c[26] << 8) | (uint32_t)c[27];
    *c_8 = ((uint32_t)c[28] << 24) | ((uint32_t)c[29] << 16) | ((uint32_t)c[30] << 8) | (uint32_t)c[31];


    return result;
}




int wrapper_axi_decrypt( uint32_t *m_1, uint32_t *m_2, uint32_t *m_3, uint32_t *m_4,
		uint32_t *nsec_1, uint32_t *nsec_2, uint32_t *nsec_3, uint32_t *nsec_4,
		const uint32_t *c_1, const uint32_t *c_2, const uint32_t *c_3, const uint32_t *c_4, const uint32_t *c_5, const uint32_t *c_6, const uint32_t *c_7, const uint32_t *c_8,
		  const uint32_t *ad_1, const uint32_t *ad_2, const uint32_t *ad_3, const uint32_t *ad_4,
		  const uint32_t *npub_1, const uint32_t *npub_2, const uint32_t *npub_3, const uint32_t *npub_4,
		  const uint32_t *k_1, const uint32_t *k_2, const uint32_t *k_3, const uint32_t *k_4){

	// ciphertext
	#pragma HLS INTERFACE s_axilite port=c_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_4 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_5 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_6 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_7 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=c_8 bundle=BUS_A

	// plaintext
	#pragma HLS INTERFACE s_axilite port=m_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=m_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=m_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=m_4 bundle=BUS_A

	// associated data
	#pragma HLS INTERFACE s_axilite port=ad_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=ad_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=ad_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=ad_4 bundle=BUS_A

	// secret message number
	#pragma HLS INTERFACE s_axilite port=nsec_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=nsec_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=nsec_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=nsec_4 bundle=BUS_A

	// public message number
	#pragma HLS INTERFACE s_axilite port=npub_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=npub_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=npub_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=npub_4 bundle=BUS_A

	// secret key
	#pragma HLS INTERFACE s_axilite port=k_1 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=k_2 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=k_3 bundle=BUS_A
	#pragma HLS INTERFACE s_axilite port=k_4 bundle=BUS_A

	#pragma HLS INTERFACE s_axilite port=return bundle=BUS_A


	unsigned char m[16];
	unsigned char nsec[16];


	unsigned char c[32];

	uint32ToByteArray(c_1, &c[0]);
	uint32ToByteArray(c_2, &c[4]);
	uint32ToByteArray(c_3, &c[8]);
	uint32ToByteArray(c_4, &c[12]);
	uint32ToByteArray(c_5, &c[16]);
	uint32ToByteArray(c_6, &c[20]);
	uint32ToByteArray(c_7, &c[24]);
	uint32ToByteArray(c_8, &c[28]);


	/*printf("c_1: %08x\n", *c_1);
	printf("c_2: %08x\n", *c_2);
	printf("c_3: %08x\n", *c_3);
	printf("c_4: %08x\n", *c_4);
	printf("c_5: %08x\n", *c_5);
	printf("c_6: %08x\n", *c_6);
	printf("c_7: %08x\n", *c_7);
	printf("c_8: %08x\n", *c_8);*/


	unsigned char ad[16];


	uint32ToByteArray(ad_1, &ad[0]);
	uint32ToByteArray(ad_2, &ad[4]);
	uint32ToByteArray(ad_3, &ad[8]);
	uint32ToByteArray(ad_4, &ad[12]);



	unsigned char npub[16];


	uint32ToByteArray(npub_1, &npub[0]);
	uint32ToByteArray(npub_2, &npub[4]);
	uint32ToByteArray(npub_3, &npub[8]);
	uint32ToByteArray(npub_4, &npub[12]);

	unsigned char k[16];

	uint32ToByteArray(k_1, &k[0]);
	uint32ToByteArray(k_2, &k[4]);
	uint32ToByteArray(k_3, &k[8]);
	uint32ToByteArray(k_4, &k[12]);

	unsigned long long mlen;

	int result = crypto_aead_decrypt(m,&mlen,nsec,c,32,ad,16,npub,k); // clen = 32, adlen = mlen = 16

	*m_1 = ((uint32_t)m[0] << 24) | ((uint32_t)m[1] << 16) | ((uint32_t)m[2] << 8) | (uint32_t)m[3];
	*m_2 = ((uint32_t)m[4] << 24) | ((uint32_t)m[5] << 16) | ((uint32_t)m[6] << 8) | (uint32_t)m[7];
	*m_3 = ((uint32_t)m[8] << 24) | ((uint32_t)m[9] << 16) | ((uint32_t)m[10] << 8) | (uint32_t)m[11];
	*m_4 = ((uint32_t)m[12] << 24) | ((uint32_t)m[13] << 16) | ((uint32_t)m[14] << 8) | (uint32_t)m[15];

	*nsec_1 = ((uint32_t)nsec[0] << 24) | ((uint32_t)nsec[1] << 16) | ((uint32_t)nsec[2] << 8) | (uint32_t)nsec[3];
	*nsec_2 = ((uint32_t)nsec[4] << 24) | ((uint32_t)nsec[5] << 16) | ((uint32_t)nsec[6] << 8) | (uint32_t)nsec[7];
	*nsec_3 = ((uint32_t)nsec[8] << 24) | ((uint32_t)nsec[9] << 16) | ((uint32_t)nsec[10] << 8) | (uint32_t)nsec[11];
	*nsec_4 = ((uint32_t)nsec[12] << 24) | ((uint32_t)nsec[13] << 16) | ((uint32_t)nsec[14] << 8) | (uint32_t)nsec[15];


	return result;


}
