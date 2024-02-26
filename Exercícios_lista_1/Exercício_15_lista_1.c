#include <stdio.h>

//Entrada:Int o valor das 3 variaveis
//Saída:Int o valor das 3 variaveis após o rodízio

int main()
{
    int a, b, c, x;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);
    
    x = a;
    a = b;
    b = c;
    c = x;

    printf("O valor de a e %d, o valor de b e %d e o valor de c e %d",a,b,c);

    return 0;

}