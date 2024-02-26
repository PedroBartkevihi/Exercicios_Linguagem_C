#include <stdio.h>

//Entrada:Nenhuma
//Saída:Int 30 primeiros números impares excluindo o 0

int main()
{
    for (int i = 1; i < 61; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
        
    }

    return 0;
}