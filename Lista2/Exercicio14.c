#include <stdio.h>
#include <math.h>

/*De acordo com a Matemática Financeira, o cálculo do valor da prestação P para amortização de um
financiamento de valor V em n prestações e a uma taxa de juros k é dada pelas fórmulas:

P = V / T
T = ((1 + k)^n - 1) / (k * (1 + k)^n)

Leia os valores de V, n e k e imprima o valor da prestação P.*/

int main()
{
    double T, P, V, k;
    int n;

    printf("Insira o valor do financiamento, o numero de prestacoes e a taxa de juros, respectivamente: ");
    scanf("%lf %d %lf", &V, &n, &k);

    T = (pow(1 + k, n) - 1) / (k * pow(1 + k, n));
    P = V / T;

    printf("Valor da prestacao: %.2lf\n", P);

    return 0;
}