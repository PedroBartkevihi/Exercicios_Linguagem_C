#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Faça um programa que implemente um jogo de Craps. O jogador lança um par de dados, obtendo um
valor de 2 a 12. Se na primeira jogada ele tira 7 ou 11 o jogo termina e ele ganha. Porém, se
na primeira jogada ele tira 2, 3 ou 12, o jogo termina e ele perde. Para qualquer outro valor
(4, 5, 6, 8, 9 ou 10) esta é a pontuação do jogador. O objetivo agora é continuar jogando até
que o jogador tire novamente a mesma pontuação. Entretanto, o jogador perde se tirar um 7
antes de tirar a mesma pontuação.*/

int lancar_dado() {

    return 1 + rand() % 6;
}

int jogar_dados() {

    return lancar_dado() + lancar_dado();
}

int main() {

    int resultado, ponto;
    int jogo_terminado, jogador_ganhou;

    srand(time(NULL));

    resultado = jogar_dados();
    printf("Primeira jogada: %d\n", resultado);

    if (resultado == 7 || resultado == 11) {
        jogo_terminado = 1;
        jogador_ganhou = 1;
    } else if (resultado == 2 || resultado == 3 || resultado == 12) {
        jogo_terminado = 1;
        jogador_ganhou = 0;
    } else {
        jogo_terminado = 0;
        ponto = resultado;
        printf("Seu ponto e %d. Continue jogando ate tirar %d de novo (ou perca se tirar 7).\n", ponto, ponto);
    }

    while (!jogo_terminado) {
        resultado = jogar_dados();
        printf("Jogada: %d\n", resultado);

        if (resultado == ponto) {
            jogo_terminado = 1;
            jogador_ganhou = 1;
        } else if (resultado == 7) {
            jogo_terminado = 1;
            jogador_ganhou = 0;
        }
    }

    if (jogador_ganhou) {
        printf("Voce ganhou!\n");
    } else {
        printf("Voce perdeu!\n");
    }

    return 0;
}