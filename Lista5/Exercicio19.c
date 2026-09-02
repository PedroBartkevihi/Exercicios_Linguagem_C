#include <stdio.h>

/*Leia uma string e imprimi-a como no exemplo abaixo:
Entrada: AMOR
Saida: AMOR / AMO / AM / A*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    int len, i, j;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    len = 0;
    while (s[len] != '\0') {
        if (s[len] == '\n') {
            s[len] = '\0';
            break;
        }
        len++;
    }

    for (i = len; i >= 1; i--) {
        for (j = 0; j < i; j++) {
            printf("%c", s[j]);
        }
        printf("\n");
    }

    return 0;
}