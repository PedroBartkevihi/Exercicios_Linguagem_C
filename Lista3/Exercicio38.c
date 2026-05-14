#include <stdio.h>

/*A série de Fibonacci é uma sequência de números que começam com 0 e 1 e, a partir daí, o
próximo número é gerado pela soma dos dois imediatamente anteriores: 0 1 1 2 3 5 8 13... Leia
um valor n (n > 2) e calcule o n-ésimo número da série de Fibonacci.*/

int main()
{
    int n;
    long long int anterior = 0, atual = 1, proximo;

    printf("Insira um numero inteiro maior que 2: ");
    scanf("%d", &n);

    if (n <= 2)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }

    for (int i = 3; i <= n; i++)
    {
        proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
    }

    printf("O %d-esimo numero da serie de Fibonacci e: %lld\n", n, atual);

    return 0;
}