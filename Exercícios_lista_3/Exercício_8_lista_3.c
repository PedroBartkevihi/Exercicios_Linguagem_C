#include <stdio.h>

//Entrada:Int n e m
//Saída:Int somatório

int main()
{
   int m, n, somatorio = 0;

   printf("Digite um valor: \n");
   scanf("%d", &m);

   printf("Digite um valor menor do que o anterior: ");
   scanf("%d", &n);

   if (m < n || m == 0 || n == 0)
   {
    printf("Erro");
    return 1;
   }

   for (int i = n; i <= m; i++)
   {
     somatorio = somatorio + i;
   }
   
   printf("O somatorio e: %d", somatorio);

   return 0;

}