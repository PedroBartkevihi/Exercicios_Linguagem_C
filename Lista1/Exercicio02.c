#include <stdio.h>

/*Leia a base e a altura de um triângulo, calcule e imprima sua área.*/

int main()
{
    float base, altura, area;

    printf("Insira a base e altura do triangulo respectivamente: ");
    scanf("%f %f", &base, &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo: %.2f\n", area);

    return 0;
}
