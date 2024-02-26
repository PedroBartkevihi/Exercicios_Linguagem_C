#include <stdio.h>

//Entrada:Int n
//Saída:Int quantidade de digitos de n

int main()
{
    int n, y = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (; n != 0; n /= 10)
    {
        y++;
    }

    printf("A quantidade de digitos e: %d", y);

    return 0;
   
}