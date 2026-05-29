#include <stdio.h>

/*Leia um vetor de inteiros v (máximo de 20 números), um número n e uma posição p. Em seguida,
insira o número n na posição p do vetor (deslocando os demais números para a direita) e imprima
v. Caso a posição p seja inválida, apresente uma mensagem de erro.*/

int main()
{
    int nV, n, p;
    int v[20];

    printf("Insira o tamanho do vetor v (maximo de 20 numeros): ");
    scanf("%d", &nV);

    if (nV <= 0 || nV >= 20)
    {
        printf("Erro, insira uma quantidade valida de elementos\n");
        return 1;
    }

    for (int i = 0; i < nV; i++)
    {
        printf("Insira o %d numero do vetor v: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("Insira um numero inteiro e a posicao que deseja adiciona-lo ao vetor: ");
    scanf("%d %d", &n, &p);

    if (p < 1 || p > nV + 1)
    {
        printf("Erro, insira uma posicao valida\n");
        return 1;
    }

    p = p - 1;

    for (int i = nV; i > p; i--)
    {
        v[i] = v[i - 1];
    }

    v[p] = n;
    nV++;

    for (int i = 0; i < nV; i++)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}