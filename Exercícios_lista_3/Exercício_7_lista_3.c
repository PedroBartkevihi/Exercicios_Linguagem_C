#include <stdio.h>

//Entrada:Nenhuma
//Saída:Float conversão de polegadas para centímetros

int main ()
{
    float x;

    for (int i = 1; i < 21; i++)
    {
        x = i * 2.54;
        printf("%.2f centimetros\n", x);
    }

    return 0;
    
}