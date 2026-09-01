#include <stdio.h>
#include <ctype.h>

/*Leia uma string s e imprima suas vogais e, em seguida, suas consoantes.*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    char c;
    int i;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    printf("Vogais: ");
    for (i = 0; s[i] != '\0'; i++) {
        c = tolower((unsigned char) s[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    printf("Consoantes: ");
    for (i = 0; s[i] != '\0'; i++) {
        c = tolower((unsigned char) s[i]);
        if (isalpha((unsigned char) s[i]) &&
            c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c", s[i]);
        }
    }
    printf("\n");

    return 0;
}