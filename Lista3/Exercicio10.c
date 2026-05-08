#include <stdio.h>

/*Calcule e imprima o somatório dos números de n a m, sendo n e m maiores que zero e m > n.*/

int main()
{
    int n, m, somatorio = 0;

    printf("Insira um intervalo de numeros inteiros (n a m): ");
    scanf("%d %d", &n, &m);

    if (n <= 0 || m <= 0 || m <= n)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    for (int i = n; i <= m; i++)
    {
        somatorio += i;
    }

    printf("Somatorio do intervalo %d a %d = %d\n", n, m, somatorio);

    return 0;
}