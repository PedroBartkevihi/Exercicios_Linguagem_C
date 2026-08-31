#include <stdio.h>

/*Leia dois vetores x e w com, respectivamente, n e m números inteiros.
Assuma que os valores serão digitados em ordem crescente e podem ter repetição.
Usando intercalação, crie um vetor k ordenado de forma crescente e sem repetição
com os valores de x e w.*/

int main()
{
    int n, m;

    printf("Insira o tamanho do vetor x: ");
    scanf("%d", &n);

    printf("Insira o tamanho do vetor w: ");
    scanf("%d", &m);

    if (n <= 0 || m <= 0)
    {
        printf("Erro, tamanhos invalidos\n");
        return 1;
    }

    int x[n], w[m], k[n + m];
    int i = 0, j = 0, tamanhoK = 0;

    for (int a = 0; a < n; a++)
    {
        printf("Insira o %d numero do vetor x: ", a + 1);
        scanf("%d", &x[a]);
    }

    for (int a = 0; a < m; a++)
    {
        printf("Insira o %d numero do vetor w: ", a + 1);
        scanf("%d", &w[a]);
    }

    while (i < n && j < m)
    {
        int valor;

        if (x[i] < w[j])
        {
            valor = x[i];
            i++;
        }
        else if (w[j] < x[i])
        {
            valor = w[j];
            j++;
        }
        else
        {
            valor = x[i];
            i++;
            j++;
        }

        if (tamanhoK == 0 || k[tamanhoK - 1] != valor)
        {
            k[tamanhoK] = valor;
            tamanhoK++;
        }
    }

    while (i < n)
    {
        if (tamanhoK == 0 || k[tamanhoK - 1] != x[i])
        {
            k[tamanhoK] = x[i];
            tamanhoK++;
        }

        i++;
    }

    while (j < m)
    {
        if (tamanhoK == 0 || k[tamanhoK - 1] != w[j])
        {
            k[tamanhoK] = w[j];
            tamanhoK++;
        }

        j++;
    }

    printf("\nVetor k ordenado e sem repeticao:\n");

    for (int a = 0; a < tamanhoK; a++)
    {
        printf("%d\n", k[a]);
    }

    return 0;
}