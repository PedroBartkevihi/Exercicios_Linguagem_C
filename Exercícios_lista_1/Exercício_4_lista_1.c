#include <stdio.h>

//Entrada: float valor do produto e valor do desconto
//Saída: float valor final do produto e o valor descontado

int main()
{
    float x, y, z, valor_final;

    printf("Digite o valor do produto: \n");
    scanf("%f", &x);

    printf("Digite o valor do desconto: \n");
    scanf("%f", &y);

    z = (x * y) / 100;
    valor_final = x - z;

    printf("O valor final e: %f \nO valor descontado e: %f",valor_final,z);

    return 0;
}