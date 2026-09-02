#include <stdio.h>
#include <ctype.h>

/*Leia uma string s1 e gere a string s2 com as mesmas letras de s1 uma posição à frente, ou seja,
a/A vira b/B, b/B vira c/C e z/Z vira a/A. Devem ser consideradas somente as letras de A a Z.*/

#define TAM_MAX 100

int main() {

    char s1[TAM_MAX], s2[TAM_MAX];
    int i;

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

    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == 'z') {
            s2[i] = 'a';
        } else if (s1[i] == 'Z') {
            s2[i] = 'A';
        } else if (isalpha((unsigned char) s1[i])) {
            s2[i] = s1[i] + 1;
        } else {
            s2[i] = s1[i];
        }
    }
    s2[i] = '\0';

    printf("String s2: %s\n", s2);

    return 0;
}