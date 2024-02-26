#include <stdio.h>

//Entrada: Float o valor da altura e do raio do cilindro
//Saída: Float o volume do cilindro

int main()
{
    float altura, raio, volume;

    printf("Digite o valor da altura: \n");
    scanf("%f", &altura);

    printf("Digite o valor do raio: \n");
    scanf("%f", &raio);

    volume = 3.14 * (raio * raio) * altura;

    printf("O volume do cilindro e: %f", volume);

    return 0;
}