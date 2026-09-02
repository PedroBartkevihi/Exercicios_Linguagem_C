#include <stdio.h>

/*Leia uma string msg e imprima-a como um diamante, iniciando com o caracter central e, a cada
linha, imprima os dois caracteres faltantes nas duas extremidades. Após imprimir a string
completa, realize a operação inversa, até imprimir somente o caracter central.*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    int len, centro, k, i;

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

    centro = len / 2;

    for (k = 0; k <= centro; k++) {
        for (i = centro - k; i <= centro + k; i++) {
            printf("%c", s[i]);
        }
        printf("\n");
    }

    for (k = centro - 1; k >= 0; k--) {
        for (i = centro - k; i <= centro + k; i++) {
            printf("%c", s[i]);
        }
        printf("\n");
    }

    return 0;
}