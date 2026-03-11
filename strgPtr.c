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
    //test case includes that when NULL, return from function
    if(s==NULL){
        return;
    }
    //while string is not ended, keep going
    while (s[i]!='\0'){
        int ifadjcaentDigit=0;
        //if any index not at 0, if previous char are digits, don't change Case
        if (i>0&& (s[i-1]>='0'&&s[i-1]<='9')){
            ifadjcaentDigit=1;
        }
        //if not last index, if after char are digtis, don't change case
        if(s[i+1]!='\0'&&(s[i+1]>='0'&&s[i+1]<='9')){
            ifadjcaentDigit=1;
        }
        //if no adjacent digits swap case.
        if(ifadjcaentDigit==0){
            //lowercase to uppercase
            if(s[i]>='a' && s[i]<='z'){
                s[i] = s[i]-32;
            }
            //uppercase to lowercase
            else if (s[i]>='A' &&s[i]<='Z'){
                s[i] =s[i]+ 32;
        }
    }i++;}
}

int strgDiff(const char *s1, const char *s2) {
    (void)s1;
    (void)s2;
    /* TODO */
    //if s1 or s2 is NulL, retun -2.
    if(s1==NULL||s2== NULL){

        return -2;
    }
    //if s1==s2, return -1
    int i=0, res=-1;
    //while both strings are still not "\0' keep iterating
    while(s1[i]!='\0' && s2[i]!= '\0'){
        //if different return and end loop.
        if(s1[i]!=s2[i]){
            res=i;
            break;
        }i++;
    }
    //if one string is shorter than the other and there were no previous change, return current index where string ended.
    if(!(s1[i]=='\0' &&s2[i]=='\0'&&res==-1)){
        res=i;
    }


   return res;
}

void strgInterleave(const char *s1, const char *s2, char *d, size_t size) {
    (void)s1;
    (void)s2;
    (void)d;
    (void)size;
    /* TODO */

     //if s1,s2, or d is null return
    if(s1==NULL||s2 ==NULL ||d==NULL){
        return;
    }

    //possible edge case if size==0.
    if(size==0){
        return;
    }

    int x=0,s1_indexer=0,s2_indexer=0;
    for(int i=0;i<size-1;i++){
        //if both strings are empty, end loop.
        if(s1[s1_indexer]=='\0' &&s2[s2_indexer]=='\0'){
            break;
        }else{
            //if i even and s1 is empty insert s2 char, else insert s1 char
            if(i%2==0){
                if(s1[s1_indexer]=='\0'){
                    d[x]=s2[s2_indexer];
                    s2_indexer++;
                    x++;
                }else{
                    d[x]= s1[s1_indexer];
                    s1_indexer++;
                    x++;
                }
            }
            // if i odd and s2 empty insert s1 char else insert s2 char
            else{
                if(s2[s2_indexer]=='\0'){
                    d[x]=s1[s1_indexer];
                    s1_indexer++;
                    x++;
                }else{
                    d[x]= s2[s2_indexer];
                    s2_indexer++;
                    x++;
                }
            }
        }
        //last index being used must be null char.
    }d[x]= '\0';


    }


void strgReverseLetters(char *s) {
    (void)s;
    /* TODO */
    //return null
    if(s==NULL){
        return;
    }
    //length goes into i
    int i=0,x=0;
    while(s[i]!='\0'){
        i++;
    }

    char temp[i];

    for (x=0;x<i;x++){
        //if letter, store letter in temp array in new order.
        if((s[x]>= 'a'&&s[x] <='z') || (s[x]>= 'A'&&s[x] <='Z')){
            while((i-1)>=0 && !((s[i-1]>= 'a'&&s[i-1]<='z') || (s[i-1] >= 'A'&&s[i-1]<='Z'))){
                i--;
            }
             temp[x]= s[i-1];
             i--;
        }//if not a letter keep symbol in same location
        else{
            temp[x]=s[x];
        }
    }
    //place '\0' at end of string
    temp[i]='\0';
    //put temp into s
    for(x=0;x<=i;x++){
        s[x]=temp[x];
    }

}
