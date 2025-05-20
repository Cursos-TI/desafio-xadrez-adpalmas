#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Simulação do Movimento da Torre ---
    // A torre se move em linha reta horizontalmente ou verticalmente.
    // Simula o movimento de 5 casas para a direita usando um laço 'for'.
    printf("--- Movimento da Torre ---\n");
    int casasTorre = 5; // Número de casas que a torre vai se mover
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção a cada casa percorrida
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Simulação do Movimento do Bispo ---
    // O bispo se move na diagonal.
    // Simula o movimento de 5 casas na diagonal para cima e à direita usando um laço 'while'.
    printf("--- Movimento do Bispo ---\n");
    int casasBispo = 5; // Número de casas que o bispo vai se mover
    int contadorBispo = 0; // Contador para o laço 'while'
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal
        contadorBispo++; // Incrementa o contador
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade


    // --- Simulação do Movimento da Rainha ---
    // A rainha se move em todas as direções.
    // Simula o movimento de 8 casas para a esquerda usando um laço 'do-while'.
    printf("--- Movimento da Rainha ---\n");
    int casasRainha = 8; // Número de casas que a rainha vai se mover
    int contadorRainha = 0; // Contador para o laço 'do-while'
    if (casasRainha > 0) { // Garante que o laço 'do-while' execute pelo menos uma vez se houver movimento
        do {
            printf("Esquerda\n"); // Imprime a direção a cada casa percorrida
            contadorRainha++; // Incrementa o contador
        } while (contadorRainha < casasRainha);
    }
    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    return 0;