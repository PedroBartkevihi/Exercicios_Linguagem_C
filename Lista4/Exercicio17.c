#include <stdio.h>

/*Leia um vetor v de 10 inteiros e imprima os números que aparecem mais de uma vez em v.*/

int main()
{

    int v[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Numeros que aparecem mais de uma vez:\n");

    for (int i = 0; i < 10; i++)
    {
        int contador = 0;

        for (int j = 0; j < 10; j++)
        {
            if (v[i] == v[j])
            {
                contador++;
            }
        }

        int jaApareceuAntes = 0;

        for (int j = 0; j < i; j++)
        {
            if (v[i] == v[j])
            {
                jaApareceuAntes = 1;
            }
        }

        if (contador > 1 && jaApareceuAntes == 0)
        {
            printf("%d\n", v[i]);
        }
    }

    return 0;
}