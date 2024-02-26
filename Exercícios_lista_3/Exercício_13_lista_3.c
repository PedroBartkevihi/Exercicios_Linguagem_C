#include <stdio.h>

//Entrada:Int n
//Saída:double valor de H

int main()
{
    int n;
    double h = 1.0;

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
        h += 1.0 / i;
      }

    } 
    printf("O valor de h e: %lf", h);
    
    return 0;

}