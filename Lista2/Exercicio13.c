#include <stdio.h>
#include <math.h>

/*Leia as coordenadas dos pontos P1, P2 e P3. Em seguida, informe se esses pontos formam um
triângulo ou não. Caso positivo, imprima o perímetro P e a área A do triângulo onde A pode ser
calculado como:

A = sqrt(p * (p - a) * (p - b) * (p - c))
p = (a + b + c) / 2

onde a, b e c são os comprimentos dos lados do triângulo.*/

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, perimetro, semiPerimetro, area;

    printf("Insira as coordenadas do ponto P1(x1 e y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Agora, insira as coordenadas do ponto P2(x2 e y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Agora, insira as coordenadas do ponto P3(x3 e y3): ");
    scanf("%lf %lf", &x3, &y3);

    a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if (a >= b + c || b >= a + c || c >= a + b)
    {
        printf("Os pontos informados nao formam um triangulo\n");
    }
    else
    {
        perimetro = a + b + c;
        semiPerimetro = perimetro / 2;

        area = sqrt(semiPerimetro * (semiPerimetro - a) * (semiPerimetro - b) * (semiPerimetro - c));

        printf("Perimetro do triangulo: %.2lf\n", perimetro);
        printf("Area do triangulo: %.2lf\n", area);
    }
    
    return 0;
}