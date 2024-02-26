#include <stdio.h>

//Entrada:Nenhuma
//Saída:Int 20 primeiros números multiplos de 5 excluindo o 0

int main()
{
    for (int i = 1; i < 101; i++)
    {
        if (i % 5 == 0)
        {
            printf("%d \n", i);
        }
        
    }

    return 0;
}