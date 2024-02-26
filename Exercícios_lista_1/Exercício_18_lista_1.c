#include <stdio.h>

//Entrada:Int Numero n com 8 digitos
//Saída:Int  Numero separado como se fosse uma data

int main()
{
    int x, dia, mes, ano;

    printf("Digite um valor de 8 digitos: ");
    scanf("%d", &x);

    dia = x / 1000000;
    mes = (x / 10000) % 100;
    ano = x % 10000;

    printf("%d/%d/%d", dia, mes, ano);

    return 0;

}