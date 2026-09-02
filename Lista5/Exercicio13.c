#include <stdio.h>

/*Leia duas strings s1 e s2 gere a string s3 como resultado da concatenação de s1 com s2.
Imprima s3. Não use a função strcat.*/

#define TAM_MAX 100

int main() {

    char s1[TAM_MAX], s2[TAM_MAX], s3[2 * TAM_MAX];
    int i, k;

    printf("Digite a string s1: ");
    fgets(s1, TAM_MAX, stdin);

    i = 0;
    while (s1[i] != '\0') {
        if (s1[i] == '\n') {
            s1[i] = '\0';
            break;
        }
        i++;
    }

    printf("Digite a string s2: ");
    fgets(s2, TAM_MAX, stdin);

    i = 0;
    while (s2[i] != '\0') {
        if (s2[i] == '\n') {
            s2[i] = '\0';
            break;
        }
        i++;
    }

    k = 0;

    for (i = 0; s1[i] != '\0'; i++) {
        s3[k] = s1[i];
        k++;
    }

    for (i = 0; s2[i] != '\0'; i++) {
        s3[k] = s2[i];
        k++;
    }

    s3[k] = '\0';

    printf("String concatenada: %s\n", s3);

    return 0;
}