#include <stdio.h>

/*Leia o ano atual e o ano de nascimento de uma pessoa e exiba a sua idade. A seguir, informe se a
pessoa é bebê (0 a 3 anos), criança (4 a 10 anos), adolescente (11 a 18 anos), adulta (19 a 60 anos)
ou idosa (61 anos em diante).*/

int main()
{
    int anoAtual, anoNascimento, idade;

    printf("Insira o ano atual e o ano de seu nascimento, respectivamente: ");
    scanf("%d %d", &anoAtual, &anoNascimento);

    idade = anoAtual - anoNascimento;

    if (idade < 0)
    {
        printf("Idade invalida\n");
    }
    else
    {
        printf("Idade: %d anos\n", idade);

        if (idade <= 3)
        {
            printf("Bebe\n");
        }
        else if (idade <= 10)
        {
            printf("Crianca\n");
        }
        else if (idade <= 18)
        {
            printf("Adolescente\n");
        }
        else if (idade <= 60)
        {
            printf("Adulto\n");
        }
        else
        {
            printf("Idoso\n");
        }
    }
    
    return 0;
}