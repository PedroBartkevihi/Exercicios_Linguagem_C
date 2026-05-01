#include <stdio.h>

/*Leia um número inteiro n e informe se ele é divisível por 3 ou por 7.*/

int main()
{
    int n;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (n % 3 == 0 || n % 7 == 0)
    {
        printf("%d e divisivel por 3 ou por 7\n", n);
    }
    else
    {
        printf("%d nao e divisivel por 3 ou por 7\n", n);
    }
    
    return 0;
}