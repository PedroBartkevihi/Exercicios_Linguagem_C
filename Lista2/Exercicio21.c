#include <stdio.h>

/*Leia uma temperatura e a escala (C-Celsius ou F- Fahrenheit) e converta-a para a outra escala. Ou
seja, se o usuário informar a temperatura em Celsius esta deverá convertida para Fahrenheit e vice-
versa.*/

int main()
{
    double temperatura, fahrenheit, celsius;
    int opcao;

    printf("Insira a temperatura: ");
    scanf("%lf", &temperatura);

    printf("\nTabela de conversoes:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        fahrenheit = (temperatura * 1.80) + 32;
        printf("Temperatura em Fahrenheit: %.2lf\n", fahrenheit);
    }
    else if (opcao == 2)
    {
        celsius = (temperatura - 32) / 1.80;
        printf("Temperatura em Celsius: %.2lf\n", celsius);
    }
    else
    {
        printf("Opcao invalida\n");
        return 1;
    }

    return 0;
}