#include <stdio.h>
#include <stdbool.h>

/*Em 1582 o papa Gregório III instituiu mudanças no calendário e criou o calendário que usamos
atualmente. Nessa mudança, o dia 01/01/1600 foi definido como um sábado e, até hoje, usamos
esse referencial para calcular o dia da semana de uma data. Assim, para calcular o dia da semana de
uma data qualquer, basta calcular quantos dias se passaram desde 01/01/1600 até essa data e dividir
esse valor por 7. Se o resto é 0 então o dia da semana é sábado, se o resto é 1 o dia da semana é
domingo, e assim por diante. Leia três valores d, m e a e calcule o dia da semana correspondente a
essa data. Assuma que d, m e a formam uma data válida.*/

int main() 
{
    int dia, mes, ano, diasAntesDoMes, diaDoAno, somaDias = 0, diaSemana;
    bool bissexto = false;

    printf("Insira tres valores(dia, mes e ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    for (int i = 1600; i < ano; i++)
    {
        if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
        {
            somaDias+= 366;
        }
        else
        {
            somaDias+= 365;
        }
    }

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

    somaDias = somaDias + diaDoAno;
    diaSemana = (somaDias - 1) % 7;

    if (diaSemana == 0)
    {
        printf("Sabado\n");
    }
    else if (diaSemana == 1)
    {
        printf("Domingo\n");
    }
    else if (diaSemana == 2)
    {
        printf("Segunda\n");
    }
    else if (diaSemana == 3)
    {
        printf("Terca\n");
    }
    else if (diaSemana == 4)
    {
        printf("Quarta\n");
    }
    else if (diaSemana == 5)
    {
        printf("Quinta\n");
    }
    else
    {
        printf("Sexta\n");
    }
    
    return 0;
}