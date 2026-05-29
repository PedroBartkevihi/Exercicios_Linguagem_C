#include <stdio.h>

/*Leia dois vetores de inteiros v e w (máximo de 10 números). Os vetores v e w podem ter
quantidades diferentes de números. Ao final, gere o vetor k com os números em comum de v e w.
Imprima o vetor k.*/

int main()
{
    int nV, nW, tamanhoK = 0;
    int v[10], w[10], k[10];

    printf("Insira o tamanho dos vetores v e w, respectivamente (maximo de 10 numeros): ");
    scanf("%d %d", &nV, &nW);

    if (nV <= 0 || nV > 10 || nW <= 0 || nW > 10)
    {
        printf("Erro, insira valores validos\n");
        return 1;
    }

    for (int i = 0; i < nV; i++)
    {
        printf("Insira o %d numero do vetor v: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < nW; i++)
    {
        printf("Insira o %d numero do vetor w: ", i + 1);
        scanf("%d", &w[i]);
    }

    for (int i = 0; i < nV; i++)
    {
        int existeEmW = 0;
        int jaExisteEmK = 0;

        for (int j = 0; j < nW; j++)
        {
            if (v[i] == w[j])
            {
                existeEmW = 1;
            }
        }

        for (int j = 0; j < tamanhoK; j++)
        {
            if (v[i] == k[j])
            {
                jaExisteEmK = 1;
            }
        }

        if (existeEmW && !jaExisteEmK)
        {
            k[tamanhoK] = v[i];
            tamanhoK++;
        }
    }

    printf("Numeros em comum:\n");

    for (int i = 0; i < tamanhoK; i++)
    {
        printf("%d\n", k[i]);
    }

    return 0;
}