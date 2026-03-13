//Shriyans Singh 114807762
#include "cse_caesar.h"
#include "strgPtr.h"
/* DO NOT use <string.h> or <ctype.h> */

int encryptCaesar(const char *plaintext, char *ciphertext, int key) {
    (void)plaintext;
    (void)ciphertext;
    (void)key;
    /* TODO */
    if (plaintext==NULL ||ciphertext==NULL){
        return -2;
    }
    else if (strgLen(plaintext)==0){
        return 0;
    }
    else if (strgLen(ciphertext)<(strgLen(plaintext)+7)){
        return -1;
    }
    
    else{

    }

    return 0;
}

int decryptCaesar(const char *ciphertext, char *plaintext, int key) {
    (void)ciphertext;
    (void)plaintext;
    (void)key;
    /* TODO */
    return 0;
}
