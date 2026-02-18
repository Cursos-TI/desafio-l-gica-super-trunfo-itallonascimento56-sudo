#include <stdio.h>

int main() {

    // ===================================================
    // CARTAS PRÉ-CADASTRADAS
    // ===================================================

    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    int populacao1 = 203000000;
    int populacao2 = 46000000;

    float area1 = 8516000.0;
    float area2 = 2780000.0;

    float pib1 = 2100000.0;
    float pib2 = 640000.0;

    int pontos1 = 25;
    int pontos2 = 18;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;

    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;

    float soma1 = 0, soma2 = 0;

    // ===================================================
    // MENU PRIMEIRO ATRIBUTO
    // ===================================================

    printf("====== SUPER TRUNFO - NIVEL MESTRE ======\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // ===================================================
    // MENU SEGUNDO ATRIBUTO (DINÂMICO)
    // ===================================================

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }

    printf("Opcao: ");
    scanf("%d", &atributo2);

    if (atributo2 == atributo1) {
        printf("Erro: voce escolheu o mesmo atributo duas vezes.\n");
        return 0;
    }

    // ===================================================
    // FUNÇÃO LÓGICA DO PRIMEIRO ATRIBUTO
    // ===================================================

    switch(atributo1) {

        case 1:
            valor1_attr1 = populacao1;
            valor2_attr1 = populacao2;
            break;

        case 2:
            valor1_attr1 = area1;
            valor2_attr1 = area2;
            break;

        case 3:
            valor1_attr1 = pib1;
            valor2_attr1 = pib2;
            break;

        case 4:
            valor1_attr1 = pontos1;
            valor2_attr1 = pontos2;
            break;

        case 5:
            valor1_attr1 = densidade1;
            valor2_attr1 = densidade2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===================================================
    // FUNÇÃO LÓGICA DO SEGUNDO ATRIBUTO
    // ===================================================

    switch(atributo2) {

        case 1:
            valor1_attr2 = populacao1;
            valor2_attr2 = populacao2;
            break;

        case 2:
            valor1_attr2 = area1;
            valor2_attr2 = area2;
            break;

        case 3:
            valor1_attr2 = pib1;
            valor2_attr2 = pib2;
            break;

        case 4:
            valor1_attr2 = pontos1;
            valor2_attr2 = pontos2;
            break;

        case 5:
            valor1_attr2 = densidade1;
            valor2_attr2 = densidade2;
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===================================================
    // REGRA ESPECIAL PARA DENSIDADE
    // (menor vence → então invertemos antes da soma)
    // ===================================================

    if (atributo1 == 5) {
        valor1_attr1 = 1 / valor1_attr1;
        valor2_attr1 = 1 / valor2_attr1;
    }

    if (atributo2 == 5) {
        valor1_attr2 = 1 / valor1_attr2;
        valor2_attr2 = 1 / valor2_attr2;
    }

    // ===================================================
    // SOMA DOS ATRIBUTOS
    // ===================================================

    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    // ===================================================
    // EXIBIÇÃO DOS RESULTADOS
    // ===================================================

    printf("\n=========== RESULTADO ===========\n\n");

    printf("%s:\n", pais1);
    printf("Atributo 1: %.2f\n", valor1_attr1);
    printf("Atributo 2: %.2f\n", valor1_attr2);
    printf("Soma: %.2f\n\n", soma1);

    printf("%s:\n", pais2);
    printf("Atributo 1: %.2f\n", valor2_attr1);
    printf("Atributo 2: %.2f\n", valor2_attr2);
    printf("Soma: %.2f\n\n", soma2);

    // ===================================================
    // OPERADOR TERNÁRIO PARA DEFINIR VENCEDOR
    // ===================================================

    printf("Resultado Final: ");

    (soma1 > soma2) ? 
        printf("%s venceu!\n", pais1) :
        (soma2 > soma1) ?
            printf("%s venceu!\n", pais2) :
            printf("Empate!\n");

    return 0;
}
