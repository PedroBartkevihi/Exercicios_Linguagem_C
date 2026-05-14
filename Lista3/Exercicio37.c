#include <stdio.h>

/*Exiba o menu abaixo até o usuário entrar com a opção 4. Para cada item selecionado,
leia um número inteiro n e execute a opção escolhida pelo usuário.

MENU DE OPÇÕES:
1 - Verificar se N é primo
2 - Verificar se N é perfeito
3 - Verificar se N é capicua
4 - Sair do programa
*/

int main()
{
    int opcao, n;

    do
    {
        printf("\nMENU DE OPCOES\n");
        printf("1 - Verificar se N e primo\n");
        printf("2 - Verificar se N e perfeito\n");
        printf("3 - Verificar se N e capicua\n");
        printf("4 - Sair do programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
            {
                int qtdDivisores = 0;

                printf("Insira um numero inteiro positivo: ");
                scanf("%d", &n);

                if (n <= 0)
                {
                    printf("Entrada invalida\n");
                }
                else
                {
                    for (int i = 1; i <= n; i++)
                    {
                        if (n % i == 0)
                        {
                            qtdDivisores++;
                        }
                    }

                    if (qtdDivisores == 2)
                    {
                        printf("%d e primo\n", n);
                    }
                    else
                    {
                        printf("%d nao e primo\n", n);
                    }
                }

                break;
            }

            case 2:
            {
                int somaDivisores = 0;

                printf("Insira um numero inteiro positivo: ");
                scanf("%d", &n);

                if (n <= 0)
                {
                    printf("Entrada invalida\n");
                }
                else
                {
                    for (int i = 1; i <= n / 2; i++)
                    {
                        if (n % i == 0)
                        {
                            somaDivisores += i;
                        }
                    }

                    if (somaDivisores == n)
                    {
                        printf("%d e perfeito\n", n);
                    }
                    else
                    {
                        printf("%d nao e perfeito\n", n);
                    }
                }

                break;
            }

            case 3:
            {
                int original, reverso = 0, digito;

                printf("Insira um numero inteiro positivo: ");
                scanf("%d", &n);

                if (n <= 0)
                {
                    printf("Entrada invalida\n");
                }
                else
                {
                    original = n;

                    while (n > 0)
                    {
                        digito = n % 10;
                        reverso = reverso * 10 + digito;
                        n /= 10;
                    }

                    if (original == reverso)
                    {
                        printf("%d e capicua\n", original);
                    }
                    else
                    {
                        printf("%d nao e capicua\n", original);
                    }
                }

                break;
            }

            case 4:
                printf("Encerrando o programa\n");
                break;

            default:
                printf("Opcao invalida\n");
        }

    } while (opcao != 4);

    return 0;
}