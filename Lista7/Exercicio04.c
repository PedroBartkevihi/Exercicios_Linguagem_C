#include <stdio.h>

/*A função de Ackermann é definida para valores inteiros e não negativos m e n da seguinte forma:
A(m, n) = n + 1                    se m = 0
A(m, n) = A(m - 1, 1)              se m > 0 e n = 0
A(m, n) = A(m - 1, A(m, n - 1))    se m > 0 e n > 0
Implemente a função recursiva ack que implementa a função de Ackermann. Calcule ack(3, 2).*/

int ack(int m, int n) {

    if (m < 0 || n < 0) {
        return -1;
    }

    if (m == 0) {
        return n + 1;
    }

    if (n == 0) {
        return ack(m - 1, 1);
    }

    return ack(m - 1, ack(m, n - 1));
}

int main() {

    int m, n, resultado;

    printf("Digite os valores de m e n: ");
    scanf("%d %d", &m, &n);

    resultado = ack(m, n);

    if (resultado == -1) {
        printf("m e n devem ser nao negativos.\n");
    } else {
        printf("ack(%d, %d) = %d\n", m, n, resultado);
    }

    return 0;
}