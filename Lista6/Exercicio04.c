#include <stdio.h>

/*Implemente a função int reverso(int n) que recebe um valor inteiro n e retorna o mesmo número
com seus dígitos invertidos. Por exemplo, se n = 7631, a função deve retornar 1367.*/

int reverso(int n) {

    int rev, negativo;

    negativo = 0;
    if (n < 0) {
        negativo = 1;
        n = -n;
    }

    rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }

    if (negativo) {
        rev = -rev;
    }

    return rev;
}

int main() {

    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    resultado = reverso(n);

    printf("Numero invertido: %d\n", resultado);

    return 0;
}