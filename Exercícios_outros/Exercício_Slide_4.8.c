#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;

    // Solicita os coeficientes da equação
    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    
    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o valor de c: ");
    scanf("%lf", &c);

    double delta = b * b - 4 * a * c;

    if (a == 0) 
    {
        printf("Erro, a menor que zero");
    }
    else if (delta < 0)
    {
        printf("Erro, delta menor que zero");
    }
    
    return 0;
}
