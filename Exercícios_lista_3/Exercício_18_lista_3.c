#include <stdio.h>

//Entrada:Nenhuma
//Saída:Int números que possuem a característica pedida

int main()
{
    for (int i = 1000; i <= 9999; i++)
    {
        int dois_primeiros_digitos = i / 100;
        int dois_ultimos_digitos = i % 100;
        int soma = dois_primeiros_digitos + dois_ultimos_digitos;
        int quadrado = soma * soma;

        if (quadrado == i)
        {
            printf("%d\n", i);
        }
        
    }

    return 0;
    
}