#include <stdio.h> //Inclui a biblioteca para funções de entrada e saída (printf)

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
    int casas_bispo = 5; // Número de casas que o Bispo vai se mover
    int contador_bispo = 0; // Inicializa um contador para o while loop

    printf("Simulando o movimento do Bispo:\n");
    while (contador_bispo < casas_bispo) { // Loop 'while': Repete enquanto o contador for menor que o número de casas
        printf("Cima, Direita\n"); // Imprime a direção a cada casa
        contador_bispo++; // Incrementa o contador para que o loop eventualmente pare

    }

    // -----------------------------------------------------
    // MOVIMENTO DA RAINHA
    // Rainha: Move-se 8 casas para a esquerda
    // -----------------------------------------------------
    int casas_rainha = 8; // Número de casas que a Rainha vai se mover
    int contador_rainha = 0; // Inicializa um contador para o do-while

    printf("\nSimulando o movimento da Rainha:\n");
    do {
        printf("Esquerda\n"); // Imprime a direção a cada casa
        contador_rainha++; // Incrementa o contador para que o loop eventualmente pare
    } while (contador_rainha < casas_rainha); // Loop 'do-while': Repete enquanto o contador for menor que o número de casas e testa no final

    return 0;

}