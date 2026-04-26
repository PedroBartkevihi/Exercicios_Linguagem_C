#include <stdio.h>

/*Leia o lado de um cubo, calcule e imprima seu volume.*/

int main()
{
    float lado, volume;

    printf("Insira o valor do lado do cubo: ");
    scanf("%f", &lado);

    volume = lado * lado * lado;

    printf("Volume do cubo: %.2f\n", volume);

    return 0;
}
