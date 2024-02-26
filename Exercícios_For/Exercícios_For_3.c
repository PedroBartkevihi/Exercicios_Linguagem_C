#include <stdio.h>

int main()
{
    int x, y, z;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &x);

        if(x > 10 && x < 20)
        {
            y++;
        }
        else
        {
            z++;
        }

    }

    printf("Quantidade de numeros no intervalo: %d\n", y);
    printf("Quantidade de numeros fora do intervalo: %d", z);
    
    return 0;
}
