#include <stdio.h>

//Entrada: Float valor do peso e da altura
//Saída: Float valor do imc

int main()
{
    float imc, peso, altura;

    printf("Digite a altura em metros: \n");
    scanf("%f", &altura);

    printf("Digite o peso: \n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("O imc e: %f",imc);

    return 0;
}