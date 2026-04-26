#include <stdio.h>

/*Leia o raio de uma esfera, calcule e imprima seu volume.*/

int main()
{
    float raio, volume;
    const float PI = 3.1415;

    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4 * PI * (raio * raio * raio)) / 3.0;

    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}