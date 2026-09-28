#include <stdio.h>

/*Implemente a função recursiva soma_digitos que recebe um número inteiro n e retorna a soma
dos seus dígitos. Por exemplo: se n = 1234, então a função retorna 10.*/

int soma_digitos(int n) {

    if (n < 0) {
        return soma_digitos(-n);
    }

    if (n < 10) {
        return n;
    }

    return n % 10 + soma_digitos(n / 10);
}

int main() {

    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    resultado = soma_digitos(n);

    printf("Soma dos digitos: %d\n", resultado);

    return 0;
}