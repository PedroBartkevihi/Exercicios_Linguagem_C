#include <stdio.h>

/*Leia dois vetores v e w com 5 números inteiros cada. Em seguida, gere o vetor k que é o resultado
da soma dos elementos de v e w. Ao final, imprima o vetor k.*/

int main()
{
    int k[5], w[5], v[5];

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
        k[i] = v[i] + w[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Soma dos elementos de posicao %d = %d\n", i + 1, k[i]);
    }

    return 0;
}