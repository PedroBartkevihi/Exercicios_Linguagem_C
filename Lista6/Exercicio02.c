#include <stdio.h>

/*Implemente a função int digitos(int n) que recebe um valor inteiro n e retorna o número de
dígitos de n. Por exemplo, se n = 4875, a função deve retornar 4.*/

int digitos(int n) {

    int contador;

    if (n < 0) {
        n = -n;
    }

    if (n == 0) {
        return 1;
    }

    contador = 0;
    while (n != 0) {
        n = n / 10;
        contador++;
    }

    return contador;
}

int main() {

    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    resultado = digitos(n);

    printf("Numero de digitos: %d\n", resultado);

    return 0;
}