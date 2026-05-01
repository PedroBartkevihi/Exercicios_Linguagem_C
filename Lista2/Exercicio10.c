#include <stdio.h>
#include <math.h>

/*Leia um número n e teste: se n for negativo, eleve n ao quadrado; caso contrário, calcule a raiz
quadrada de n. Ao final, imprima o resultado.*/

int main()
{
    int n;

    printf("Insira um numero inteiro, positivo ou negativo: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("%d ao quadrado: %.2lf\n", n, pow(n,2));
    }
    else
    {
        printf("Raiz de %d: %.2lf\n", n, sqrt(n));
    }

    return 0;
}