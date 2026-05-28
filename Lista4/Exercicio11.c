#include <stdio.h>

/*Leia dois vetores v e w com 5 números inteiros cada. Em seguida, gere o vetor k com 10 posições
que é o resultado da intercalação de v e w. Imprima o vetor k.*/

int main()
{
    int k[10], w[5], v[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %d numero do vetor 1: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Insira o %d numero do vetor 2: ", i + 1);
        scanf("%d", &w[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        k[i * 2] = v[i];
        k[i * 2 + 1] = w[i];
    }

    printf("Vetor K(intercalacao de V com W): \n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", k[i]);
    }

    return 0;
}