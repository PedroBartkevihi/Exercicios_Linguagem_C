#include <stdio.h>

/*Leia três valores a, b e c e imprima o maior e o menor deles.
Elabore uma solução sem usar os operadores lógicos, ou seja, usando somente os operadores relacionais.*/

int main()
{
    int a, b, c;
    int maior, menor;

    printf("Insira tres numeros inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a;
    menor = a;

    if (b > maior)
    {
        maior = b;
    }

    if (c > maior)
    {
        maior = c;
    }

    if (b < menor)
    {
        menor = b;
    }

    if (c < menor)
    {
        menor = c;
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);

    return 0;
}