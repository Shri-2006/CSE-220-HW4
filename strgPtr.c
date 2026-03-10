//Shriyans Singh 114807762
#include "strgPtr.h"
/* DO NOT use <string.h> or <ctype.h> */

int strgLen(const char *s) {
    (void)s;
    /* TODO */
    const char *temp = s;
    int length =0;

    if(s == NULL){
        length=-1;
    }
    else{
        while(*temp != '\0'){
            length++;
            temp++;
        }
    }
    return length;
}

void strgCopy(const char *source, char *destination, size_t size) {
    (void)source;
    (void)destination;
    (void)size;
    /* TODO */
}

void strgChangeCase(char *s) {
    (void)s;
    /* TODO */
}

int strgDiff(const char *s1, const char *s2) {
    (void)s1;
    (void)s2;
    /* TODO */
    return 0;
}

void strgInterleave(const char *s1, const char *s2, char *d, size_t size) {
    (void)s1;
    (void)s2;
    (void)d;
    (void)size;
    /* TODO */
}

void strgReverseLetters(char *s) {
    (void)s;
    /* TODO */
}
