#include <stdio.h>

//Entrada:Int n
//Saída:Int valor de H

int main()
{
    int n, h = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro");
        return 1;
    }
    else
    {

      for (int i = 1; i <= n; i++)
      {
        h = h + n * i;
      }

    } 
    printf("O valor de h e: %d", h);
    
    return 0;

}