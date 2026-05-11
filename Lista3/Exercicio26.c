#include <stdio.h>

/*O método de Newton-Raphson define que a sequência
xn+1 = 1/2 (xn + A/xn), x0 = 1, n pertencente N converge para a raiz quadrada de A.
Leia um número n e um número A (A > 0) e calcule a raiz quadrada de A com n iterações.*/

int main()
{
    int n;
    double A, x = 1.0;

    printf("Insira o numero de iteracoes e o valor: ");
    scanf("%d %lf", &n, &A);

    if (n < 0 || A <= 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        x = 0.5 * (x + (A / x));
    }

    printf("Raiz quadrada aproximada de %.2f: %.6f\n", A, x);

    return 0;
}