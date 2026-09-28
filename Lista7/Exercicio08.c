#include <stdio.h>

/*Implemente de forma recursiva a função int mdc(int n, int m) que calcula o MDC dos números
inteiros positivos n e m. Caso n ou m não seja um inteiro positivo a função deverá retornar
-1. A definição de MDC é dada por:
MDC(x, y) = MDC(x - y, y), se x > y
MDC(x, y) = MDC(y, x),     se x < y
MDC(x, y) = x,             se x = y*/

int mdc(int n, int m) {

    if (n <= 0 || m <= 0) {
        return -1;
    }

    if (n > m) {
        return mdc(n - m, m);
    }

    if (n < m) {
        return mdc(m, n);
    }

    return n;
}

int main() {

    int n, m, resultado;

    printf("Digite os valores de n e m: ");
    scanf("%d %d", &n, &m);

    resultado = mdc(n, m);

    if (resultado == -1) {
        printf("n e m devem ser inteiros positivos.\n");
    } else {
        printf("MDC(%d, %d) = %d\n", n, m, resultado);
    }

    return 0;
}