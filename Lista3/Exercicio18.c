#include <stdio.h>

/*Entre com a idade de várias pessoas até o usuário digitar zero e imprima:
• Total de pessoas com menos de 21 anos.
• Total de pessoas com mais de 50 anos.*/

int main()
{
    int idade, contadorJovens = 0, contadorIdosos = 0;

    do
    {
        printf("Insira a idade do individuo (digite zero para sair): ");
        scanf("%d", &idade);

        if (idade < 0)
        {
            printf("Erro, a idade nao pode ser negativa\n");
        }
        else if (idade > 0 && idade < 21)
        {
            contadorJovens++;
        }
        else if (idade > 50)
        {
            contadorIdosos++;
        }
        
    } while (idade != 0);

    printf("Total de pessoas com menos de 21 anos: %d\n", contadorJovens);
    printf("Total de pessoas com mais de 50 anos: %d\n", contadorIdosos);

    return 0;
}