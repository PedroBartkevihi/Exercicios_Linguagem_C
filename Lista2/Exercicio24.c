#include <stdio.h>

/*
Baseado no ano e peso do modelo de um automóvel, uma cidade determina a sua classe e o valor da
taxa de registro usando a seguinte tabela:

Ano do modelo        Peso                Classe    Taxa de registro

1970 ou antes        Menos de 1200 kg    1         16,50
                     de 1200 a 1700 kg   2         25,50
                     Mais de 1700 kg     3         46,50

1971 a 1979          Menos de 1200 kg    4         27,00
                     de 1200 a 1700 kg   5         30,50
                     Mais de 1700 kg     6         52,50

1980 ou depois       Menos de 3600 kg    7         19,50
                     3600 kg ou mais     8         52,50

Usando esta tabela, leia o ano e o peso do modelo de um automóvel e calcule e imprima a classe e o
valor da taxa de registro para o carro.
*/

int main()
{
    int anoAutomovel;
    double pesoAutomovel;

    printf("Insira o ano e o peso do automovel, respectivamente: ");
    scanf("%d %lf", &anoAutomovel, &pesoAutomovel);

    if (anoAutomovel <= 1970)
    {
        if (pesoAutomovel < 1200)
        {
            printf("Automovel classe 1, valor a pagar: R$ 16.50\n");
        }
        else if (pesoAutomovel <= 1700)
        {
            printf("Automovel classe 2, valor a pagar: R$ 25.50\n");
        }
        else
        {
            printf("Automovel classe 3, valor a pagar: R$ 46.50\n");
        }
    }
    else if (anoAutomovel <= 1979)
    {
        if (pesoAutomovel < 1200)
        {
            printf("Automovel classe 4, valor a pagar: R$ 27.00\n");
        }
        else if (pesoAutomovel <= 1700)
        {
            printf("Automovel classe 5, valor a pagar: R$ 30.50\n");
        }
        else
        {
            printf("Automovel classe 6, valor a pagar: R$ 52.50\n");
        }
    }
    else
    {
        if (pesoAutomovel < 3600)
        {
            printf("Automovel classe 7, valor a pagar: R$ 19.50\n");
        }
        else
        {
            printf("Automovel classe 8, valor a pagar: R$ 52.50\n");
        }
        
    }
    
    return 0;
}