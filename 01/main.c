#include <stdio.h>

#define is_upper(c) ((c) >= 'A' && (c) <= 'Z')

int main() {
    char letra;
    scanf("%c", &letra);

    if (is_upper(letra)) {
        printf("%c é uma letra maiuscula", letra);
    } else { 
        printf("%c é uma letra minuscula", letra);
    }
    return 0;
}