#include <stdio.h>

/*Leia a e b e calcule a equação do 1o grau ax + b = 0, imprimindo o valor de x. Considere a
diferente de zero.*/

int main()
{
    float a, b, x;

    printf("Insira os valores de a e b, respectivamente: ");
    scanf("%f %f", &a, &b);

    x = -b / a;

    printf("Valor de X: %.2f\n", x);

    return 0;
}