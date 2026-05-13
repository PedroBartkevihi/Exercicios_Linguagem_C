#include <stdio.h>

/*Imprima a tabuada de multiplicação de 1 até 10 de forma tabular.*/

int main()
{
    printf("Tabuada de multiplicacao de 1 ate 10:\n\n");

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%4d", i * j);
        }

        printf("\n");
    }

    return 0;
}