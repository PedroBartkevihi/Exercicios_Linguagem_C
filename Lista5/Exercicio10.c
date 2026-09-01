#include <stdio.h>

/*Leia uma string s e um caracter c. Em seguida, remova todas as ocorrências do caracter c da
string s e imprima s.*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    char c;
    int i, j;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    j = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            continue;
        }
        s[j] = s[i];
        j++;
    }
    s[j] = '\0';

    printf("String resultante: %s\n", s);

    return 0;
}