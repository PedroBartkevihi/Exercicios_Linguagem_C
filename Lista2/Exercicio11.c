#include <stdio.h>

/*O número 3025 possui a seguinte característica: 30 + 25 = 55 => 55*55 = 3025.
Fazer um programa para ler um número n inteiro de 4 dígitos e imprimir se o número tem ou não essa
característica. Se n não tiver 4 dígitos, imprima uma mensagem de erro.*/

int main()
{
    int n, primeiraDezena, segundaDezena, soma, quadrado;

    printf("Insira um numero inteiro de quatro digitos: ");
    scanf("%d", &n);

    if (n < 1000 || n > 9999)
    {
        printf("Erro, o numero digitado nao possui quatro digitos\n");
    }
    else
    {
        primeiraDezena = n / 100;
        segundaDezena = n % 100;

        soma = primeiraDezena + segundaDezena;
        quadrado = soma * soma;

        if (quadrado == n)
        {
            printf("Possui a caracteristica\n");
        }
        else
        {
            printf("Nao possui a caracteristica\n");
        }
    }

    return 0;
}