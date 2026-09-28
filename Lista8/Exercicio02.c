#include <stdio.h>
#include <math.h>

/*Crie uma struct Ponto para representar um ponto no plano cartesiano. Em seguida, crie a
struct Retangulo para representar um retângulo (formado por um ponto superior esquerdo e
outro ponto inferior direito). Por fim, leia os dados de um retângulo e imprima sua área e
perímetro. Essas informações deverão ser calculadas pelas funções area e perimetro,
respectivamente.*/

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto sup_esq;
    Ponto inf_dir;
} Retangulo;

Ponto le_ponto() {

    Ponto p;

    scanf("%f %f", &p.x, &p.y);

    return p;
}

float largura(Retangulo r) {

    return fabs(r.inf_dir.x - r.sup_esq.x);
}

float altura(Retangulo r) {

    return fabs(r.sup_esq.y - r.inf_dir.y);
}

float area(Retangulo r) {

    return largura(r) * altura(r);
}

float perimetro(Retangulo r) {

    return 2 * (largura(r) + altura(r));
}

int main() {

    Retangulo r;

    printf("Ponto superior esquerdo (x y): ");
    r.sup_esq = le_ponto();

    printf("Ponto inferior direito (x y): ");
    r.inf_dir = le_ponto();

    printf("Area: %.2f\n", area(r));
    printf("Perimetro: %.2f\n", perimetro(r));

    return 0;
}