#include <stdio.h>

/*Uma escola tem 5 turmas e cada turma tem n alunos. Faça um programa que leia as notas dos
alunos de uma turma e imprima a média da turma e o total de alunos da turma com nota superior ou
igual a 7,0. Ao final, imprima a média geral da escola. Notas inválidas não devem ser consideradas.*/

int main()
{
    int n;
    int contadorNotasValidas, contadorAprovados, contadorNotasValidasGeral = 0;
    double somaNotasGeral = 0.0, somaNotasTurma, nota, mediaTurma, mediaGeral;

    printf("Insira a quantidade de alunos por turma: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Erro, quantidade de alunos invalida\n");
        return 1;
    }

    for (int i = 1; i <= 5; i++)
    {
        somaNotasTurma = 0.0;
        contadorNotasValidas = 0;
        contadorAprovados = 0;

        printf("Turma %d\n", i);

        for (int j = 1; j <= n; j++)
        {
            printf("Insira a nota do aluno %d: ", j);
            scanf("%lf", &nota);

            if (nota >= 0.0 && nota <= 10.0)
            {
                somaNotasTurma += nota;
                somaNotasGeral += nota;

                contadorNotasValidas++;
                contadorNotasValidasGeral++;

                if (nota >= 7.0)
                {
                    contadorAprovados++;
                }
            }
        }

        if (contadorNotasValidas > 0)
        {
            mediaTurma = somaNotasTurma / contadorNotasValidas;
            printf("Media da turma %d: %.2f\n", i, mediaTurma);
        }
        else
        {
            printf("Nenhuma nota valida foi informada para a turma %d.\n", i);
        }

        printf("Quantidade de alunos com nota maior ou igual a 7.0: %d\n", contadorAprovados);
    }

    if (contadorNotasValidasGeral > 0)
    {
        mediaGeral = somaNotasGeral / contadorNotasValidasGeral;
        printf("Media geral da escola: %.2f\n", mediaGeral);
    }
    else
    {
        printf("Nenhuma nota valida foi informada na escola.\n");
    }

    return 0;
}