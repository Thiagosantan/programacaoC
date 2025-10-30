#include <stdio.h>

/*
-----------------------------------------------------------
Programa: Batalha Naval - Posicionando Navios (Nível Novato)
Autor: ChatGPT (Especialista em C)
Descrição:
    Este programa cria um tabuleiro 10x10 e posiciona dois navios:
    - Um navio na horizontal (3 posições)
    - Um navio na vertical (3 posições)
    O tabuleiro é exibido com 0 representando água e 3 representando navio.
-----------------------------------------------------------
*/

#define TAM 10     // Tamanho fixo do tabuleiro
#define NAVIO 3    // Valor que representa as partes do navio
#define TAM_NAVIO 3 // Tamanho fixo de cada navio

int main() {
    int tabuleiro[TAM][TAM]; // Matriz 10x10 representando o tabuleiro
    int i, j;

    // ----------------------------------------------------
    // Inicializando o tabuleiro com 0 (água)
    // ----------------------------------------------------
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ----------------------------------------------------
    // Definição das coordenadas iniciais dos navios
    // ----------------------------------------------------
    int linha_horizontal = 4;  // Linha onde o navio horizontal começa
    int coluna_horizontal = 2; // Coluna onde o navio horizontal começa

    int linha_vertical = 1;    // Linha onde o navio vertical começa
    int coluna_vertical = 7;   // Coluna onde o navio vertical começa

    // ----------------------------------------------------
    // Validação simples: garantir que os navios cabem no tabuleiro
    // ----------------------------------------------------
    if (coluna_horizontal + TAM_NAVIO > TAM || linha_vertical + TAM_NAVIO > TAM) {
        printf("Erro: Um dos navios ultrapassa os limites do tabuleiro.\n");
        return 1;
    }

    // ----------------------------------------------------
    // Posicionando o navio horizontal no tabuleiro
    // ----------------------------------------------------
    for (j = 0; j < TAM_NAVIO; j++) {
        tabuleiro[linha_horizontal][coluna_horizontal + j] = NAVIO;
    }

    // ----------------------------------------------------
    // Posicionando o navio vertical no tabuleiro
    // (com checagem simples de sobreposição)
    // ----------------------------------------------------
    for (i = 0; i < TAM_NAVIO; i++) {
        if (tabuleiro[linha_vertical + i][coluna_vertical] == NAVIO) {
            printf("Erro: Sobreposicao detectada entre navios!\n");
            return 1;
        }
        tabuleiro[linha_vertical + i][coluna_vertical] = NAVIO;
    }

    // ----------------------------------------------------
    // Exibindo o tabuleiro
    // ----------------------------------------------------
    printf("\n=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: 0 = Agua | 3 = Navio\n");
    printf("\nNavio Horizontal: Linha %d, Coluna %d\n", linha_horizontal, coluna_horizontal);
    printf("Navio Vertical: Linha %d, Coluna %d\n", linha_vertical, coluna_vertical);

    return 0;
}
