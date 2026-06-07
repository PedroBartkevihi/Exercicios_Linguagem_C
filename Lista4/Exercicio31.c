#include <stdio.h>

/*Leia uma matriz quadrada de inteiros m (5 x 5) e verifique se ela é simétrica, ou seja, se os valores
da linha 1 são iguais aos da coluna 1, os da linha 2 são iguais aos da coluna 2, e assim por diante.
Ao final imprimir “É simétrica” ou “Não é simétrica”.*/

int main()
{
    int m[5][5];
    int simetrica = 1;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Insira o valor da linha %d e coluna %d da matriz M: ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (m[i][j] != m[j][i])
            {
                simetrica = 0;
            }
        }
    }

    if (simetrica == 1)
    {
        printf("E simetrica\n");
    }
    else
    {
        printf("Nao e simetrica\n");
    }

    return 0;
}