#include <stdio.h>
#include <string.h>

/*
-----------------------------------------------------------
Programa: Super Trunfo - Comparando Cartas
Autor: ChatGPT (Especialista em C)
Descrição:
    Este programa compara duas cartas do jogo Super Trunfo,
    com base em um atributo numérico fixo (neste caso, o PIB).
    Ele calcula densidade populacional e PIB per capita,
    e determina a carta vencedora conforme as regras.
-----------------------------------------------------------
*/

// Estrutura para armazenar os dados de uma carta
struct Carta {
    char estado[3];               // Exemplo: "SP"
    char codigo[5];               // Exemplo: "A01"
    char nomeCidade[50];          // Nome da cidade
    int populacao;                // População
    float area;                   // Área em km²
    float pib;                    // PIB em bilhões
    int pontosTuristicos;         // Número de pontos turísticos
    float densidadePopulacional;  // População / Área
    float pibPerCapita;           // PIB / População
};

int main() {
    // Declaração de duas cartas
    struct Carta carta1, carta2;

    // Cadastro das cartas (pré-definidas)
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.nomeCidade, "Sao Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 700000.0;
    carta1.pontosTuristicos = 50;

    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "B02");
    strcpy(carta2.nomeCidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.area = 1200.25;
    carta2.pib = 400000.0;
    carta2.pontosTuristicos = 30;

    // Cálculo dos valores derivados
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta2.densidadePopulacional = carta2.populacao / carta2.area;

    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibição das cartas cadastradas
    printf("=== CARTAS CADASTRADAS ===\n\n");
    printf("Carta 1: %s (%s)\n", carta1.nomeCidade, carta1.estado);
    printf("Populacao: %d\nArea: %.2f km²\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n\n",
           carta1.populacao, carta1.area, carta1.pib, carta1.pontosTuristicos, carta1.densidadePopulacional, carta1.pibPerCapita);

    printf("Carta 2: %s (%s)\n", carta2.nomeCidade, carta2.estado);
    printf("Populacao: %d\nArea: %.2f km²\nPIB: %.2f\nPontos Turisticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n\n",
           carta2.populacao, carta2.area, carta2.pib, carta2.pontosTuristicos, carta2.densidadePopulacional, carta2.pibPerCapita);

    // ----------------------------------------------------
    // Escolha do atributo para comparação
    // Altere a variável "atributo" conforme desejado:
    // 1 = Populacao | 2 = Area | 3 = PIB | 4 = Densidade | 5 = PIB per Capita
    // ----------------------------------------------------
    int atributo = 3; // PIB escolhido como exemplo

    printf("=== COMPARACAO DE CARTAS ===\n");

    if (atributo == 1) {
        printf("Atributo: Populacao\n");
        printf("%s: %d\n%s: %d\n",
               carta1.nomeCidade, carta1.populacao, carta2.nomeCidade, carta2.populacao);

        if (carta1.populacao > carta2.populacao)
            printf("Resultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.populacao > carta1.populacao)
            printf("Resultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("Empate!\n");

    } else if (atributo == 2) {
        printf("Atributo: Area\n");
        printf("%s: %.2f\n%s: %.2f\n",
               carta1.nomeCidade, carta1.area, carta2.nomeCidade, carta2.area);

        if (carta1.area > carta2.area)
            printf("Resultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.area > carta1.area)
            printf("Resultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("Empate!\n");

    } else if (atributo == 3) {
        printf("Atributo: PIB\n");
        printf("%s: %.2f\n%s: %.2f\n",
               carta1.nomeCidade, carta1.pib, carta2.nomeCidade, carta2.pib);

        if (carta1.pib > carta2.pib)
            printf("Resultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.pib > carta1.pib)
            printf("Resultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("Empate!\n");

    } else if (atributo == 4) {
        printf("Atributo: Densidade Populacional\n");
        printf("%s: %.2f\n%s: %.2f\n",
               carta1.nomeCidade, carta1.densidadePopulacional, carta2.nomeCidade, carta2.densidadePopulacional);

        if (carta1.densidadePopulacional < carta2.densidadePopulacional)
            printf("Resultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.densidadePopulacional < carta1.densidadePopulacional)
            printf("Resultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("Empate!\n");

    } else if (atributo == 5) {
        printf("Atributo: PIB per Capita\n");
        printf("%s: %.2f\n%s: %.2f\n",
               carta1.nomeCidade, carta1.pibPerCapita, carta2.nomeCidade, carta2.pibPerCapita);

        if (carta1.pibPerCapita > carta2.pibPerCapita)
            printf("Resultado: %s venceu!\n", carta1.nomeCidade);
        else if (carta2.pibPerCapita > carta1.pibPerCapita)
            printf("Resultado: %s venceu!\n", carta2.nomeCidade);
        else
            printf("Empate!\n");

    } else {
        printf("Atributo invalido.\n");
    }

    return 0;
}
