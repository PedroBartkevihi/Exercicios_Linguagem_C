#include <stdio.h>

/*Leia uma matriz quadrada de inteiros m (4 x 4) e exiba os elementos que estão em linhas pares e
colunas ímpares.*/

int main()
{
    int m[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Insira o valor da linha %d e coluna %d da matriz M: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nElementos em linhas pares e colunas impares:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i % 2 == 0 && j % 2 != 0) {
                printf("Posicao [%d][%d] = %d\n", i, j, m[i][j]);
            }
        }
    }

    return 0;
}