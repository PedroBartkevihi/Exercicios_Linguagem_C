#include <stdio.h>

/*Implemente de forma recursiva a função int div(int n, int m) que calcula o quociente da
divisão inteira de n por m. A definição de quociente da divisão é dada por:
DIV(x, y) = 1 + DIV(|x| - |y|, |y|), se |x| > |y|
DIV(x, y) = 0,                       se |x| < |y|
DIV(x, y) = 1,                       se |x| = |y|*/

int div(int n, int m) {

    if (m == 0) {
        return -1;
    }

    if (n < 0) {
        n = -n;
    }

    if (m < 0) {
        m = -m;
    }

    if (n > m) {
        return 1 + div(n - m, m);
    }

    if (n < m) {
        return 0;
    }

    return 1;
}

int main() {

    int n, m, resultado;

    printf("Digite os valores de n e m: ");
    scanf("%d %d", &n, &m);

    resultado = div(n, m);

    if (resultado == -1) {
        printf("Erro: divisao por zero.\n");
    } else {
        printf("%d div %d = %d\n", n, m, resultado);
    }

    return 0;
}