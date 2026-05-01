#include <stdio.h>

/*Leia um número inteiro n e informe se ele é ou não divisível por 6.*/

int main()
{
    int n;

    printf("Insira um numero inteiro: ");
    scanf("%d", &n);

    if (n % 6 == 0)
    {
        printf("%d e divisivel por 6\n", n);
    }
    else
    {
        printf("%d nao e divisivel por 6\n", n);
    }
    
    return 0;
}
