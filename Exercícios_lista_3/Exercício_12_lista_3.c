#include <stdio.h>

//Entrada:Int n, m, k
//Saída:Int termos da PG

int main()
{
    int n, k, r;

    printf("Digite o primeiro termo da PA: ");
    scanf("%d", &n);

    printf("Digite o numero de termos a serem impressos: ");
    scanf("%d", &k);

    printf("Digite a razao da PA: ");
    scanf("%d", &r);

    for (int i = 0; i < k; i++)
    {
        n = n * r;
        printf("%d \n", n);
    }

    return 0;
    
}