#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

/*Crie um programa para gerenciar a consulta de livros em uma biblioteca. Inicialmente leia os
dados de n livros com: título, nome do autor e ano. Em seguida, apresente um menu com as
opções 1-Consultar por título, 2-Consultar por autor e 3-Sair. A consulta pode ser feita com
apenas parte do título ou nome (sem considerar diferença entre maiúsculas e minúsculas), e
devem ser impressos todos os livros que combinam com o dado fornecido. Por exemplo: se um
livro se chama "Programacao C" e o outro "Gramatica", a busca por "GRAMA" vai encontrar os
dois livros. O programa deverá terminar somente quando o usuário selecionar a opção 3.*/

#define MAX_LIVROS 100
#define TAM_TITULO 80
#define TAM_AUTOR 60

typedef struct {
    char titulo[TAM_TITULO];
    char autor[TAM_AUTOR];
    int ano;
} Livro;

void limpa_buffer() {

    int c;

    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}

void le_linha(char s[], int tam) {

    int i;

    fgets(s, tam, stdin);

    i = 0;
    while (s[i] != '\0') {
        if (s[i] == '\n') {
            s[i] = '\0';
            break;
        }
        i++;
    }
}

void le_texto(char s[], int tam) {

    le_linha(s, tam);
    while (s[0] == '\0') {
        printf("Campo obrigatorio, digite novamente: ");
        le_linha(s, tam);
    }
}

int le_int() {

    int x;

    while (scanf("%d", &x) != 1) {
        limpa_buffer();
        printf("Valor invalido, digite novamente: ");
    }
    limpa_buffer();

    return x;
}

bool contem(const char texto[], const char busca[]) {

    int i, j;

    for (i = 0; texto[i] != '\0'; i++) {
        j = 0;
        while (busca[j] != '\0' && texto[i + j] != '\0' &&
               tolower((unsigned char) texto[i + j]) == tolower((unsigned char) busca[j])) {
            j++;
        }

        if (busca[j] == '\0') {
            return true;
        }
    }

    return false;
}

void le_livros(Livro livros[], int n) {

    int i;

    for (i = 0; i < n; i++) {
        printf("\nLivro %d\n", i + 1);

        printf("Titulo: ");
        le_texto(livros[i].titulo, TAM_TITULO);

        printf("Autor: ");
        le_texto(livros[i].autor, TAM_AUTOR);

        printf("Ano: ");
        livros[i].ano = le_int();
    }
}

void imprime_livro(Livro l) {

    printf("  %-30s %-25s %d\n", l.titulo, l.autor, l.ano);
}

void consulta(Livro livros[], int n, int por_autor) {

    char busca[TAM_TITULO];
    const char *campo;
    int i, encontrados;

    printf(por_autor ? "Autor (ou parte): " : "Titulo (ou parte): ");
    le_texto(busca, TAM_TITULO);

    encontrados = 0;

    for (i = 0; i < n; i++) {
        if (por_autor) {
            campo = livros[i].autor;
        } else {
            campo = livros[i].titulo;
        }

        if (contem(campo, busca)) {
            imprime_livro(livros[i]);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum livro encontrado.\n");
    } else {
        printf("%d livro(s) encontrado(s).\n", encontrados);
    }
}

int main() {

    Livro livros[MAX_LIVROS];
    int n, opcao;

    printf("Quantos livros (1 a %d)? ", MAX_LIVROS);
    n = le_int();
    while (n < 1 || n > MAX_LIVROS) {
        printf("Digite um valor entre 1 e %d: ", MAX_LIVROS);
        n = le_int();
    }

    le_livros(livros, n);

    do {
        printf("\n1-Consultar por titulo  2-Consultar por autor  3-Sair\n");
        printf("Opcao: ");
        opcao = le_int();

        switch (opcao) {
            case 1:
                consulta(livros, n, 0);
                break;
            case 2:
                consulta(livros, n, 1);
                break;
            case 3:
                printf("Encerrando.\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 3);

    return 0;
}