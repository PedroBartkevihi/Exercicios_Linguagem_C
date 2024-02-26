#include <stdio.h>

int main()
{
    int n, x, maior = -1000000, menor = 1000000;
    
    printf("Digite o numero de rodadas que deseja: \n");
    scanf("%d", &n);
    
    for(int i = 1 ; i <= n ; i++)
    {
        printf("Digite um Valor: ");
        scanf("%d", &x);
        
        if(x > maior)
        {
            maior = x;
        }
        
        if(x < menor)
        {
            menor = x;
        }
        
    }
    
    printf("O maior numero e: %d \n", maior);
    printf("O menor numero e: %d", menor);

    return 0;
}

