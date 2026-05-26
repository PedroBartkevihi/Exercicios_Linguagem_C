#include <stdio.h>

/*Leia um vetor v de 10 inteiros e um valor inteiro k e imprima quantos elementos são maiores que k.*/

int main()
{
    int v[10], k, contador = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Insira um valor inteiro k: ");
    scanf("%d", &k);

    for (int i = 0; i < 10; i++)
    {
        if (v[i] > k)
        {
            contador++;
        }
    }

    printf("Quantidade de valores maiores que %d: %d\n", k, contador);

    return 0;
}