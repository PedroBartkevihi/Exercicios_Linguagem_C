#include <stdio.h>

/*Calcule e imprima o volume de um cilindro que será enchido de água para um espetáculo de
mágica. Para isso, seu programa deverá ler o raio e a altura do cilindro.*/

int main()
{
    float raio, altura, volume;
    const float PI = 3.1415;

    printf("Insira o raio e a altura do cilindro, respectivamente: ");
    scanf("%f %f", &raio, &altura);

    volume = PI * (raio * raio) * altura;

    printf("Volume do cilindro: %.2f\n", volume);

    return 0;
}