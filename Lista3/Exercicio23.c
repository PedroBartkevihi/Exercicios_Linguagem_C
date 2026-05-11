#include <stdio.h>

/*Leia um número inteiro n e imprima o valor de H, dado pela série abaixo. Se n ≤ 0 imprima uma
mensagem de erro.

H = 1 + (1 / 2) + (1 / 3) + (1 / 4) ... 1/n;*/

int main()
{
    int n;
    double H = 0.0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        H += 1.0 / i;
    }

    printf("Valor de H = %.4f\n", H);

    return 0;
}