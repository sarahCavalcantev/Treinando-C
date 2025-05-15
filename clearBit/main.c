#include <stdio.h>

//zerar um bit especifico de uma var
#define CLEAR_bit(x, b) ((x)&= ~(1 << (b)) ) // o 1 serve para definir uma sequencia temporaria em que a posiçao b sera 1,
//depois inverte a mascara e faz o and com o numero, zerando a posicao desejada.
void print_binary(unsigned int x) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (x >> i) & 1);
    }
    printf("\n");
}
int main(){
    unsigned int x= 0b1111; // 15 em binario -> 00001111 
    unsigned int b;
    scanf("%u", &b);
    print_binary(x); //antes de zerar
    CLEAR_bit(x,b);
    print_binary(x); //depois de zerar

}