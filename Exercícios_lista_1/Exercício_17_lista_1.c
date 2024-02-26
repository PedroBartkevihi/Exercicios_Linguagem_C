#include <stdio.h>

//Entrada:Int valor de x e y
//Saída:Int o maior multiplo de x menor ou igual a y

int main()
{

    int x, y, resultado;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);

    resultado = (y / x) * x;

    printf("O maior multiplo de %d menor ou igual %d e %d",x,y,resultado);

    return 0;
}