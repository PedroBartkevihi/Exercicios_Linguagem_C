#include <stdio.h>
#include <ctype.h>

/*Leia duas strings s1 e s2 e calcule a posição da string s2 na string s1. Se não existir
imprima -1. Ignore a diferença de maiúsculas e minúsculas.*/

#define TAM_MAX 100

int main() {

    char s1[TAM_MAX], s2[TAM_MAX];
    int len1, len2, i, j, posicao, encontrado;

    printf("Digite a string s1: ");
    fgets(s1, TAM_MAX, stdin);

    len1 = 0;
    while (s1[len1] != '\0') {
        if (s1[len1] == '\n') {
            s1[len1] = '\0';
            break;
        }
        len1++;
    }

    printf("Digite a string s2: ");
    fgets(s2, TAM_MAX, stdin);

    len2 = 0;
    while (s2[len2] != '\0') {
        if (s2[len2] == '\n') {
            s2[len2] = '\0';
            break;
        }
        len2++;
    }

    posicao = -1;

    for (i = 0; i <= len1 - len2; i++) {
        encontrado = 1;
        for (j = 0; j < len2; j++) {
            if (tolower((unsigned char) s1[i + j]) != tolower((unsigned char) s2[j])) {
                encontrado = 0;
                break;
            }
        }
        if (encontrado) {
            posicao = i;
            break;
        }
    }

    printf("Posicao: %d\n", posicao);

    return 0;
}