#include <stdio.h>

/*Leia os números inteiros n e m e imprima os números ímpares no intervalo de n a m, inclusive.
Inverta n com m, caso n > m.*/

int main()
{
    int n, m, auxiliar;

    printf("Insira um intervalo de numeros inteiros (n a m): ");
    scanf("%d %d", &n, &m);

    if (n > m)
    {
        auxiliar = m;
        m = n;
        n = auxiliar;
    }

    for (int i = n; i <= m; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}