#include <stdio.h>

/*Implemente a função int soma_divisores(int n) que retorna a soma dos divisores próprios de n.
Divisores próprios são os divisores de um número sem contar com ele mesmo. Os divisores
próprios de 6 são 1, 2 e 3.*/

int soma_divisores(int n) {

    int soma, i;

    soma = 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {

    int n, resultado;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    resultado = soma_divisores(n);

    printf("Soma dos divisores proprios: %d\n", resultado);

    return 0;
}