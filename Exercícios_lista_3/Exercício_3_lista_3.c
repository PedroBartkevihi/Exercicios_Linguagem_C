#include <stdio.h>

//Entrada:Nenhuma
//Saída:Int 50 primeiros números pares excluindo o 0

int main()
{
    for (int i = 1; i < 101; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d \n", i);
        }
        
    }

    return 0;
}