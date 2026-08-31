#include <stdio.h>

/*Leia um vetor v com n números reais (n >= 3) e informe se essa sequência de números formam um
pico, um vale ou nenhum dos dois. Caso seja um pico ou um vale, informe a posição do mesmo.*/

int main()
{
    int n;

    printf("Insira a quantidade de elementos do vetor (n >= 3): ");
    scanf("%d", &n);

    if (n < 3)
    {
        printf("Erro, quantidade invalida\n");
        return 1;
    }

    double v[n];

    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d numero real: ", i + 1);
        scanf("%lf", &v[i]);
    }

    int i = 0;
    int p;

    while (i < n - 1 && v[i] < v[i + 1])
    {
        i++;
    }

    p = i;

    if (p != 0 && p != n - 1)
    {
        while (i < n - 1 && v[i] > v[i + 1])
        {
            i++;
        }

        if (i == n - 1)
        {
            printf("E pico\n");
            printf("Posicao do pico: %d\n", p + 1);
            return 0;
        }
    }

    i = 0;

    while (i < n - 1 && v[i] > v[i + 1])
    {
        i++;
    }

    p = i;

    if (p != 0 && p != n - 1)
    {
        while (i < n - 1 && v[i] < v[i + 1])
        {
            i++;
        }

        if (i == n - 1)
        {
            printf("E vale\n");
            printf("Posicao do vale: %d\n", p + 1);
            return 0;
        }
    }

    printf("Nao e pico nem vale\n");

    return 0;
}