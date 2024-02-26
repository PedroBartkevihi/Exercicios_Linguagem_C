#include <stdio.h>

int main()
{
    int x, y, z;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite a idade do eleitor: ");
        scanf("%d", &x);

        if(x >= 18 && x < 70)
        {
            y++;
        }
        else
        {
            z++;
        }

    }

    printf("Quantidade de eleitores obrigatorios: %d\n", y);
    printf("Quantidade de eleitores nao obrigatorios: %d", z);
    
    return 0;
}
