#include <stdio.h>

int main (){

    char nome1[50] = "Rio de Janeiro";
    char nome2[50] = "São Paulo";
    int populacao1 = 1610000;
    int populacao2 = 2150000;
    float area1 = 1200;
    float area2 = 248219;
    float pib1 = 10150000;
    float pib2 = 30130000;
    int pontos1 = 120;
    int pontos2 = 37;
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    int opcao;

    //menu
    printf("$$$ --- Batalha dos Estados --- $$$\n\n");
    
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("\nEscolha o Atributo ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Atributo População\n");
        printf("%s : %d habitantes\n", nome1, populacao1);
        printf("%s : %d habitantes\n", nome2, populacao2);
        
        if (populacao1 > populacao2){
            printf("Resultado: %s Venceu\n", nome1);
        } else if (populacao1 < populacao2) {
            printf("Resultado: %s Venceu!\n", nome2);
        } else {
            printf("Empate\n");
        }
        break;

    case 2:
        printf("Atributo: Área\n");
        printf("%s : %.2f km2\n", nome1, area1);
        printf("%s : %.2f km2\n", nome2, area2);

        if (area1 > area2)
        {
            printf("Resultado: %s Venceu!\n", nome1);
        } else if (area1 < area2)
        {
            printf("Resultado: %s Venceu!\n", nome2);
        } else {
            printf("Empate\n");
        }
        break;
        
        
        default:
        break;
    }
}