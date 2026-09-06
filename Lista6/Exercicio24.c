#include <stdio.h>

/*Implemente a função void plural(char palavra[]) que pluraliza a palavra de acordo com as
    seguintes regras:
   - Se a palavra terminar em 'l' deve ser retirado o 'l' e acrescentado os caracteres 'i' e 's'
     no final. Exemplo: "animal" -> "animais".
   - Se a palavra terminar em 'r' ou 's' ou 'z' deve ser acrescentado os caracteres 'e' e 's'.
     Exemplos: "tambor" -> "tambores", "feliz" -> "felizes" e "vies" -> "vieses".
   - Se a palavra terminar em 'm' deve ser retirado o 'm' e acrescentado os caracteres 'n' e 's'.
     Exemplo: "homem" -> "homens".
   - Os demais casos deverão apenas receber o caractere 's' no final. Exemplo: "casa" -> "casas".
*/

void plural(char palavra[]) {

    int len;
    char ultima;

    len = 0;
    while (palavra[len] != '\0') {
        len++;
    }

    if (len == 0) {
        return;
    }

    ultima = palavra[len - 1];

    if (ultima == 'l') {
        palavra[len - 1] = 'i';
        palavra[len] = 's';
        palavra[len + 1] = '\0';
    } else if (ultima == 'r' || ultima == 's' || ultima == 'z') {
        palavra[len] = 'e';
        palavra[len + 1] = 's';
        palavra[len + 2] = '\0';
    } else if (ultima == 'm') {
        palavra[len - 1] = 'n';
        palavra[len] = 's';
        palavra[len + 1] = '\0';
    } else {
        palavra[len] = 's';
        palavra[len + 1] = '\0';
    }
}

int main() {

    char palavra[200];
    int i;

    printf("Digite uma palavra: ");
    fgets(palavra, 197, stdin);

    i = 0;
    while (palavra[i] != '\0') {
        if (palavra[i] == '\n') {
            palavra[i] = '\0';
            break;
        }
        i++;
    }

    plural(palavra);

    printf("Plural: %s\n", palavra);

    return 0;
}