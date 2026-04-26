#include <stdio.h>

/*Leia uma temperatura em graus Celsius e converta-a em graus Fahrenheit.*/

int main()
{
    float fahrenheit, celsius;

    printf("Insira a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}