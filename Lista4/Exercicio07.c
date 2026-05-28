#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

/*Leia um vetor v de 10 inteiros. Em seguida, imprima os números de v colocando a letra 'p' ao lado
do maior par e a letra 'i' ao lado do maior ímpar.*/

int main()
{
    int v[10];
    int maiorPar = INT_MIN;
    int maiorImpar = INT_MIN;
    bool temPar = false;
    bool temImpar = false;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            if (!temPar || v[i] > maiorPar)
            {
                maiorPar = v[i];
                temPar = true;
            }
        }
        else
        {
            if (!temImpar || v[i] > maiorImpar)
            {
                maiorImpar = v[i];
                temImpar = true;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        if (temPar && v[i] == maiorPar)
        {
            printf("%d p\n", v[i]);
        }
        else if (temImpar && v[i] == maiorImpar)
        {
            printf("%d i\n", v[i]);
        }
        else
        {
            printf("%d\n", v[i]);
        }
    }

    return 0;
}