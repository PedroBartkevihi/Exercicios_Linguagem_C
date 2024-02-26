#include <stdio.h>

//Entrada:Float Valor da base e da altura
//Saída:Float Valor da área

int main()
{
    float base, altura, area;

    printf("Digite o valor da Base: \n");
    scanf("%f", &base);

    printf("Digite o valor da Altura: \n");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo e: %.2f",area);

    return 0;

}