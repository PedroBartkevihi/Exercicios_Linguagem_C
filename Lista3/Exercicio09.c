#include <stdio.h>

/*Imprima uma tabela de conversão de polegadas para centímetros. Deseja-se que a tabela conste
valores desde 1 polegada até 20 polegadas inteiras.*/

int main()
{

    for (int i = 1; i <= 20; i++)
    {
        printf("%d polegadas = %.2f centimetros\n", i, (i * 2.54));
    }

    return 0;
}