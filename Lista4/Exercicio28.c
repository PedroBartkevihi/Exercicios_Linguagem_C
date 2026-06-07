#include <stdio.h>

/*Leia uma matriz quadrada de inteiros m (4 x 4) e exiba os elementos que se encontram acima da
diagonal principal e a soma deles.*/

int main()
{
    int m[4][4];
    int soma = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Insira o valor da linha %d e coluna %d da matriz A: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nElementos acima da diagonal principal:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j > i) {
                printf("%d\n", m[i][j]);
                soma += m[i][j];
            }
        }
    }

    printf("A soma destes elementos e: %d\n", soma);

    return 0;
}