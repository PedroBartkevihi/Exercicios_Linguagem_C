#include <stdio.h>

int main()
{
    int n, x = 0;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for(int i = n; i >= 1; i--)
    
      {
        if(n % i == 0)
        
        {
        printf("%d \n", i);
        x++;
            
        }
        
      }
      
      printf("Quantidade de Divisores: %d \n", x);
      
      if(x > 2)
      {
          printf("O numero nao e primo");
      }
      else
      {
          printf("O numero e primo");
      }
    

    return 0;
}

