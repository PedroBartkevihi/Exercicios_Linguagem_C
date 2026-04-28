#include <stdio.h>

/*Leia dois inteiros x e y e imprima o maior múltiplo de x menor ou igual a y. Exemplo: se x = 9 e y
= 38, então o resultado é 36.*/

int main()
{
    int x, y, maiorMultiplo;
    
    printf("Insira dois numeros inteiros: ");
    scanf("%d %d", &x, &y);

    maiorMultiplo = (y / x) * x;

    printf("Maior multiplo de x menor ou igual a y: %d\n", maiorMultiplo);

    return 0;
}