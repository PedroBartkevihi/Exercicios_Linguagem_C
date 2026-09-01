#include <stdio.h>

/*Leia uma string s e inteiros i e j e imprima o segmento de s de i até j. Não imprima nada se
i ou j forem inválidos.*/

#define TAM_MAX 100

int main() {

    char s[TAM_MAX];
    int i, j, k, tamanho;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    tamanho = 0;
    while (s[tamanho] != '\0') {
        if (s[tamanho] == '\n') {
            s[tamanho] = '\0';
            break;
        }
        tamanho++;
    }

    printf("Digite os indices i e j: ");
    scanf("%d %d", &i, &j);

    if (i >= 0 && j >= 0 && i < tamanho && j < tamanho && i <= j) {
        for (k = i; k <= j; k++) {
            printf("%c", s[k]);
        }
        printf("\n");
    }

    return 0;
}