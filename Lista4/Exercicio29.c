#include <stdio.h>

/*Leia uma matriz quadrada de inteiros m (4 x 4) e exiba os elementos que se encontram abaixo da
diagonal principal e o produto deles.*/

int main()
{
    int m[4][4];
    long long int produto = 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Insira o valor da linha %d e coluna %d da matriz M: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nElementos abaixo da diagonal principal:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i > j)
            {
                printf("%d\n", m[i][j]);
                produto *= m[i][j];
            }
        }
    }

    printf("O produto destes elementos e: %lld\n", produto);

    return 0;
}