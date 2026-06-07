#include <stdio.h>

/*Leia uma matriz quadrada a (3x3) e gere uma matriz b invertida.*/

int main()
{
    int a[3][3], b[3][3];

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
            b[2 - i][2 - j] = a[i][j];
        }
    }

    printf("\nMatriz B invertida:\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Posicao [%d,%d] = %d\n", i + 1, j + 1, b[i][j]);
        }
    }

    return 0;
}