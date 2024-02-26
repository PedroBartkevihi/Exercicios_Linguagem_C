#include <stdio.h>

int main()
{
    int x, y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para y: ");
    scanf("%d", &y);

    if (x % y == 0)
    {
        printf("%d e divisivel por %d", x, y);
    }
    else if (y % x == 0)
    {
        printf("%d e divisivel por %d", y, x);
    }
    else
    {
        printf("Nem %d divide %d nem %d divide %d", x,y,y,x);
    }

    return 0;
    
}