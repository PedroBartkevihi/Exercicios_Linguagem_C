#include <stdio.h>

/*Leia duas strings s1 e s2 gere a string s3 como resultado da intercalação de s1 com s2.
Imprima s3.*/

#define TAM_MAX 100

int main() {

    char s1[TAM_MAX], s2[TAM_MAX], s3[2 * TAM_MAX];
    int len1, len2, i, j, k;

    printf("Digite a string s1: ");
    fgets(s1, TAM_MAX, stdin);

    len1 = 0;
    while (s1[len1] != '\0') {
        if (s1[len1] == '\n') {
            s1[len1] = '\0';
            break;
        }
        len1++;
    }

    printf("Digite a string s2: ");
    fgets(s2, TAM_MAX, stdin);

    len2 = 0;
    while (s2[len2] != '\0') {
        if (s2[len2] == '\n') {
            s2[len2] = '\0';
            break;
        }
        len2++;
    }

    i = 0;
    j = 0;
    k = 0;

    while (i < len1 || j < len2) {
        if (i < len1) {
            s3[k] = s1[i];
            k++;
            i++;
        }
        if (j < len2) {
            s3[k] = s2[j];
            k++;
            j++;
        }
    }
    s3[k] = '\0';

    printf("String intercalada: %s\n", s3);

    return 0;
}