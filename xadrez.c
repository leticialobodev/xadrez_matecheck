#include <stdio.h> //Inclui a biblioteca para funções de entrada e saída

//Desafio de Xadrez - MateCheck

int main () {
    // ====================================================
    // DESAFIO XADREZ - NÍVEL NOVATO
    // SIMULAÇÃO DE MOVIMENTOS DE PEÇAS
    // ====================================================

    // ----------------------------------------------------
    // MOVIMENTO DA TORRE (USANDO FOR)
    // Torre: Move-se 5 casas para a direita.
    // ----------------------------------------------------
    int casas_torre = 5; // Número de casas que a Torre vai se mover.

    printf("Simulando o movimento da Torre:\n");
    for (int i = 0; i < casas_torre; i++) { //Loop 'for': Repete 'casas_torre' n vezes
        printf("Direita\n"); // Imprime a direção a cada casa.
    }


    // -----------------------------------------------------
    // MOVIMENTO DO BISPO (USANDO WHILE)
    // Bispo: Move-se 5 casas na diagonal superior direita.
    // -----------------------------------------------------




    // -----------------------------------------------------
    // MOVIMENTO DA RAINHA
    // Rainha: Move-se 8 casas para a esquerda
    // -----------------------------------------------------

    return 0;

}