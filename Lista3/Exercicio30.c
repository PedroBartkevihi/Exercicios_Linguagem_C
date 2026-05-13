#include <stdio.h>

/*Leia um número n e m e imprima um retângulo de asteriscos de n x m (n > 0 e m > 0)*/

int main()
{
    int n, m;

    printf("Insira dois numeros positivos: ");
    scanf("%d %d", &n, &m);

    if (n <= 0 || m <= 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}