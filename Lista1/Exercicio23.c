#include <stdio.h>

/*Leia dois valores de hora, minuto e segundo (h1, m1, s1, h2, m2, s2). Em seguida, imprima o
intervalo entre esses dois horários em hora, minuto e segundo. Assuma que h2/m2/s2 é maior ou
igual a h1/m1/s1. Exemplo: se h1 = 9, m1 = 45, s1 = 38, h2 = 15, m2 = 27 e s2 = 12 então a
diferença é 05:41:34.*/

int main()
{
    int h1, m1, s1, h2, m2, s2, h3, m3, s3;
    int horarioEmSegundos1, horarioEmSegundos2, intervalo;

    printf("Insira um valor de hora, minuto e segundo: ");
    scanf("%d %d %d", &h1, &m1, &s1);

    printf("Insira outro valor de hora, minuto e segundo maior que o primeiro: ");
    scanf("%d %d %d", &h2, &m2, &s2);

    horarioEmSegundos1 = (h1 * 3600) + (m1 * 60) + s1;
    horarioEmSegundos2 = (h2 * 3600) + (m2 * 60) + s2;

    intervalo = horarioEmSegundos2 - horarioEmSegundos1;

    h3 = intervalo / 3600;
    m3 = (intervalo % 3600) / 60;
    s3 = intervalo % 60;

    printf("Diferenca entre os horarios: %02d:%02d:%02d\n", h3, m3, s3);

    return 0;
}