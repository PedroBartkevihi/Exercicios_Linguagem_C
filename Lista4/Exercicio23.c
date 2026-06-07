#include <stdio.h>

/*Leia duas matrizes de inteiros a e b (3x3). Em seguida, gere e imprima a matriz c = a x b.*/

int main()
{
    int a[3][3], b[3][3], c[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o valor da linha %d e coluna %d da matriz A: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o valor da linha %d e coluna %d da matriz B: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            c[i][j] = 0;

            for (int k = 0; k < 3; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nMatriz C:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Posicao [%d,%d] = %d\n", i + 1, j + 1, c[i][j]);
        }
    }

    return 0;
}