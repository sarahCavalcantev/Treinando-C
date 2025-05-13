#include <stdio.h>


int cont_bit(unsigned char byte){
    int i, cont=0;
    for(i = 7; i>=0 ; i--){
       if(( byte >> i ) & 1){
        cont++;
       } 
    }
    return cont;
}

int main(){
    unsigned char byte;

    scanf("%hhu", &byte);

    printf("numero de bits 1: %d\n", cont_bit(byte));
    return 0;
}
