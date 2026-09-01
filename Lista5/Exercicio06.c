#include <stdio.h>

/*Leia uma string s e um caracter c e imprima o número de ocorrências de c em s.*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    char c;
    int i;
    int contador;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    contador = 0;

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            contador++;
        }
    }

    printf("Ocorrencias: %d\n", contador);

    return 0;
}