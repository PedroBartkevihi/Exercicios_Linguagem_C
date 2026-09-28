#include <stdio.h>

/*Implemente uma função recursiva conta_ocorrencias que retorna quantas vezes um dígito k
ocorre em um número natural n. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.*/

int conta_ocorrencias(int n, int k) {

    if (n < 10) {
        return (n == k) ? 1 : 0;
    }

    return (n % 10 == k ? 1 : 0) + conta_ocorrencias(n / 10, k);
}

int main() {

    int n, k, resultado;

    printf("Digite um numero natural: ");
    scanf("%d", &n);

    printf("Digite o digito a procurar (0-9): ");
    scanf("%d", &k);

    resultado = conta_ocorrencias(n, k);

    printf("O digito %d ocorre %d vezes em %d\n", k, resultado, n);

    return 0;
}