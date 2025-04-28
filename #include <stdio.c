#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1[30], nome1[30], codigo1[5];
    int populacao1, pontosturisticos1, carta1;
    float area1, pib1, densidade1, percapita1;

    // Declaração das variáveis para a segunda carta
    char estado2[30], nome2[30], codigo2[5];
    int populacao2, pontosturisticos2, carta2;
    float area2, pib2, densidade2, percapita2;

    // Leitura dos dados para a primeira carta
    printf("Digite a Carta\n"); 
    scanf("%d", &carta1);
    
    printf("Digite o Estado\n"); 
    scanf("%s", estado1);

    printf("Digite o código da carta\n"); 
    scanf("%s", codigo1);  

    printf("Digite o nome da cidade\n"); 
    scanf("%s", nome1);  

    printf("Digite a população\n"); 
    scanf("%d", &populacao1);  

    printf("Digite a área em km²\n"); 
    scanf("%f", &area1);  

    printf("Digite o PIB\n"); 
    scanf("%f", &pib1);  

    printf("Digite o número de pontos turísticos da cidade\n"); 
    scanf("%d", &pontosturisticos1); 
    
    // Cálculo da densidade e PIB per capita da primeira carta
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;

    // Leitura dos dados para a segunda carta
    printf("\nDigite a Carta\n");
    scanf("%d", &carta2);

    printf("Digite o Estado\n");
    scanf("%s", estado2);  

    printf("Digite o código da carta\n");
    scanf("%s", codigo2); 

    printf("Digite o nome da cidade\n");
    scanf("%s", nome2);  
    
    printf("Digite a população\n");
    scanf("%d", &populacao2); 

    printf("Digite a área em km²\n");
    scanf("%f", &area2);  

    printf("Digite o PIB\n");
    scanf("%f", &pib2); 

    printf("Digite o número de pontos turísticos da cidade\n");
    scanf("%d", &pontosturisticos2);  
    
    // Cálculo da densidade e PIB per capita da segunda carta
    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;

    // Exibindo as informações das duas cartas
    printf("\nComparação entre as Cartas:\n");
    printf("Carta 1 e Carta 2\n");
    

    printf("Carta: %d               Carta: %d\n", carta1, carta2);
    printf("Estado: %s               Estado: %s\n", estado1, estado2);
    printf("Código: %s               Código: %s\n", codigo1, codigo2);
    printf("Nome da cidade: %s       Nome da cidade: %s\n", nome1, nome2);
    printf("População: %d            População: %d\n", populacao1, populacao2);
    printf("Área: %.2f km²           Área: %.2f km²\n", area1, area2);  
    printf("PIB: %.2f                PIB: %.2f\n", pib1, pib2);  
    printf("Pontos turísticos: %d    Pontos turísticos: %d\n", pontosturisticos1, pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²   Densidade Populacional: %.2f hab/km²\n", densidade1, densidade2);
    printf("PIB per capita: %.2f     PIB per capita: %.2f\n", percapita1, percapita2);

    return 0;
}
