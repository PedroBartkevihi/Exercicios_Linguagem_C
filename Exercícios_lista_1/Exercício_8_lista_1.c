#include <stdio.h>

//Entrada:Float quantidade de km
//Saída: Float conversao do km para milha

int main()
{
    float x, y;

    printf("Digite a quantidade de km: \n");
    scanf("%f", &x);

    y = x * 0.621371;

    printf("O valor de %.0fkm em milhas e %f",x,y);

    return 0;
}