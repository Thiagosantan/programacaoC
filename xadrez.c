#include <stdio.h>

/*
-----------------------------------------------------------
Programa: Movimentação de Peças de Xadrez
Autor: ChatGPT (Especialista em C)
Descrição:
    Simula o movimento de três peças de xadrez (Torre, Bispo e Rainha)
    usando diferentes estruturas de repetição (for, while e do-while).
-----------------------------------------------------------
*/

int main() {
    // Definição das variáveis de movimento
    int i;                        // Contador genérico
    int casas_torre = 5;          // Número de casas que a torre vai mover
    int casas_bispo = 5;          // Número de casas que o bispo vai mover
    int casas_rainha = 8;         // Número de casas que a rainha vai mover

    printf("=== Simulacao de Movimentos das Pecas de Xadrez ===\n\n");

    // -------------------------------
    // Movimento da TORRE (for)
    // -------------------------------
    printf("Movimento da TORRE:\n");
    printf("A Torre move-se em linha reta (horizontal ou vertical).\n");
    printf("Simulando movimento de %d casas para a direita:\n", casas_torre);

    for (i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n"); // Separador visual entre as peças

    // -------------------------------
    // Movimento do BISPO (while)
    // -------------------------------
    printf("Movimento do BISPO:\n");
    printf("O Bispo move-se na diagonal.\n");
    printf("Simulando movimento de %d casas na diagonal para cima e direita:\n", casas_bispo);

    i = 1; // Reinicia o contador
    while (i <= casas_bispo) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    printf("\n"); // Separador visual entre as peças

    // -------------------------------
    // Movimento da RAINHA (do-while)
    // -------------------------------
    printf("Movimento da RAINHA:\n");
    printf("A Rainha move-se em todas as direções.\n");
    printf("Simulando movimento de %d casas para a esquerda:\n", casas_rainha);

    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= casas_rainha);

    printf("\n=== Fim da Simulacao ===\n");

    return 0;
}
