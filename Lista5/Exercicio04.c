#include <stdio.h>

/*Leia uma string s e converta as letras minúsculas para maiúscula. Dica: subtraia 32 dos
caracteres cujo código ASCII está entre 97 e 122 ('a'..'z').*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    int i;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 97 && s[i] <= 122) {
            s[i] = s[i] - 32;
        }
    }

    printf("String convertida: %s", s);

    return 0;
}