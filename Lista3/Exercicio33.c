#include <stdio.h>

/*Leia um número inteiro k e imprima todos os números primos no intervalo de 1 a k.*/

int main()
{
    int k, qtdDivisores;

    printf("Insira um numero inteiro: ");
    scanf("%d", &k);

    if (k <= 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }
    
    for (int i = 2; i <= k; i++)
    {
        qtdDivisores = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                qtdDivisores++;
            }
        }

        if (qtdDivisores == 2)
        {
            printf("%d\n", i); 
        }
    }
    
    return 0;
}