#include <stdio.h>

//Entrada:Int n e m
//Saída:Int numeros impares entre m e n

int main()
{
   int m, n, x;

   printf("Digite um valor: \n");
   scanf("%d", &m);

   printf("Digite um valor menor do que o anterior: ");
   scanf("%d", &n);

   if (m < n)
   {
     x = n;
     n = m;
     m = x;
   }

   for (int i = n; i <= m; i++)
   {
     if (i % 2 != 0)
     {
        printf("%d\n", i);
     }
     
   }

   return 0;

}