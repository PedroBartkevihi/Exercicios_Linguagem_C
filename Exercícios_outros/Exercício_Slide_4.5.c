#include <stdio.h>

int main()
{
    float x, y, divisao;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    divisao = x / y;

    if (y == 0)
    {
        printf("Nao e possivel dividir por 0");
    }
    else
    {
        printf("A divisao de x por y e: %.2f", divisao);
    }

    return 0;
    
}