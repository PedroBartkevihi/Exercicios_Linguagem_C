#include <stdio.h>

/*Leia o comprimento e a largura de um terreno retangular, além do preço do metro quadrado de
grama. Depois, calcule e imprima:
a) A área a ser coberta de grama.
b) O custo total de grama para gramar o terreno.*/

int main()
{
    float comprimento, largura, precoGrama, areaCoberta, custoTotal;

    printf("Insira o comprimento e a largura do terreno, respectivamente: ");
    scanf("%f %f", &comprimento, &largura);

    printf("Insira agora o preco do metro quadrado da grama: ");
    scanf("%f", &precoGrama);

    areaCoberta = comprimento * largura;
    custoTotal = areaCoberta * precoGrama;

    printf("Area a ser coberta de grama: %.2f metros quadrados\n", areaCoberta);
    printf("Custo total para gramar o terreno: R$ %.2f\n", custoTotal);

    return 0;
}