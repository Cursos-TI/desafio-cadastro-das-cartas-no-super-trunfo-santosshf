#include <stdio.h>

int main() {
	//Criei uma variável para cada carta, de forma simples e funcional, e nomeei elas com "1" e "2", para identificar de qual carta tal variável pertence//
    char estado1[30], nome1[30], codigo1[5], estado2[30], nome2[30], codigo2[5];
    int populacao1, pontosturisticos1,carta1,populacao2, pontosturisticos2, carta2;
    float area1, pib1,area2, pib2;

    printf("Digite a Carta\n"); //Dizer qual é a carta//
    scanf("%d", &carta1);
    
	printf("Digite o Estado\n"); //Estado da carta, como por exemplo "A"//
    scanf("%s", estado1);  

    printf("Digite o código da carta\n"); // Código da carta, como "A01"//
    scanf("%s", codigo1);  

    printf("Digite o nome da cidade\n"); // Nomde da cidade//
    scanf("%s", nome1);  

    printf("Digite a população\n"); //População dessa cidade//
    scanf("%d", &populacao1);  

    printf("Digite a área em km²\n"); // Área em km² da cidade//
    scanf("%f", &area1);  

    printf("Digite o PIB\n"); //PIB/
    scanf("%f", &pib1);  

    printf("Digite o número de pontos turísticos da cidade\n"); // Números de pontos turísticos//
    scanf("%d", &pontosturisticos1); 

	//Aqui se inicia a segunda carta//
	//Se repete a mesma estrutura para todas as cartas//

	printf("Digite a Carta\n");
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

	//Daqui em diante, é o que vai reprodir as cartas//

    printf("				Carta: %d			Carta: %d\n", carta1, carta2);
	printf("				Estado: %s 			Estado: %s\n", estado1, estado2);
    printf("				Código: %s 			Código: %s\n", codigo1, codigo2);
    printf("				Nome da cidade: %s 		Nome da cidade: %s\n", nome1,nome2);
    printf("				População: %d 		População: %d\n", populacao1, populacao2);
    printf("				Área: %.2f km² 		Área: %.2f km²\n", area1, area2);  
    printf("				PIB: %.2f 		PIB: %.2f\n", pib1, pib2);  
    printf("				Pontos turísticos: %d		Pontos turísticos: %d\n", pontosturisticos1,pontosturisticos2);

    return 0;
}