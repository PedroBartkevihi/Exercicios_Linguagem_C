#include <stdio.h>

/*Leia dois números n e k e informe se n é divisível por k.*/

int main()
{
    int n, k;

    printf("Insira dois numeros inteiros: ");
    scanf("%d %d", &n, &k);

    if (k == 0)
    {
        printf("Nao e possivel verificar divisibilidade por zero.\n");
    }
    else if (n % k == 0)
    {
        printf("%d e divisivel por %d\n", n, k);
    }
    else
    {
        printf("%d nao e divisivel por %d\n", n, k);
    }
    
    return 0;
}