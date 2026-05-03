#include <stdio.h>

/*
Um endocrinologista deseja controlar a saúde de seus pacientes e, para isto, utiliza o índice de
massa corporal (IMC). Sabendo-se que o IMC é calculado através da fórmula: IMC = peso/altura2

Leia o peso (Kg) e altura (metros) de um paciente e exiba sua faixa de risco, baseando-se na seguinte tabela.

IMC / Faixa de risco
Abaixo de 20 Abaixo do peso
Acima de 20 até 25 Normal
Acima de 25 até 30 Excesso de peso
Acima de 30 até 35 Obesidade
Acima de 35 Obesidade mórbida
*/

int main()
{
    double imc, peso, altura;

    printf("Insira o peso(Kg) e a altura(metros) do paciente, respectivamente: ");
    scanf("%lf %lf", &peso, &altura);

    if (peso <= 0 || altura <= 0)
    {
        printf("Insira valores validos\n");
        return 1;
    }
    
    imc = peso / (altura * altura);

    printf("IMC: %.2lf\n", imc);

    if (imc < 20)
    {
        printf("Abaixo do peso\n");
    }
    else if (imc <= 25)
    {
        printf("Normal\n");
    }
    else if (imc <= 30)
    {
        printf("Excesso de peso\n");
    }
    else if (imc <= 35)
    {
        printf("Obesidade\n");
    }
    else
    {
        printf("Obesidade morbida\n");
    }
    
    return 0;
}