#include <stdio.h>

/*Leia um número inteiro n (n >= 0) e informe quantos dígitos ele tem.*/

int main()
{
    int n, copia, contador = 1;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Entrada invalida\n");
        return 1;
    }

    copia = n;

    while (copia / 10 > 0)
    {
        copia /= 10;
        contador++;
    }

    printf("Quantidade de digitos de %d: %d\n", n, contador);

    return 0;
}