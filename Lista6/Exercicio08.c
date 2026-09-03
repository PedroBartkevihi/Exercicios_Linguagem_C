#include <stdio.h>
#include <stdbool.h>
#include <math.h>

/* Implemente a função bool colide_esfera(float x1, float y1, float r1, float x2, float y2,
float r2) que retorna true se a esfera 1 de centro (x1, y1) e raio r1 está em posição de
colisão com a esfera 2 de centro (x2, y2) e raio r2, ou false, caso contrário.*/

bool colide_esfera(float x1, float y1, float r1, float x2, float y2, float r2) {

    float dx, dy, distancia, soma_raios;

    dx = x2 - x1;
    dy = y2 - y1;
    distancia = sqrt(dx * dx + dy * dy);

    soma_raios = r1 + r2;

    return distancia <= soma_raios;
}

int main() {

    float x1, y1, r1, x2, y2, r2;

    printf("Digite x1, y1 e r1 da esfera 1: ");
    scanf("%f %f %f", &x1, &y1, &r1);

    printf("Digite x2, y2 e r2 da esfera 2: ");
    scanf("%f %f %f", &x2, &y2, &r2);

    if (colide_esfera(x1, y1, r1, x2, y2, r2)) {
        printf("As esferas colidem.\n");
    } else {
        printf("As esferas nao colidem.\n");
    }

    return 0;
}