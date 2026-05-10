#include <stdio.h>

/*Uma empresa classifica seus funcionários de acordo com um índice de produtividade: (1)
Excelente, (2) Bom e (3) Regular. Cada nível acrescenta um abono ao salário base do funcionário
de acordo com o seguinte:
• Excelente: 40% do salário base
• Bom: 20% do salário base
• Regular: 5% do salário base
Faça um programa que permita a entrada da matrícula, do salário base e o índice de produtividade
de vários funcionários, até o usuário digitar matrícula zero ou negativa. Para cada funcionário
imprima a sua matrícula e seu novo salário.*/

int main()
{
    int matricula, indiceProdutividade;
    double salarioBase, novoSalario;

    while (1)
    {
        printf("Insira a matricula do empregado (zero ou menor para sair): ");
        scanf("%d", &matricula);

        if (matricula <= 0)
        {
            break;
        }

        printf("Insira o salario base: ");
        scanf("%lf", &salarioBase);

        printf("Insira o indice de produtividade (1, 2 ou 3): ");
        scanf("%d", &indiceProdutividade);

        if (indiceProdutividade == 1)
        {
            novoSalario = salarioBase * 1.40;
        }
        else if (indiceProdutividade == 2)
        {
            novoSalario = salarioBase * 1.20;
        }
        else if (indiceProdutividade == 3)
        {
            novoSalario = salarioBase * 1.05;
        }
        else
        {
            printf("Indice invalido\n");
            continue;
        }

        printf("Matricula: %d\n", matricula);
        printf("Novo salario: R$ %.2f\n", novoSalario);
    }

    return 0;
}