#include <stdio.h>

//Entrada:Float o valor de a e de b
//Saída:Float o valor de x

int main()
{
    float a, b, x;

    printf("Digite o valor de a, sendo ele diferente de 0: \n");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    x = -b / a;

    printf("O valor de x e: %.2f", x);

    return 0;
}