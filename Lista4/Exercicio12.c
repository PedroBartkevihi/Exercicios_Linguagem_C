#include <stdio.h>

/*Leia a matrícula e o salário de 10 funcionários. Calcule o novo salário de todos os funcionários
sabendo que o reajuste é de 8%. Ao final, exiba uma lista de funcionários com suas matrículas e
novos salários.*/

int main()
{
    double salario[10];
    int matricula[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira a matricula e salario do funcionario %d: ", i + 1);
        scanf("%d %lf", &matricula[i], &salario[i]);

        if (matricula[i] <= 0 || salario[i] < 0)
        {
            printf("Erro, insira valores validos\n");
            return 1;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        salario[i] *= 1.08;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Matricula do funcionario: %d | Salario reajustado: %.2lf\n", matricula[i], salario[i]);
    }

    return 0;
}