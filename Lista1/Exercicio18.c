#include <stdio.h>

/*Leia um número n com 8 dígitos, separe o dia, mês e ano do número lido, mostrando-os na tela.
Exemplo: 25031949 imprime 25/03/1949*/

int main()
{
    int n, ano, mes, dia;
    
    printf("Insira um numero inteiro de 8 digitos: ");
    scanf("%d", &n);

    ano = n % 10000;
    mes = (n / 10000) % 100;
    dia = n / 1000000;

    printf("Data extraida: %02d/%02d/%04d\n", dia, mes, ano);

    return 0;
}