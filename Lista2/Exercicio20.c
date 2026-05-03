#include <stdio.h>

/* Leia o número de horas trabalhadas e o valor da hora de um trabalhador e imprima o salário bruto e
líquido, sabendo que o salário líquido é igual ao salário bruto menos o IR. O desconto do IR segue
as seguintes regras:

• Salário bruto menor ou igual a R$ 1900,00: desconto ZERO
• Salário bruto maior que R$1900,00 e menor ou igual a R$ 4300,00: desconto de 10%
• Salário bruto maior que R$4300,00 e menor ou igual a R$ 5800,00: desconto de 15%
• Salário bruto maior que R$5800,00: desconto de 27,5% */

int main()
{
    int horasTrabalhadas;
    double valorHora, salarioBruto, salarioLiquido;

    printf("Insira o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    if (horasTrabalhadas <= 0)
    {
        printf("Insira um valor valido para a quantidade de horas trabalhadas\n");
        return 1;
    }

    printf("Insira o valor da hora trabalhada: ");
    scanf("%lf", &valorHora);
    
    if (valorHora <= 0)
    {
        printf("Insira um valor valido para o preco da hora trabalhada\n");
        return 1;
    }

    salarioBruto = horasTrabalhadas * valorHora;

    if (salarioBruto <= 1900.00)
    {
        salarioLiquido = salarioBruto;
    }
    else if (salarioBruto <= 4300.00)
    {
        salarioLiquido = salarioBruto - (salarioBruto * 0.10);
    }
    else if (salarioBruto <= 5800.00)
    {
        salarioLiquido = salarioBruto - (salarioBruto * 0.15);
    }
    else
    {
        salarioLiquido = salarioBruto - (salarioBruto * 0.275);
    }
    
    printf("Salario bruto: R$ %.2lf\n", salarioBruto);
    printf("Salario liquido: R$ %.2lf\n", salarioLiquido);

    return 0;
}