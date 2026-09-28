#include <stdio.h>

/*Implemente a função recursiva soma que recebe um número inteiro n e retorna a soma de 1..n.*/

int soma(int n) {

    if (n <= 0) {
        return 0;
    }

    return n + soma(n - 1);
}

int main() {

    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    resultado = soma(n);

    printf("Soma de 1 ate %d: %d\n", n, resultado);

    return 0;
}