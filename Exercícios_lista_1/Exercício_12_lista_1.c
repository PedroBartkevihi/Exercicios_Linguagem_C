#include <stdio.h>

//Entrada: Float comprimento e largura do terreno bem como o preço por metro quadrado do arame
//Saída: Float  a quantidade em metros de arame gasto e o preço total disso

int main()
{
    float comprimento, largura, area_arame, custo, arame;

    printf("Digite o comprimento: \n");
    scanf("%f", &comprimento);

    printf("Digite a largura: \n");
    scanf("%f", &largura);

    printf("Digite o preco por metro quadrado do arame: ");
    scanf("%f", &arame);

    area_arame = comprimento * largura * 4;
    custo = area_arame * arame;

    printf("A area coberta pelo arame sera de: %f metros quadrados \n", area_arame);
    printf("O preco total sera de: %f", custo);

    return 0;

}