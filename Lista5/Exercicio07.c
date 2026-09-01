#include <stdio.h>

/*Leia uma string s e dois caracteres c1 e c2. Em seguida, substitua todas as ocorrências de c1
por c2 na string s e imprima a string resultante.*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    char c1, c2;
    int i;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    printf("Digite o caractere a ser substituido (c1): ");
    scanf(" %c", &c1);

    printf("Digite o caractere substituto (c2): ");
    scanf(" %c", &c2);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c1) {
            s[i] = c2;
        }
    }

    printf("String resultante: %s", s);

    return 0;
}