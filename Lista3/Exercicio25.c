#include <stdio.h>

/*Leia um número inteiro n e imprima o valor de H, dado pela série abaixo. Se n ≤ 0 imprima uma
mensagem de erro.

H = somatório de i * n, com i variando de 1 até n*/

int main()
{
    int n;
    long long int H = 0;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        H += (long long int) i * n;
    }

    printf("Valor de H = %lld\n", H);

    return 0;
}