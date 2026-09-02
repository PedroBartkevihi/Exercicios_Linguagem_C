#include <stdio.h>

/*Leia uma string s1 e um número inteiro n (n > 0). Em seguida, gere a string s2 com os n
primeiros caracteres de s1 e imprima s2.*/

#define TAM_MAX 100

int main() {

    char s1[TAM_MAX], s2[TAM_MAX];
    int len1, n, i;

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

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n > len1) {
        n = len1;
    }

    for (i = 0; i < n; i++) {
        s2[i] = s1[i];
    }
    s2[n] = '\0';

    printf("String s2: %s\n", s2);

    return 0;
}