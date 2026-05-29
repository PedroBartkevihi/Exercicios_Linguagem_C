#include <stdio.h>

/*Leia um vetor v com 10 inteiros e imprima quantas vezes cada um dos números aparece em v.*/

int main()
{
    int v[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero do vetor: ", i + 1);
        scanf("%d", &v[i]);
    }

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

        if (jaApareceuAntes == 0)
        {
            printf("Quantidade de vezes que %d aparece: %d\n", v[i], contador);
        }
    }

    return 0;
}