#include <stdio.h>

/*Leia 3 variáveis inteiras a, b e c e faça um "rodízio" entre elas. Ao final, a variável b deverá ter o
valor da variável a, a variável c deverá ter o valor da variável b e a variável a deverá ter o valor da
variável c.*/

int main()
{
    int a, b, c, auxiliar;

    printf("Insira tres numeros aleatorios: ");
    scanf("%d %d %d", &a, &b, &c);

    auxiliar = c;
    c = b;
    b = a;
    a = auxiliar;

    printf("Depois do rodizio:\n");
    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);
    printf("Valor de C: %d\n", c);

    return 0;
}