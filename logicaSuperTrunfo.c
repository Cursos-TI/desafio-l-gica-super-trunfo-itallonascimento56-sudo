#include <stdio.h>

int main() {

    // ==========================================
    // Cartas já cadastradas (pré-definidas)
    // ==========================================

    char pais1[30] = "Brasil";
    char pais2[30] = "Argentina";

    int populacao1 = 203000000;
    int populacao2 = 46000000;

    float area1 = 8516000.0;
    float area2 = 2780000.0;

    float pib1 = 2100000.0;     // em bilhões
    float pib2 = 640000.0;      // em bilhões

    int pontosTuristicos1 = 25;
    int pontosTuristicos2 = 18;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    // ==========================================
    // MENU INTERATIVO
    // ==========================================

    printf("====== SUPER TRUNFO - NIVEL AVENTUREIRO ======\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=============================================\n");

    // ==========================================
    // SWITCH PARA ESCOLHA DO ATRIBUTO
    // ==========================================

    switch(opcao) {

        case 1:
            printf("Comparacao por Populacao\n\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Comparacao por Area\n\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Comparacao por PIB\n\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Comparacao por Pontos Turisticos\n\n");
            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Comparacao por Densidade Demografica\n\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n\n", pais2, densidade2);

            // REGRA ESPECIAL: MENOR VENCE
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
    }

    return 0;
}
