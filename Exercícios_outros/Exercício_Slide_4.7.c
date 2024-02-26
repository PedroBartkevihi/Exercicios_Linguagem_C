#include <stdio.h>

int main()
{
    int n, superior, inferior;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("Digite outro valor: ");
    scanf("%d", &superior);

    printf("Digite mais um valor: ");
    scanf("%d", &inferior);

    if (n < superior && n > inferior)
    {
        printf("%d esta dentro do intervalo", n);
    }
    else if (n < inferior)
    {
        printf("%d esta antes do intervalo", n);
    }
    else
    {
        printf("%d esta depois do intervalo", n);
    }

    return 0;
    
}