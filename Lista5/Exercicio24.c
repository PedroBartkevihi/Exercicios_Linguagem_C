#include <stdio.h>
#include <ctype.h>

/*Leia uma frase e imprima uma estatística mostrando os caracteres presentes na frase e as
respectivas quantidades. Devem fazer parte da estatística somente as letras (A..Z) e digitos
(0..9). Letras maiusculas e minusculas devem ser consideradas iguais.*/

#define TAM_MAX 200

int main() {

    char frase[TAM_MAX];
    int cont[26] = {0};
    int contDig[10] = {0};
    int i;

    printf("Digite uma frase: ");
    fgets(frase, TAM_MAX, stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        if (isalpha((unsigned char) frase[i])) {
            cont[toupper((unsigned char) frase[i]) - 'A']++;
        } else if (isdigit((unsigned char) frase[i])) {
            contDig[frase[i] - '0']++;
        }
    }

    for (i = 0; i < 26; i++) {
        if (cont[i] > 0) {
            printf("%c = %d\n", 'A' + i, cont[i]);
        }
    }

    for (i = 0; i < 10; i++) {
        if (contDig[i] > 0) {
            printf("%d = %d\n", i, contDig[i]);
        }
    }

    return 0;
}