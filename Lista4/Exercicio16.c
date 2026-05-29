#include <stdio.h>

/*Leia um vetor de inteiros v (máximo de 20 números), um número n e uma posição p. Em seguida,
remova n números do vetor v a partir da posição p e imprima v. Caso a posição p seja inválida,
apresente uma mensagem de erro.*/

int main()
{
    int nV, n, p;
    int v[20];

    printf("Insira o tamanho do vetor v (maximo de 20 numeros): ");
    scanf("%d", &nV);

    if (nV <= 0 || nV > 20)
    {
        printf("Erro, insira uma quantidade valida de elementos\n");
        return 1;
    }

    for (int i = 0; i < nV; i++)
    {
        printf("Insira o %d numero do vetor v: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Insira a quantidade de elementos que deseja remover e a partir de qual posicao, respectivamente: ");
    scanf("%d %d", &n, &p);

    if (p < 1 || p > nV)
    {
        printf("Erro, insira uma posicao valida\n");
        return 1;
    }

    p = p - 1;

    if (n <= 0 || n > nV - p)
    {
        printf("Erro, quantidade de elementos invalida\n");
        return 1;
    }

    for (int i = p; i < nV - n; i++)
    {
        v[i] = v[i + n];
    }

    nV -= n;

    for (int i = 0; i < nV; i++)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}