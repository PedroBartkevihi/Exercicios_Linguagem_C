#include <stdio.h>

/*Leia o comprimento e a largura de um terreno retangular, além do preço do metro de arame
farpado. Depois, calcule e imprima:
a) A metragem de arame gasta para cercar o terreno, sabendo que o terreno será cercado com 4
voltas de arame farpado.
b) O custo total com o arame farpado.*/

int main()
{
    float comprimento, largura, precoArame, perimetro, metragemGasta, custoTotal;

    printf("Insira o comprimento e a largura do terreno, respectivamente: ");
    scanf("%f %f", &comprimento, &largura);

    printf("Insira agora o preco do metro de arame farpado: ");
    scanf("%f", &precoArame);

    perimetro = (comprimento + largura) * 2;
    metragemGasta = perimetro * 4;
    custoTotal = metragemGasta * precoArame;

    printf("Metragem gasta para cercar o terreno: %.2f\n", metragemGasta);
    printf("Custo total para cercar o terreno: R$ %.2f\n", custoTotal);

    return 0;
}