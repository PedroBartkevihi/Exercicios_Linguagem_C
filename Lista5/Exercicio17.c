#include <stdio.h>

/*Leia uma string s, uma posição p (p >= 0) e um valor n (n > 0). Em seguida, remova n
caracteres da string s a partir da posição p e imprima s.*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    int len, p, n, i;

    printf("Digite a string s: ");
    fgets(s, TAM_MAX, stdin);

    len = 0;
    while (s[len] != '\0') {
        if (s[len] == '\n') {
            s[len] = '\0';
            break;
        }
        len++;
    }

    printf("Digite a posicao p: ");
    scanf("%d", &p);

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (p < 0 || p > len) {
        printf("Erro: posicao invalida.\n");
        return 0;
    }

    if (p + n > len) {
        n = len - p;
    }

    for (i = p; i <= len - n; i++) {
        s[i] = s[i + n];
    }

    printf("String resultante: %s\n", s);

    return 0;
}