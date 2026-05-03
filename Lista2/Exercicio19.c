#include <stdio.h>

/*Leia o preço de um produto e a condição de pagamento e imprima os valores a serem pagos,
considerando a seguinte tabela:

1 - À vista, dinheiro ou cheque: 10% de desconto
2 - À vista, cartão de crédito: 5% de desconto
3 - Em 2 vezes: preço normal sem juros
4 - Em 3 vezes: preço normal + 10% juros*/

int main()
{
    double valorProduto, valorPagamento, valorParcela;
    int opcao;

    printf("Insira o valor do produto: ");
    scanf("%lf", &valorProduto);

    if (valorProduto <= 0)
    {
        printf("Insira um valor valido para o produto\n");
        return 1;
    }

    printf("\nCondicoes de pagamento:\n");
    printf("1 - A vista em dinheiro ou cheque, 10%% de desconto\n");
    printf("2 - A vista no cartao de credito, 5%% de desconto\n");
    printf("3 - Em 2 vezes, preco normal sem juros\n");
    printf("4 - Em 3 vezes, preco normal + 10%% de juros\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        valorPagamento = valorProduto * 0.90;
        printf("Valor a ser pago: R$ %.2lf\n", valorPagamento);
    }
    else if (opcao == 2)
    {
        valorPagamento = valorProduto * 0.95;
        printf("Valor a ser pago: R$ %.2lf\n", valorPagamento);
    }
    else if (opcao == 3)
    {
        valorPagamento = valorProduto;
        valorParcela = valorPagamento / 2;

        printf("Valor total: R$ %.2lf\n", valorPagamento);
        printf("Valor de cada parcela: R$ %.2lf\n", valorParcela);
    }
    else if (opcao == 4)
    {
        valorPagamento = valorProduto * 1.10;
        valorParcela = valorPagamento / 3;

        printf("Valor total: R$ %.2lf\n", valorPagamento);
        printf("Valor de cada parcela: R$ %.2lf\n", valorParcela);
    }
    else
    {
        printf("Opcao de pagamento invalida\n");
        return 1;
    }

    return 0;
}