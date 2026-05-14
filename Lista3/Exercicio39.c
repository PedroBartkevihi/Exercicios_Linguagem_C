#include <stdio.h>

/* Leia três números inteiros positivos n, i e j. Em seguida, imprima, em ordem crescente os n
primeiros inteiros positivos que são múltiplos de i ou de j ou dos dois.*/

int main()
{
    int n, i, j, contador = 1, qtdMultiplos = 0;

    printf("Insira tres numeros inteiros positivos: ");
    scanf("%d %d %d", &n, &i, &j);

    if (n <= 0 || i <= 0 || j <= 0)
    {
        printf("Erro, entrada invalida\n");
        return 1;
    }

    while (qtdMultiplos < n)
    {
        if (contador % i == 0 || contador % j == 0)
        {
            printf("%d\n", contador);
            qtdMultiplos++;
        }

        contador++;
    }

    return 0;
}