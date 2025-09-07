#include <stdio.h>

int main() {
    // Exibe a mensagem de boas-vindas do desafio
    printf("Desafio Xadrez!\n");
    
    // --- Entrada de Dados: Constantes e Variáveis ---
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_RAINHA = 8;
    int i = 0; // Variável de controle para o loop while
    int j = 0; // Variável de controle para o loop do-while

    // --- Movimentação das Peças com Estruturas de Repetição ---

    // 1. Bispo (5 casas na diagonal superior direita)
    // Usando um loop 'for'
    printf("\nMovimentacao do Bispo:\n");
    for (int k = 0; k < MOVIMENTOS_BISPO; k++) {
        // A movimentação do Bispo é a combinação de "Cima" e "Direita"
        printf("Cima, Direita\n");
    }

    // 2. Torre (5 casas para a direita)
    // Usando um loop 'while'
    printf("\nMovimentacao da Torre:\n");
    while (i < MOVIMENTOS_TORRE) {
        printf("Direita\n");
        i++; // Incrementa a variável de controle
    }

    // 3. Rainha (8 casas para a esquerda)
    // Usando um loop 'do-while'
    printf("\nMovimentacao da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++; // Incrementa a variável de controle
    } while (j < MOVIMENTOS_RAINHA);

    return 0;
}