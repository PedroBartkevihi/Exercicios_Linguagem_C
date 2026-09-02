#include <stdio.h>

/*Leia duas strings s1 e s2 e uma posição p (p maior ou igual 0). Em seguida, insira a string s2
na string s1 na posição p e imprima s1. Caso a posição p seja inválida, apresente uma mensagem
de erro.*/

#define TAM_MAX 100

int main() {

    char s1[2 * TAM_MAX], s2[TAM_MAX];
    int len1, len2, i, p;

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

    printf("Digite a posicao p: ");
    scanf("%d", &p);

    if (p < 0 || p > len1) {
        printf("Erro: posicao invalida.\n");
        return 0;
    }

    for (i = len1; i >= p; i--) {
        s1[i + len2] = s1[i];
    }

    for (i = 0; i < len2; i++) {
        s1[p + i] = s2[i];
    }

    printf("String resultante: %s\n", s1);

    return 0;
}