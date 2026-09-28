#include <stdio.h>

/*Implemente de forma recursiva a função int mod(int n, int m) que calcula o resto da divisão
inteira (mod) de n por m. A definição de resto da divisão é dada por:
MOD(x, y) = MOD(x - y, y), se x > y
MOD(x, y) = x,             se x < y
MOD(x, y) = 0,             se x = y*/

int mod(int n, int m) {

    if (n < 0 || m <= 0) {
        return -1;
    }

    if (n > m) {
        return mod(n - m, m);
    }

    if (n < m) {
        return n;
    }

    return 0;
}

int main() {

    int n, m, resultado;

    printf("Digite os valores de n e m: ");
    scanf("%d %d", &n, &m);

    resultado = mod(n, m);

    if (resultado == -1) {
        printf("Entrada invalida: n deve ser >= 0 e m deve ser > 0.\n");
    } else {
        printf("%d mod %d = %d\n", n, m, resultado);
    }

    return 0;
}