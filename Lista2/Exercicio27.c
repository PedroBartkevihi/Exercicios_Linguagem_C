#include <stdio.h>
#include <stdbool.h>

/*Leia três valores d, m e a e informe se d, m e a formam uma data válida.*/

int main()
{
    int dia, mes, ano, maxDias;
    bool bissexto = false;

    printf("Insira tres valores(dia, mes e ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano <= 0 || mes <= 0 || mes > 12 || dia <= 0)
    {
        printf("Data invalida\n");
        return 1;
    }

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
    {
        bissexto = true;
    }

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
    {
        maxDias = 31;
    }
    else if (mes == 2)
    {
        if (bissexto)
        {
            maxDias = 29;
        }
        else
        {
            maxDias = 28;
        }
    }
    else
    {
        maxDias = 30;
    }

    if (dia > maxDias)
    {
        printf("Data invalida\n");
    }
    else
    {
        printf("Data valida\n");
    }
    
    return 0;
}