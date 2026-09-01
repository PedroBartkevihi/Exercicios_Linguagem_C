#include <stdio.h>

/*Leia uma string s e elimine seus espaços em branco "supérfluos", ou seja, reduza uma sequência
de dois ou mais espaços em branco para apenas um espaço em branco.*/

#define TAM_MAX 200

int main() {

    char s[TAM_MAX];
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

    j = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ' && j > 0 && s[j - 1] == ' ') {
            continue;
        }
        s[j] = s[i];
        j++;
    }
    s[j] = '\0';

    printf("String resultante: %s\n", s);

    return 0;
}