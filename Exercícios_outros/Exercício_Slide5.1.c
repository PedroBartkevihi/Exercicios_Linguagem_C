#include <stdio.h>

int main()
{
    int n, m, k, soma = 0, quantidade = 0;
    float media;
    
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    
    printf("Digite o valor de m: ");
    scanf("%d", &m);
    
    printf("Digite o valor de k: ");
    scanf("%d", &k);
    
    for(int i = n; i < m; i++)
    {
        if(i % k == 0)
        {
            
        printf("%d \n", i);
        
        soma = soma + i;
        quantidade++;
        
        }
        
    }
    
       media = (float)soma / quantidade;
       
       printf("O somatorio e: %d \n", soma);
       printf("A media desses numeros e: %f", media);

    return 0;
}

