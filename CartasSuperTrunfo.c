#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada e printf para exibição das informações. 	

int main() {

// Área para definição das variáveis para armazenar as propriedades das cidades

    /* Definição das variáveis*/

    /*Carta 1*/

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    /*Carta 2*/

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
  
 // Área para entrada de dados

    /* Leitura de dados - Carta 1*/

    printf("Cadastro da Carta 1\n");

    printf("Digite a sigla do estado (A a H):");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01):");
    scanf("%3s", codigo1);

    printf("Nome da Cidade:");
    scanf(" %[^\n]", cidade1);

    printf("População:");
    scanf("%d", &populacao1);

    printf("Área (em km²):");
    scanf("%f", &area1);

    printf("PIB (em bilhões R$):");      
    scanf("%f", &pib1);

    printf("Número de pontos turísticos:");    
    scanf("%d", &pontos1); 
   
    /* Leitura de dados - Carta 2*/

    printf("\nCadastro da Carta 2\n");

    printf("Digite a sigla do estado (A a H):");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: A01):");
    scanf("%3s", codigo2);

    printf("Nome da Cidade:");
    scanf(" %[^\n]", cidade2);

    printf("População:");
    scanf("%d", &populacao2);

    printf("Área (em km²):");
    scanf("%f", &area2);

    printf("PIB (em bilhões R$):");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos:");
    scanf("%d", &pontos2);

// Área para exibição dos dados da cidade   

    /* Exibição dos dados das cartas */

    printf("\n--- Carta 1 ---\n");  
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões R$\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões R$\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);

    return 0;
}  
