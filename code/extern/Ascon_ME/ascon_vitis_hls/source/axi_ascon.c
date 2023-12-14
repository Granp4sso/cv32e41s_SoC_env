#include "crypto_aead.h"

// alex

// generating a ciphertext c[0],c[1],...,c[*clen-1]
// from a plaintext m[0],m[1],...,m[mlen-1]
// and associated data ad[0],ad[1],...,ad[adlen-1]
// and secret message number nsec[0],nsec[1],...
// and public message number npub[0],npub[1],...
// and secret key k[0],k[1],...


// clen, mlen, adlen are the bytes length of c, m and ad
// npub 128 bit	(16 bytes)
// nsec 128 bit (16 bytes)
// k 128 bit (16 bytes)

int axi_encrypt(
  unsigned char *c, unsigned long long *clen,
  const unsigned char *m, unsigned long long mlen,
  const unsigned char *ad, unsigned long long adlen,
  const unsigned char *nsec,
  const unsigned char *npub,
  const unsigned char *k) {

    // ciphertext
    #pragma HLS INTERFACE s_axilite port=c bundle=BUS_A
    #pragma HLS INTERFACE s_axilite port=clen bundle=BUS_A
    // plaintext
    #pragma HLS INTERFACE s_axilite port=m bundle=BUS_A
    #pragma HLS INTERFACE s_axilite port=mlen bundle=BUS_A
    // associated data
    #pragma HLS INTERFACE s_axilite port=ad bundle=BUS_A
    #pragma HLS INTERFACE s_axilite port=adlen bundle=BUS_A
    // secret message number
    #pragma HLS INTERFACE s_axilite port=nsec bundle=BUS_A
    // public message number
    #pragma HLS INTERFACE s_axilite port=npub bundle=BUS_A
    // secret key
    #pragma HLS INTERFACE s_axilite port=k bundle=BUS_A

    #pragma HLS INTERFACE s_axilite port=return bundle=BUS_A

    return crypto_aead_encrypt(c, clen, m, mlen, ad, adlen, nsec, npub, k);
}

// generating a plaintext m[0],m[1],...,m[*mlen-1]
// and secret message number nsec[0],nsec[1],...
// from a ciphertext c[0],c[1],...,c[clen-1]
// and associated data ad[0],ad[1],...,ad[adlen-1]
// and public message number npub[0],npub[1],...
// and secret key k[0],k[1],...


int axi_decrypt(
  unsigned char *m, unsigned long long *mlen,
  unsigned char *nsec,
  const unsigned char *c, unsigned long long clen,
  const unsigned char *ad, unsigned long long adlen,
  const unsigned char *npub,
  const unsigned char *k) {

    // plain
    #pragma HLS INTERFACE s_axilite port=m bundle=BUS_A
    #pragma HLS INTERFACE s_axilite port=mlen bundle=BUS_A
    // secret message number
    #pragma HLS INTERFACE s_axilite port=nsec bundle=BUS_A
    // ciphertext
    #pragma HLS INTERFACE s_axilite port=c bundle=BUS_A
    #pragma HLS INTERFACE s_axilite port=clen bundle=BUS_A
    // associated data
    #pragma HLS INTERFACE s_axilite port=ad bundle=BUS_A
    #pragma HLS INTERFACE s_axilite port=adlen bundle=BUS_A
    // public message number
    #pragma HLS INTERFACE s_axilite port=npub bundle=BUS_A
    // secret key
    #pragma HLS INTERFACE s_axilite port=k bundle=BUS_A

    #pragma HLS INTERFACE s_axilite port=return bundle=BUS_A

    return crypto_aead_decrypt(m, mlen, nsec, c, clen, ad, adlen, npub, k);
}
