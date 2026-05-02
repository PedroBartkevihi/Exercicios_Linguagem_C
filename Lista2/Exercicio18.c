#include <stdio.h>

/*Leia as notas de duas provas e de um trabalho (todos os valores entre 0 e 10) e a quantidade de
faltas, definindo e imprimindo se ele foi aprovado, reprovado, reprovado por falta ou se fará prova
final. O aluno será reprovado se faltou a mais de 15 aulas. Aluno será aprovado se não for
reprovado por falta e sua média for maior ou igual a 7,0. Caso tenha média menor que 4,0, então
estará reprovado. Se não for nenhuma dessas situações, então deverá fazer prova final. O cálculo da
média deve ser feito com peso 3 para a 1a prova, peso 5 para a 2a prova e peso 2 para o trabalho.*/

int main()
{
    double prova1, prova2, trabalho, media;
    int qtdFaltas;

    printf("Insira as notas das provas: ");
    scanf("%lf %lf", &prova1, &prova2);

    printf("Insira a nota do trabalho: ");
    scanf("%lf", &trabalho);

    if ((prova1 < 0 || prova1 > 10) || (prova2 < 0 || prova2 > 10) || (trabalho < 0 || trabalho > 10))
    {
        printf("Nota invalida\n");
        return 1;
    }

    printf("Insira a quantidade de faltas: ");
    scanf("%d", &qtdFaltas);

    if (qtdFaltas < 0)
    {
        printf("Quantidade de faltas invalida");
        return 1;
    }
    
    media = ((prova1 * 3) + (prova2 * 5) + (trabalho * 2)) / (3 + 5 + 2);

    printf("Media: %.2lf\n", media);

    if (qtdFaltas > 15)
    {
        printf("Aluno reprovado por falta\n");
    }
    else
    {
        if (media >= 7.0)
        {
            printf("Aprovado\n");
        }
        else if (media < 4.0)
        {
            printf("Reprovado\n");
        }
        else
        {
            printf("Aluno devera fazer prova final\n");
        }
    }
    
    return 0;
}