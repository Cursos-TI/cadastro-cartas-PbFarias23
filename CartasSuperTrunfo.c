#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada de dados 
    // Carta 01
    
    printf("Cadastro da Carta 01 \n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    
    //Carta 02
    printf("\nCadastro da Carta 2 \n");
    
    printf("Estado (A-H): ");
    scanf(" %s", &estado2);

    printf("Codigo da Carta: ");
    scanf(" %s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", &cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos
    float DensidadePopulacional1;
    float PIBpercapita1;

    DensidadePopulacional1 = (populacao1 / area1);
    PIBpercapita1 = (pib1 / populacao1);

    float DensidadePopulacional2;
    float PIBpercapita2;

    DensidadePopulacional2 = (populacao2 / area2);
    PIBpercapita2 = (pib2 / populacao2);

    // Impressão das cartas 
    // carta 1
    printf("Cartas\n\n");
    
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %f\n", DensidadePopulacional1);
    printf("PIB per Capita: %f\n", PIBpercapita1);

    //Carta2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
}