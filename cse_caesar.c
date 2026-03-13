//Shriyans Singh 114807762
#include "cse_caesar.h"
#include "strgPtr.h"
/* DO NOT use <string.h> or <ctype.h> */

int encryptCaesar(const char *plaintext, char *ciphertext, int key) {
    (void)plaintext;
    (void)ciphertext;
    (void)key;
    /* TODO */
    //if plaintext or ciphrtext is NULL return -2
    if (plaintext==NULL ||ciphertext==NULL){
        return -2;
    }
    
    //if ciphertext is less than plaintext +EOM marker, return -1
    else if (strgLen(ciphertext)<(strgLen(plaintext)+7)){
        return -1;
    }
    
    else{
        int 
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
