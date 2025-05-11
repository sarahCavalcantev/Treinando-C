#include <stdio.h>
void print_bits(char byte){
    int i;
    for (i=7; i>=0; i--){ //começando pelo bit mais significativo (esquerda p/ direita)
        printf("%i", ((byte >> i) & 1)); //byte serve para ir passando de bit em bit no byte; depois compara
        //se é igual a 1, se for, imprime 1 pois :      1 and 1 = 1 -------- 0 and 1 = 0
    }
    printf("\n");
}
int main(){
    char reg = 0b00000000; // Todos os bits desligados

    printf("Antes:\n");
    print_bits(reg);       // Exibe 00000000

    reg |= (1 << 2);       // Liga o bit 2 (terceiro bit)

    printf("Depois de ativar o bit 2:\n");
    print_bits(reg);       // Exibe 00000100

    return 0;
}
