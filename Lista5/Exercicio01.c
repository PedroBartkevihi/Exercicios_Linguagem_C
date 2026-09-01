#include <stdio.h>

/*Leia uma string s e imprima o número de caracteres dessa string. Não use a função strlen.*/

#define TAM_MAX 100  

int main() {

    char s[TAM_MAX];
    int contador = 0;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);  

    while (s[contador] != '\0') {
        if (s[contador] == '\n') {
            break;
        }
        contador++;
    }

    printf("Numero de caracteres: %d\n", contador);

    return 0;
}