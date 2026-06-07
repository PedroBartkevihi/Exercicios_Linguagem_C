#include <stdio.h>

/*Leia uma matriz de inteiros m (4x3). Em seguida, gere e apresente os vetores soma_linha e
soma_coluna, cujos elementos são, respectivamente, a soma das linhas e colunas de m.*/

int main()
{
    int m[4][3], soma_linha[4] = {0}, soma_coluna[3] = {0};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o valor da linha %d e coluna %d da matriz M: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma_linha[i] += m[i][j];
            soma_coluna[j] += m[i][j];
        }
    }

    printf("\nVetor soma_linha:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Linha %d: %d\n", i + 1, soma_linha[i]);
    }

    printf("\nVetor soma_coluna:\n");
    for (int j = 0; j < 3; j++)
    {
        printf("Coluna %d: %d\n", j + 1, soma_coluna[j]);
    }

    return 0;
}