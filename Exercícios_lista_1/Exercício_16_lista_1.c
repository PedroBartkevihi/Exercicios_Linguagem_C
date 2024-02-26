#include <stdio.h>

//Entrada:Double um numero decimal qualquer
//Saída:Double o valor aproximado do numero decimal

int main()
{
    
    double x;

    printf("Digite um numero decimal: ");
    scanf("%lf", &x);

    printf("O valor aproximado e: %.0lf", x);

    return 0;
}