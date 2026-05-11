#include <stdio.h>

/*Leia um número inteiro e par n e imprima o valor de H, dado pela série abaixo. Se n <= 1 ou n não
for par, então imprima uma mensagem de erro.

H = 1 - 1/2 + 1/4 + 1/6 + 1/8 ... + 1/n*/

int main()
{
    int n;
    double H;

    printf("Insira um numero inteiro e par: ");
    scanf("%d", &n);

    if (n <= 1 || n % 2 != 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }

    H = 1.0 / 2;

    for (int i = 4; i <= n; i += 2)
    {
        H += 1.0 / i;
    }

    printf("Valor de H = %.4f\n", H);

    return 0;
}