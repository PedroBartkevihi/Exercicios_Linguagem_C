#include <stdio.h>
#include <ctype.h>

/*Leia uma string s informe se s é palíndroma ou não. Para a verificação devem ser consideradas
somente as letras de A a Z (espaços em branco e pontuação devem ser descartados).*/

#define TAM_MAX 200

int main() {

    char s[TAM_MAX];
    int len, i, j, eh_palindroma;

    printf("Digite uma string: ");
    fgets(s, TAM_MAX, stdin);

    len = 0;
    while (s[len] != '\0') {
        if (s[len] == '\n') {
            s[len] = '\0';
            break;
        }
        len++;
    }

    i = 0;
    j = len - 1;
    eh_palindroma = 1;

    while (i < j) {
        if (!isalpha((unsigned char) s[i])) {
            i++;
            continue;
        }
        if (!isalpha((unsigned char) s[j])) {
            j--;
            continue;
        }
        if (toupper((unsigned char) s[i]) != toupper((unsigned char) s[j])) {
            eh_palindroma = 0;
            break;
        }
        i++;
        j--;
    }

    if (eh_palindroma) {
        printf("E palindroma.\n");
    } else {
        printf("Nao e palindroma.\n");
    }

    return 0;
}