#include <stdio.h>
#include <stdbool.h>

int countBits(bool w, unsigned int value){
    int count = 0;
    for(int i = 0; i < 32; i++){
        bool bit = (value >> i) & 1;
         if (bit == w){
            count++;
         }     
    }
    return count;
}

int main(){
    unsigned int n;
    printf("digite um numero de 0-32 bits:\n");
    scanf("%u", &n);
    printf("bits 1: %d\n", (countBits(true, n)));
    printf("bits 0: %d\n",(countBits(false, n)));    

}