#include <stdio.h>

/*Leia 10 valores, um de cada vez, e conte quantos deles são divisíveis por 3 ou 5, mas não são pares.
Ao final, imprima essa quantidade.*/

int main()
{
    int contador = 0, numero;

    for (int i = 1; i <= 10; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &numero);

        if (numero % 2 != 0 && (numero % 3 == 0 || numero % 5 == 0))
        {
            contador++;
        }
    }

    printf("Quantidade de numeros que sao divisiveis por 3 ou 5, mas nao sao pares: %d\n", contador);

    return 0;
}