#include <stdio.h>

/*Leia um vetor v de 10 inteiros e imprima os números pares de trás para frente.*/

int main()
{
    int v[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Numeros pares de tras para frente:\n");

    for (int i = 9; i >= 0; i--)
    {
        if (v[i] % 2 == 0)
        {
            printf("%d\n", v[i]);
        }
    }

    return 0;
}