#include <stdio.h>

/*Calcule e imprima o salário semanal de uma pessoa, determinado pelas seguintes condições: se o
número de horas trabalhadas for de até 40h, a pessoa recebe R$15,00 por hora, senão a pessoa
recebe R$600,00 mais R$21,00 para cada hora trabalhada acima de 40h.*/

int main()
{
    int horasTrabalhadas, horasExcedentes;
    double salarioSemanal;

    printf("Insira o numero de horas trabalhadas: ");
    scanf("%d", &horasTrabalhadas);

    if (horasTrabalhadas <= 0)
    {
        printf("Insira um valor valido para a quantidade de horas trabalhadas\n");
        return 1;
    }
    else if (horasTrabalhadas <= 40)
    {
        salarioSemanal = horasTrabalhadas * 15.00;
    }
    else
    {
        horasExcedentes = horasTrabalhadas - 40;
        salarioSemanal = 600.00 + (horasExcedentes * 21.00);
    }

    printf("Salario semanal: R$ %.2lf\n", salarioSemanal);
    
    return 0;
}