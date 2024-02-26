#include <stdio.h>

//Entrada: Int o primeiro termo da pa, a quantidade de termos e a razão
//Saída: o nesimo termo da pa

int main()

 {
    int a1, n;
    float r;

    printf("Digite o primeiro termo (a1): ");
    scanf("%d", &a1);
    
    printf("Digite a quantidade de termos (n): ");
    scanf("%d", &n);

    printf("Digite a razao (r): ");
    scanf("%f", &r);

    int an = a1 + (n - 1) * r;

    printf("O %d termo da PA e: %d\n", n, an);

    return 0;
}
