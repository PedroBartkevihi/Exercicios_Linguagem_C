#include <stdio.h>

/*O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025.
Faça um programa para ler um número n inteiro de 4 dígitos e imprimir a primeira parte do número,
a segunda parte e o valor da multiplicação da soma das partes.*/

int main()
{
    int n, dezenaInicial, dezenaFinal, somaPartes, multiplicacao;
    
    printf("Insira um numero inteiro de 4 digitos: ");
    scanf("%d", &n);

    dezenaFinal = n % 100;
    dezenaInicial = n / 100;

    somaPartes = dezenaInicial + dezenaFinal;
    multiplicacao = somaPartes * somaPartes;

    printf("Primeira parte do numero: %d\n", dezenaInicial);
    printf("Segunda parte do numero: %d\n", dezenaFinal);
    printf("Valor da multiplicacao da soma das partes: %d\n", multiplicacao);

    return 0;
}