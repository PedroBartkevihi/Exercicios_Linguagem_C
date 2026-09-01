#include <stdio.h>

/*Leia uma string s e converta as letras maiúsculas em minúsculas. Dica: some 32 aos caracteres
cujo código ASCII está entre 65 e 90 ('A'..'Z').*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    int i;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + 32;
        }
    }

    printf("String convertida: %s", s);

    return 0;
}