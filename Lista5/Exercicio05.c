#include <stdio.h>

/*Leia uma string s e um caracter c e imprima a posição de c em s; ou -1, caso c não pertença a s.*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    char c;
    int i;
    int posicao;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    posicao = -1;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            posicao = i;
            break;
        }
    }

    printf("Posicao: %d\n", posicao);

    return 0;
}