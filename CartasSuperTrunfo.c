#include <stdio.h>

// Desafio Super Trunfo - Países (Nível Aventureiro)
// Tema 3 - Interatividade no Super Trunfo

int main() {

    /* ================== DECLARAÇÃO DAS VARIÁVEIS ================== */

    char pais1[50], pais2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;
    int opcao;

    /* ================== CADASTRO DA CARTA 1 ================== */

    printf("Cadastro da Carta 1\n");

    printf("Nome do pais: ");
    scanf(" %49[^\n]", pais1); //Descobri essa informação para não estourar o buffer (testando)

    printf("Populacao: ");
    scanf("%lu", &populacao1);
    if (populacao1 == 0) {
        printf("Erro: Populacao invalida!\n");
        return 1;
    }

    printf("Area (km2): ");
    scanf("%f", &area1);
    if (area1 <= 0) {
        printf("Erro: Area invalida!\n");
        return 1;
    }

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    if (pib1 < 0) {
        printf("Erro: PIB invalido!\n");
        return 1;
    }

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);
    if (pontos1 < 0) {
        printf("Erro: Pontos turisticos invalidos!\n");
        return 1;
    }

    /* ================== CADASTRO DA CARTA 2 ================== */

    printf("\nCadastro da Carta 2\n");

    printf("Nome do pais: ");
    scanf(" %49[^\n]", pais2); //Descobri essa informação para não estourar o buffer (testando)

    printf("Populacao: ");
    scanf("%lu", &populacao2);
    if (populacao2 == 0) {
        printf("Erro: Populacao invalida!\n");
        return 1;
    }

    printf("Area (km2): ");
    scanf("%f", &area2);
    if (area2 <= 0) {
        printf("Erro: Area invalida!\n");
        return 1;
    }

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);
    if (pib2 < 0) {
        printf("Erro: PIB invalido!\n");
        return 1;
    }

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);
    if (pontos2 < 0) {
        printf("Erro: Pontos turisticos invalidos!\n");
        return 1;
    }

    /* ================== CÁLCULO DA DENSIDADE ================== */

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    /* ================== MENU ================== */

    printf("\n===== SUPER TRUNFO =====\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 5) {
        printf("Opcao invalida!\n");
        return 1;
    }

    /* ================== COMPARAÇÃO ================== */

    printf("\n===== RESULTADO =====\n");
    printf("%s X %s\n\n", pais1, pais2);

    switch (opcao) {

        case 1:
            printf("Atributo: Populacao\n");
            printf("%s: %lu\n", pais1, populacao1);
            printf("%s: %lu\n", pais2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", pais1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Area\n");
            printf("%s: %.2f km2\n", pais1, area1);
            printf("%s: %.2f km2\n", pais2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", pais1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", pais1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", pais1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demografica\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            // Regra especial: menor densidade vence
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", pais1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", pais2);
            else
                printf("Empate!\n");
            break;
    }
    return 0;
}
