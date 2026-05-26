#include <stdio.h>

/*Leia um vetor v de 10 inteiros e um número inteiro k. Ao final, imprima os números de v que são
múltiplos de k.*/

int main()
{
    int v[10], w[10], k;
    int tamanhoW = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Insira um valor inteiro k: ");
    scanf("%d", &k);

    if (k == 0)
    {
        printf("Erro, k nao pode ser zero\n");
        return 1;
    }

    for (int i = 0; i < 10; i++)
    {
        if (v[i] % k == 0)
        {
            w[tamanhoW] = v[i];
            tamanhoW++;
        }
    }

    printf("Valores multiplos de %d:\n", k);

    for (int i = 0; i < tamanhoW; i++)
    {
        printf("%d\n", w[i]);
    }

    return 0;
}