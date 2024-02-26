#include <stdio.h>
#include <math.h>

//Entrada:Int n e Double A
//Saída:Double x

int main() {
    int n;
    double A, x;

    printf("Digite o valor de A: ");
    scanf("%lf", &A);

    printf("Digite o numero de iteracoes: ");
    scanf("%d", &n);

    if (A <= 0) {
        printf("Erro: A deve ser maior que 0.\n");
    } else if (n < 0) {
        printf("Erro: n deve ser nao negativo.\n");
    } else {
        x = 1.0;

        for (int i = 0; i < n; i++) {
            x = 0.5 * (x + A / x); 
        }

        printf("A raiz quadrada de %.2lf com %d iteracoes e aproximadamente %.6lf\n", A, n, x);
    }

    return 0;
}
