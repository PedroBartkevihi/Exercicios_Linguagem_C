#include <stdio.h>

/*Um técnico está selecionando atletas que tenham altura maior ou igual a 1,80m e idade menor que
18 anos. Faça um programa para ler a idade e a altura de um atleta e exibir uma das mensagens:
“selecionado” ou “não selecionado”.*/

int main()
{
    double altura;
    int idade;

    printf("Insira sua altura em metros e sua idade, respectivamente: ");
    scanf("%lf %d", &altura, &idade);

    if (altura >= 1.80 && idade < 18)
    {
        printf("Selecionado\n");
    }
    else
    {
        printf("Nao selecionado\n");
    }
    
    return 0;
}