#include <stdio.h>

/*Leia um vetor v de 10 inteiros e um valor inteiro k. Copie para um vetor w os elementos de v que
são maiores que k. Ao final, imprima o vetor w.*/

int main()
{
    int v[10], w[10], k;
    int tamanhoW = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Insira um valor inteiro k: ");
    scanf("%d", &k);

    for (int i = 0; i < 10; i++)
    {
        if (v[i] > k)
        {
            w[tamanhoW] = v[i];
            tamanhoW++;
        }
    }

    printf("Valores maiores que %d:\n", k);

    for (int i = 0; i < tamanhoW; i++)
    {
        printf("%d\n", w[i]);
    }

    return 0;
}