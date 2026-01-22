#include <stdio.h>

// Desafio Super Trunfo - Países (Nível Mestre)
// Tema 3 - Batalha de Cartas no Super Trunfo
// Objetivo: No nível mestre calcular a Densidade Populacional e o PIB per Capita, Calcular o Super Poder, Comparar as Cartas e exibir os resultados das comparações. 	

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

    /* Definição das variáveis*/

    /*Carta 1*/
    /*Juntando variáveis de mesma característica*/
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; 
    float area1, pib1; /*Juntando variais para facilitar*/
    int pontos1;
    float densidade1, percapta1, superpoder1; /*acrescentando o super poder*/
    
    /*Carta 2*/
    /*Juntando variáveis de mesma característica*/
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2; 
    float area2, pib2; /*Juntando variais para facilitar*/
    int pontos2;
    float densidade2, percapta2, superpoder2; /*acrescentando o super poder*/

    // Área para entrada de dados

    /* Leitura de dados - Carta 1*/

    printf("Cadastro da Carta 1\n");

    printf("Digite a sigla do estado (A a H):");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01):");
    scanf("%s", codigo1);

    printf("Nome da Cidade:");
    scanf(" %[^\n]", cidade1);

    printf("População:");
    scanf("%lu", &populacao1);

    printf("Área (em km²):");
    scanf("%f", &area1);

    printf("PIB (em bilhões R$):");      
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:");    
    scanf("%d", &pontos1); 

    /* Cálculo - Carta 1 */

    densidade1 = (float)populacao1 / area1;
    percapta1 = (pib1*1000000000.0f) / (float)populacao1;

    /*Adicionar o Cálculo do Super Poder*/
    superpoder1 = (float)populacao1 + area1 + pib1 + pontos1 + percapta1 + (1.0f/densidade1);

// Área para exibição dos dados da cidade 1  

    /* Exibição dos dados das cartas */

    printf("\n--- Carta 1 ---\n");  
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Habitacional: %.2f hab/km²\n", densidade1);    
    printf("PIB per capita: R$ %.2f\n", percapta1);  

    /* Leitura de dados - Carta 2*/

    printf("\nCadastro da Carta 2\n");

    printf("Digite a sigla do estado (A a H):");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01):");
    scanf("%s", codigo2);

    printf("Nome da Cidade:");
    scanf(" %[^\n]", cidade2);

    printf("População:");
    scanf("%lu", &populacao2);

    printf("Área (em km²):");
    scanf("%f", &area2);

    printf("PIB (em bilhões R$):");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontos2);

    /* Cálculo - Carta 2 */

    densidade2 = (float)populacao2 / area2;
    percapta2 = (pib2*1000000000.0f) / (float)populacao2;

    /*Adicionar o Cálculo do Super Poder*/
    superpoder2 = (float)populacao2 + area2 + pib2 + pontos2 + percapta2 + (1.0f/densidade2);

// Área para exibição dos dados da cidade 2  

    /* Exibição dos dados das cartas */

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Habitacional: %.2f hab/km²\n", densidade2);    
    printf("PIB per capita: R$ %.2f\n", percapta2);    

// Comparações das cartas  

    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 > densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", percapta1 > percapta2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

    return 0;
}  
