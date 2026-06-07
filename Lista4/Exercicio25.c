#include <stdio.h>

/*Leia uma matriz m (4x4), calcule e imprima o seu determinante.*/

int main()
{
    int m[4][4];
    int menor[3][3];
    long long determinante = 0;
    long long detMenor;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Insira o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    for (int coluna = 0; coluna < 4; coluna++)
    {
        int linhaMenor = 0;

        for (int i = 1; i < 4; i++)
        {
            int colunaMenor = 0;

            for (int j = 0; j < 4; j++)
            {
                if (j != coluna)
                {
                    menor[linhaMenor][colunaMenor] = m[i][j];
                    colunaMenor++;
                }
            }

            linhaMenor++;
        }

        detMenor = menor[0][0] * (menor[1][1] * menor[2][2] - menor[1][2] * menor[2][1])
                 - menor[0][1] * (menor[1][0] * menor[2][2] - menor[1][2] * menor[2][0])
                 + menor[0][2] * (menor[1][0] * menor[2][1] - menor[1][1] * menor[2][0]);

        if (coluna % 2 == 0)
        {
            determinante += m[0][coluna] * detMenor;
        }
        else
        {
            determinante -= m[0][coluna] * detMenor;
        }
    }

    printf("Determinante da matriz: %lld\n", determinante);

    return 0;
}