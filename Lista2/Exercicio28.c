#include <stdio.h>
#include <stdbool.h>

/*Os dias do ano podem ser definidos de forma contínua. Por exemplo: 01/01 é o 1o dia do ano, 05/01
é o 5o dia do ano e 03/02 é o 34o dia do ano. Leia tres valores d, m e a e informe o dia do ano
correspondente à data d/m/a. Assuma que d/m/a é uma data válida.*/

int main()
{
    int dia, mes, ano, diasAntesDoMes, diaDoAno;
    bool bissexto = false;

    printf("Insira tres valores(dia, mes e ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
    {
        bissexto = true;
    }

    if (mes == 1)
    {
        diasAntesDoMes = 0;
    }
    else if (mes == 2)
    {
        diasAntesDoMes = 31;
    }
    else if (mes == 3)
    {
        diasAntesDoMes = 59;
    }
    else if (mes == 4)
    {
        diasAntesDoMes = 90;
    }
    else if (mes == 5)
    {
        diasAntesDoMes = 120;
    }
    else if (mes == 6)
    {
        diasAntesDoMes = 151;
    }
    else if (mes == 7)
    {
        diasAntesDoMes = 181;
    }
    else if (mes == 8)
    {
        diasAntesDoMes = 212;
    }
    else if (mes == 9)
    {
        diasAntesDoMes = 243;
    }
    else if (mes == 10)
    {
        diasAntesDoMes = 273;
    }
    else if (mes == 11)
    {
        diasAntesDoMes = 304;
    }
    else
    {
        diasAntesDoMes = 334;
    }
    
    diaDoAno = diasAntesDoMes + dia;

    if (bissexto && mes > 2)
    {
        diaDoAno = diaDoAno + 1;
    }

    printf("Dia do ano = %d\n", diaDoAno);

    return 0;
}