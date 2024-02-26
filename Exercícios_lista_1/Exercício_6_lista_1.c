#include <stdio.h>

//Entrada: float valor da temperatura em graus Celsius
//Saída: float valor da temperatura em graus fahrenheit

int main()
{
    float t_celsius, t_fahrenheit;

    printf("Digite a temperatura em graus celsius: \n");
    scanf("%f", &t_celsius);

    t_fahrenheit = 32 + (1.8 * t_celsius);

    printf("A temperatura em fahrenheit e: %.2f", t_fahrenheit);

    return 0;

}