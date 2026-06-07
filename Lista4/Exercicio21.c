#include <stdio.h>

/*Leia uma matriz a (2x3) e um valor inteiro k. Em seguida, gere outra matriz b (2x3) onde os
valores de b são os valores de a multiplicados por k.*/

int main()
{
    int a[2][3], b[2][3], k;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Insira o valor da linha %d e coluna %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Insira a constante a qual voce deseja multiplicar a matriz: ");
    scanf("%d", &k);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            b[i][j] = a[i][j] * k;
        }
    }

    printf("\nMatriz B:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Posicao [%d,%d] = %d\n", i + 1, j + 1, b[i][j]);
        }
    }

    return 0;
}