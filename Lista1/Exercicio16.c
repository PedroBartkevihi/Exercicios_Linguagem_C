#include <stdio.h>

/*Leia um número real x e imprima seu valor arredondado. Por exemplo: se x = 3.2 imprimir 3, e se x
= 3.5 ou maior imprimir 4.*/

int main()
{
    float x;
    int xArredondado;
    
    printf("Insira um numero real: ");
    scanf("%f", &x);

    xArredondado = (int)(x + 0.5);

    printf("Valor arredondado: %d\n", xArredondado);

    return 0;
}