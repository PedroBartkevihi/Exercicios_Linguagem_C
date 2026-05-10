#include <stdio.h>

/*Leia o número da conta e o saldo de vários clientes, até o usuário digitar zero. A cada entrada
deverá ser apresentada a mensagem “positivo” ou “negativo”, caso o saldo seja positivo ou
negativo. Ao final, deverá ser impresso o percentual de contas com saldo negativo.*/

int main()
{
    int conta, totalContas = 0, contasNegativas = 0;
    double saldo, percentualNegativo;

    do
    {
        printf("Insira o numero da conta (digite zero para sair): ");
        scanf("%d", &conta);

        if (conta < 0)
        {
            printf("Erro, o numero da conta nao pode ser negativo\n");
        }
        else if (conta > 0)
        {
            printf("Insira o saldo da conta: ");
            scanf("%lf", &saldo);

            if (saldo < 0)
            {
                printf("Negativo\n");
                contasNegativas++;
            }
            else
            {
                printf("Positivo\n");
            }

            totalContas++;
        }

    } while (conta != 0);

    if (totalContas > 0)
    {
        percentualNegativo = (contasNegativas * 100.0) / totalContas;
        printf("Percentual de contas com saldo negativo: %.2lf%%\n", percentualNegativo);
    }
    else
    {
        printf("Nenhuma conta foi informada.\n");
    }

    return 0;
}