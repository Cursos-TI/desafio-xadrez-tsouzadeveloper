#include <stdio.h>

/*
 * Desafio: Movimentação de Peças de Xadrez
 * Objetivo: Simular movimentos usando for, while e do-while.
 */

int main() {
    // Definição das constantes de movimento
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // --- Movimentação da Torre ---
    // Requisito: 5 casas para a direita usando 'for'
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentação do Bispo ---
    // Requisito: 5 casas na diagonal (Cima e Direita) usando 'while'
    printf("Movimento do Bispo:\n");
    int contadorBispo = 0;
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // --- Movimentação da Rainha ---
    // Requisito: 8 casas para a esquerda usando 'do-while'
    printf("Movimento da Rainha:\n");
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < casasRainha);

    return 0;
}
