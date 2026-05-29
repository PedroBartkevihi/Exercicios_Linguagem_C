#include <stdio.h>

/*Leia dois vetores de inteiros a e b com n números cada (máximo de 10 números) e calcule o
produto escalar p de a e b, isto é, p = a[0] * b[0] + a[1] * b[1] + a[2] * b[2] + ... + a[n-1] * b[n-1].*/

int main()
{
    int n, produtoEscalar = 0;
    int a[10], b[10];

    printf("Insira o tamanho dos vetores (maximo de 10 numeros): ");
    scanf("%d", &n);

    if (n <= 0 || n > 10)
    {
        printf("Erro, insira valores validos\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d numero do vetor a: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Insira o %d numero do vetor b: ", i + 1);
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        produtoEscalar += a[i] * b[i];
    }

    printf("Produto escalar de a e b: %d\n", produtoEscalar);

    return 0;
}