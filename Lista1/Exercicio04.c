#include <stdio.h>

/*Leia o valor de um produto e o percentual de desconto e exiba seu novo valor com o desconto e o
valor descontado.*/

int main()
{
    float valorProduto, valorDescontado, valorFinalProduto, percentualDesconto;
    
    printf("Insira o valor do produto: ");
    scanf("%f", &valorProduto);

    printf("Insira o percentual para o desconto: ");
    scanf("%f", &percentualDesconto);

    valorDescontado = valorProduto * (percentualDesconto / 100);
    valorFinalProduto = valorProduto - valorDescontado;

    printf("Valor com desconto: %.2f \nValor descontado %.2f\n", valorFinalProduto, valorDescontado);

    return 0;
}
