#include <stdio.h>

//Entrada:Float o comprimento, a largura e o preço do metro quadrado
//Saída: Float area do terreno e o preço por metro quadrado de grama

int main()
{
    float comprimento, largura, preco, area, preco_metro_quadrado;

    printf("Digite o comprimento: \n");
    scanf("%f", &comprimento);

    printf("Digite a largura: \n");
    scanf("%f", &largura);

    printf("Digite o preco por metro quadrado da grama: \n");
    scanf("%f", &preco);

    area = comprimento * largura;
    preco_metro_quadrado = area * preco;

    printf("A area coberta por grama sera de: %f metros quadrados \n", area);
    printf("O preco total sera de: %f", preco_metro_quadrado);

    return 0;
}
