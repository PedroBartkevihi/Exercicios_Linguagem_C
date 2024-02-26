#include <stdio.h>

int main() {
    double x, y, z;

    printf("Digite o valor do lado x: ");
    scanf("%lf", &x);

    printf("Digite o valor do lado y: ");
    scanf("%lf", &y);

    printf("Digite o valor do lado z: ");
    scanf("%lf", &z);

    if ((x + y > z) && (x + z > y) && (y + z > x)) {
        if (x == y && y == z) {
            
            printf("Os lados formam um triangulo equilatero.\n");
        } else if (x == y || x == z || y == z) {
            
            printf("Os lados formam um triangulo isosceles.\n");
        } else {
            
            printf("Os lados formam um triangulo escaleno.\n");
        }
    } else {
        
        printf("Os valores nao formam um triangulo.\n");
    }

    return 0;
}
