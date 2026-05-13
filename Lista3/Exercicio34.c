#include <stdio.h>

/*Leia um número inteiro n e imprima todos os números perfeitos no intervalo de 1 a n. Número
perfeito é o número cujo somatório de todos os seus divisores (menos ele mesmo) é igual a ele. Por
exemplo: 6 = 1 + 2 + 3, logo 6 é um número perfeito.*/

int main()
{
    int n, somaDivisores;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }
    
    for (int i = 2; i <= n; i++)
    {
        somaDivisores = 0;

        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                somaDivisores += j;
            }
        }

        if (somaDivisores == i)
        {
            printf("%d\n", i); 
        }
    }
    
    return 0;
}