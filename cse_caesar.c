//Shriyans Singh 114807762
#include "cse_caesar.h"
#include "strgPtr.h"
/* DO NOT use <string.h> or <ctype.h> */

int encryptCaesar(const char *plaintext, char *ciphertext, int key) {
    (void)plaintext;
    (void)ciphertext;
    (void)key;
    /* TODO */
    int count=0;
    //if plaintext or ciphrtext is NULL return -2
    if (plaintext==NULL ||ciphertext==NULL){
        count=-2;
    }
    
    //if ciphertext is less than plaintext +EOM marker, return -1
    else if (strgLen(ciphertext)<(strgLen(plaintext)+7)){
        count=-1;
    }
    
    else{
        int i=0;

        while(plaintext[i]!='\0'){
            char temp=plaintext[i];
            
            //if at current index it is alphabet, then encrypt through (key+index) %26, and preserve the cas. 
            //If negative key, it converts to positive
            if((temp>='A'&& temp<='Z') ||(temp >='a'&& temp<= 'z')){
                if(temp>='a'&&temp<='z'){
                    temp =temp-'a';
                    temp=(temp+key+i)%26;
                    temp=(temp+26)%26; 
                    temp=temp+'a';
                    count++;
                }
                else{
                    temp=temp-'A';
                    temp=(temp+key+i)%26;
                    temp=(temp+26)%26; 
                    temp=temp+'A';
                    count++;
                }
        }
        //if current indexi is digit then encrpt through (key+2*index)%10
        //If negative key, it converts to positive
        else if (temp>='0'&& temp<='9'){
            temp=temp-'0';
            temp=((temp+key+(2*i))%10);
            temp=(temp+10)%10;
            temp=temp+'0';
            count++;

        }
        //if any other characters like space or punctuation then just copy it.
        else{
            temp=temp;
        }



        //insert encrpted into plaintext index, and incremnt i
        ciphertext[i]=temp;
        i++;
    }
    char *closer="__EOM__";
    while(*closer!='\0'){
        ciphertext[i]=*closer;
        closer++;
        i++;
    }
    ciphertext[i]='\0';


    
}
return count;

}

int decryptCaesar(const char *ciphertext, char *plaintext, int key) {
    (void)ciphertext;
    (void)plaintext;
    (void)key;
    /* TODO */
    return 0;
}
