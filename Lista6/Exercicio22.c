#include <stdio.h>

/*Implemente a função int retira_caracter(char str[], char c) que remove todas as ocorrências
do caracter c da string str. Obs: a função modifica str in-place e retorna a quantidade de
ocorrências removidas (interpretação adotada, já que o enunciado não especifica o retorno).*/

int retira_caracter(char str[], char c) {

    int i, k, contador;

    k = 0;
    contador = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            contador++;
        } else {
            str[k] = str[i];
            k++;
        }
    }

    str[k] = '\0';

    return contador;
}

int main() {

    char str[200], c;
    int removidos;

    printf("Digite uma string: ");
    fgets(str, 200, stdin);

    printf("Digite o caractere a remover: ");
    scanf(" %c", &c);

    removidos = retira_caracter(str, c);

    printf("String resultante: %s\n", str);
    printf("Ocorrencias removidas: %d\n", removidos);

    return 0;
}