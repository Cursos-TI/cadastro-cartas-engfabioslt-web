#include <stdio.h>

// Desafio Super Trunfo - Países (Nível Novato)
// Tema 3 - Super Trunfo em c: Desenvolvendo a Lógica do Jogo

int main() {

    /* ================== DECLARACAO DAS VARIAVEIS ================== */
    // Tentativa de reduzir linhas de código ao máximo (Verificar se fica mais rápida a execução)

    char estado1, estado2, codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2, densidade1, densidade2;
    float percapta1, percapta2;

    /* ================= ENTRADA DE DADOS - CARTA 1 ================= */

    printf("Cadastro da Carta 1\n");

    printf("Digite a sigla do estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);
   
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf(" %lu", &populacao1);

    printf("Area (em km2): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhoes R$): ");
    scanf(" %f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos1); 

    /* ================== CALCULOS - CARTA 1 ================== */

    densidade1 = (float)populacao1 / area1;
    percapta1 = (pib1 * 1000000000.0f) / (float)populacao1;
    
    /* ================= ENTRADA DE DADOS - CARTA 2 ================= */

    printf("\nCadastro da Carta 2\n");

    printf("Digite a sigla do estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: A02): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf(" %lu", &populacao2);

    printf("Area (em km2): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhoes R$): ");
    scanf(" %f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf(" %d", &pontos2);

    /* ================== CALCULOS - CARTA 2 ================== */

    densidade2 = (float)populacao2 / area2;
    percapta2 = (pib2 * 1000000000.0f) / (float)populacao2;
    
    /* ================= COMPARAÇÃO DAS CARTAS ================= */
    // Atributo escolhido para comparacao (definido diretamente no codigo)
    // Neste exemplo: Populacao

    printf("\n===== COMPARACAO DE CARTAS =====\n");
    printf("Atributo escolhido: Populacao\n\n");

    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    } 
    else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    } 
    else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
