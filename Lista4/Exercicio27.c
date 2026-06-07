#include <stdio.h>

/*Leia uma matriz quadrada de inteiros m (4 x 4) e imprima todos os elementos, exceto os da
diagonal principal.*/

int main()
{
    int m[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Insira o valor da linha %d e coluna %d da matriz A: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\nElementos da matriz (sem a diagonal principal):\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i != j) {
                printf("%d\n", m[i][j]);
            }
        }
    }

    return 0;
}