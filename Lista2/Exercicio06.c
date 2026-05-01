#include <stdio.h>

/*Leia o valor do salário de uma pessoa e o valor de um financiamento pretendido. Caso o
financiamento seja menor ou igual a 5 vezes o salário da pessoa, o programa deverá imprimir
"Financiamento Concedido"; senão, ele deverá imprimir "Financiamento Negado".*/

int main()
{
    float salario, financiamento;

    printf("Insira o valor do seu salario: ");
    scanf("%f", &salario);

    printf("Insira o valor do financiamento pretendido: ");
    scanf("%f", &financiamento);

    if (financiamento <= (salario * 5))
    {
        printf("Financiamento Concedido\n");
    }
    else
    {
        printf("Financiamento Negado\n");
    }
    
    return 0;
}