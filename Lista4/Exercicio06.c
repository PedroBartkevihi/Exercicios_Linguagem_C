#include <stdio.h>

/*Leia um vetor v com 10 números reais. Em seguida, percorra o vetor v e imprima o valor e a
metade do valor (se ele for menor que 10) ou o dobro do valor (se ele for maior ou igual a 10).*/

int main()
{
    double v[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Insira o %d numero real: ", i + 1);
        scanf("%lf", &v[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (v[i] < 10)
        {
            printf("Valor: %.2lf\nMetade do valor: %.2lf\n", v[i], v[i] / 2);
        }
        else
        {
            printf("Valor: %.2lf\nDobro do valor: %.2lf\n", v[i], v[i] * 2);
        }
    }
    
    return 0;
}