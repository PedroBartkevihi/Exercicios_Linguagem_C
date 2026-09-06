#include <stdio.h>
#include <math.h>

/*Implemente a função double area(double vx[], double vy[], int n) que recebe n vértices de um
polígono e calcula a área desse polígono usando a fórmula:
area = sum_{i=1}^{n} (x_i * y_{i+1} - x_i * y_{i-1}) / 2
onde os índices são cíclicos: depois do último vértice volta ao primeiro, e antes do primeiro
volta ao último.*/

double area(double vx[], double vy[], int n) {

    double soma;
    int i, prox, ant;

    soma = 0.0;

    for (i = 0; i < n; i++) {
        prox = (i + 1) % n;
        ant = (i - 1 + n) % n;
        soma += vx[i] * (vy[prox] - vy[ant]);
    }

    return fabs(soma) / 2.0;
}

int main() {

    double vx[100], vy[100], resultado;
    int n, i;

    printf("Digite o numero de vertices: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Digite x e y do vertice %d: ", i + 1);
        scanf("%lf %lf", &vx[i], &vy[i]);
    }

    resultado = area(vx, vy, n);

    printf("Area do poligono: %.4f\n", resultado);

    return 0;
}