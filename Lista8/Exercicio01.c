#include <stdio.h>
#include <stdbool.h>

/*Crie a struct Ponto para representar um ponto no plano cartesiano. Em seguida, crie a struct
Circulo para representar um círculo (formado por um ponto central e um raio). Por fim, leia
dois círculos e informe se esses círculos colidem. A colisão deverá ser verificada por uma
função booleana colide.*/

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto centro;
    float raio;
} Circulo;

Circulo le_circulo() {

    Circulo c;

    printf("Centro (x y): ");
    scanf("%f %f", &c.centro.x, &c.centro.y);

    printf("Raio: ");
    scanf("%f", &c.raio);

    return c;
}

bool colide(Circulo c1, Circulo c2) {

    float dx, dy, soma_raios;

    dx = c2.centro.x - c1.centro.x;
    dy = c2.centro.y - c1.centro.y;
    soma_raios = c1.raio + c2.raio;

    return dx * dx + dy * dy <= soma_raios * soma_raios;
}

int main() {

    Circulo c1, c2;

    printf("Circulo 1\n");
    c1 = le_circulo();

    printf("Circulo 2\n");
    c2 = le_circulo();

    if (c1.raio < 0 || c2.raio < 0) {
        printf("O raio nao pode ser negativo.\n");
    } else if (colide(c1, c2)) {
        printf("Os circulos colidem.\n");
    } else {
        printf("Os circulos nao colidem.\n");
    }

    return 0;
}