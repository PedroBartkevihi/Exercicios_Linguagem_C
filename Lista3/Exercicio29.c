#include <stdio.h>

/*Leia um número n e imprima um quadrado de asteriscos de n x n (n > 0).*/

int main()
{
    int n;

    printf("Insira um numero positivo: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}