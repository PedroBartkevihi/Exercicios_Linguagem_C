#include <stdio.h>

/*Leia o peso e altura de uma pessoa, calcule e imprima seu IMC.*/

int main()
{
    float peso, altura, imc;

    printf("Insira o peso e a altura da pessoa respectivamente: ");
    scanf("%f %f", &peso, &altura);

    imc = peso / (altura * altura);

    printf("IMC da pessoa: %.2f\n", imc);

    return 0;
}
