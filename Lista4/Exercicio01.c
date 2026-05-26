#include <stdio.h>

/*Leia um vetor v de 10 inteiros e gere outro vetor w contendo os elementos de v ao quadrado.
Imprima w.*/

int main()
{
    int v[10], w[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        w[i] = v[i] * v[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ao quadrado = %d\n", v[i], w[i]);
    }

    return 0;
}