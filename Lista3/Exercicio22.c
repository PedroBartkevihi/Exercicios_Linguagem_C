#include <stdio.h>

/*Leia os números inteiros n, k e r. Em seguida, imprima os k termos de uma PG que inicia em n e
tem razão r.*/

int main()
{
    int n, k, r;
    int termo;

    printf("Insira o numero de inicio da PG, a quantidade de termos e a razao, respectivamente: ");
    scanf("%d %d %d", &n, &k, &r);

    if (k <= 0)
    {
        printf("Quantidade de termos invalida\n");
        return 1;
    }

    termo = n;

    for (int i = 1; i <= k; i++)
    {
        printf("%d\n", termo);
        termo *= r;
    }

    return 0;
}