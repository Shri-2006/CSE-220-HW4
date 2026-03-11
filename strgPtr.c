//Shriyans Singh 114807762
#include "strgPtr.h"
/* DO NOT use <string.h> or <ctype.h> */

int strgLen(const char *s) {
    (void)s;
    /* TODO */
    const char *temp = s;
    int length =0;
    //If null, return -1 
    if(s == NULL){
        length=-1;
    }
    else{
        //count string length until null char reached
        while(*temp != '\0'){
            length++;
            temp++;
        }
    }
    //return length
    return length;
}

void strgCopy(const char *source, char *destination, size_t size) {
    (void)source;
    (void)destination;
    (void)size;
    /* TODO */
    //if size==0 or source or destination is null do nothing
    if(size == 0 || source==NULL||destination==NULL){
        size=size;
    }
    //if size==1 store null char
    else if (size ==1){
        *destination='\0';
    }
    else{
        //while there is more than1 index left or source hasn't hit null char copy characters in source to destination
       while(size>1&&*source!= '\0'){
            *destination=*source;
            destination++;
            source++;
            size=size-1;
        }
        //last index must be null
        *destination='\0';
    }
    


}

void strgChangeCase(char *s) {
    (void)s;
    /* TODO */
    int i=0;
    while (s[i]!='\0'){
        int ifadjcaentDigit=0;
        if (i>0&& (s[i-1]>='0'&&s[i-1]<='9')){
            ifadjcaentDigit=1;
        }
        if(s[i+1]!='\0'&&(s[i+1]>='0'&&s[i+1]<='9')){
            ifadjcaentDigit=1;
        }
        if(ifadjcaentDigit==0){
            if(s[i]>='a' && s[i]<='z'){
                s[i] = s[i]-32;
            }
            else if (s[i]>='A' &&s[i]<='Z'){
                s[i] =s[i]+ 32;
        }
    }i++;}
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
