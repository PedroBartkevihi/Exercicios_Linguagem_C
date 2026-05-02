#include <stdio.h>
#include <math.h>

/*Leia as coordenadas dos pontos P1 (x1, y1) e P2 (x2, y2) e calcule a distância entre P1 e P2.

d = √(x1 − x2)² + (y1 − y2)²*/

int main()
{
    double x1, y1, x2, y2, distancia;

    printf("Insira as coordenadas do ponto P1(x1 e y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Agora, insira as coordenadas do ponto P2(x2 e y2): ");
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("Distancia entre os pontos P1 e P2: %.2lf\n", distancia);

    return 0;
}