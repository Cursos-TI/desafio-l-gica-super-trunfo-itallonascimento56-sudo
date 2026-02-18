#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

    // ============================================
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    // ============================================

    char estado1[20], estado2[20];
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];

    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;

    float area1, area2;
    float pib1, pib2;

    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;


    // ============================================
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // ============================================

    printf("===== CARTA 1 =====\n");

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // ============================================
    // Cálculo da Densidade Populacional e PIB per capita
    // ============================================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;


    // ============================================
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    // ============================================

    printf("\n====================================\n");
    printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nCidade 1 tem maior populacao.\n");
        printf("A cidade vencedora é: %s\n", cidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("\nCidade 2 tem maior populacao.\n");
        printf("A cidade vencedora é: %s\n", cidade2);
    } 
    else {
        printf("\nAs duas cidades possuem a mesma populacao.\n");
    }


    // ============================================
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    // ============================================

    printf("\nDensidade Carta 1: %.2f\n", densidade1);
    printf("Densidade Carta 2: %.2f\n", densidade2);

    printf("PIB per capita Carta 1: %.2f\n", pibPerCapita1);
    printf("PIB per capita Carta 2: %.2f\n", pibPerCapita2);

    return 0;
}
