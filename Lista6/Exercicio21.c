#include <stdio.h>

/*Implemente a função void retira_caracter(char str[], char c, char resultado[]) que remove
todas as ocorrências do caracter c da string str e armazena a nova string em resultado.*/

void retira_caracter(char str[], char c, char resultado[]) {

    int i, k;

    k = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != c) {
            resultado[k] = str[i];
            k++;
        }
    }

    resultado[k] = '\0';
}

int main() {

    char str[200], resultado[200], c;

    printf("Digite uma string: ");
    fgets(str, 200, stdin);

    printf("Digite o caractere a remover: ");
    scanf(" %c", &c);

    retira_caracter(str, c, resultado);

    printf("String resultante: %s\n", resultado);

    return 0;
}