#include <stdio.h>

//Entrada:Int n
//Saída:Double valor de H

int main()
{
    int n;
    double h = 1.0;

    printf("Digite o valor de n sendo ele par: ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("Erro");
    }
    else if (n % 2 != 0)
    {
        printf("Erro");
    }
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            h = h - 1 / (double)i;
        }

        printf("O valor de h e: %lf", h);
        
    }

}