#include <stdio.h>

/*Implemente a função int substring(char str[], int ini, int fim, char resultado[]) para
extrair a substring da posição ini até fim da string str e retornar na string resultado. A
função deverá retornar o tamanho da string resultado ou -1 caso não seja possível extrair a
substring.*/

int substring(char str[], int ini, int fim, char resultado[]) {

    int len, i, k;

    len = 0;
    while (str[len] != '\0') {
        len++;
    }

    if (ini < 0 || fim < 0 || ini >= len || fim >= len || ini > fim) {
        return -1;
    }

    k = 0;
    for (i = ini; i <= fim; i++) {
        resultado[k] = str[i];
        k++;
    }
    resultado[k] = '\0';

    return k;
}

int main() {

    char str[200], resultado[200];
    int ini, fim, i, tam_resultado;

    printf("Digite uma string: ");
    fgets(str, 200, stdin);

    i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("Digite a posicao inicial: ");
    scanf("%d", &ini);

    printf("Digite a posicao final: ");
    scanf("%d", &fim);

    tam_resultado = substring(str, ini, fim, resultado);

    if (tam_resultado == -1) {
        printf("Posicoes invalidas.\n");
    } else {
        printf("Substring: %s\n", resultado);
        printf("Tamanho: %d\n", tam_resultado);
    }

    return 0;
}