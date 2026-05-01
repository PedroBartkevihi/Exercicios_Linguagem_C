#include <stdio.h>

/*Em um mercado de peças de baixo preço, cada comprador só pode comprar um tipo de peça por
vez, mas não tem limite da quantidade de peças. Construa um programa que entre com a
quantidade de peças e o valor de cada peça. Se o total for maior que R$ 200,00, o cliente terá um
desconto de 20%. Imprima o valor total a pagar.*/

int main()
{
    int qtdPecas;
    double valorPeca, valorTotal;

    printf("Insira o numero de pecas e o valor de cada uma, respectivamente: ");
    scanf("%d %lf", &qtdPecas, &valorPeca);

    valorTotal = qtdPecas * valorPeca;

    if (valorTotal > 200.00)
    {
        valorTotal = valorTotal * 0.80;
    }

    printf("Total a pagar: R$ %.2lf\n", valorTotal);

    return 0;
}