#include <stdio.h>

int main() {
/*
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais     
*/ 

    //Declaracao de váriaveis para cartas 01
    int pontosTuristicos1, populacao1;
    float area1, pib1, densidade1, pibPerCapita1;
    char estado1, codigo1[10], cidade1[50];

    //Declaracao de váriaveis para cartas 02
    int pontosTuristicos2, populacao2;
    float area2, pib2, densidade2, pibPerCapita2;
    char estado2, codigo2[10], cidade2[50];



    //Obtendo as informações para carta 01
    printf("Dados carta 1 \n\n");
    printf("Digite o Estado \n");
    scanf("%c", &estado1);
    printf("Digite o Codigo \n");
    scanf("%s", &codigo1);
    printf("Digite o Nome da Cidade \n");
    scanf("%s", &cidade1);
    printf("Digite a População \n");
    scanf("%d", &populacao1);
    printf("Digite a Área \n");
    scanf("%f", &area1);
    printf("Digite o PIB \n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos \n");
    scanf("%d", &pontosTuristicos1);

    //Calculando a densidade demográfica e PIB per capita para carta 01
    densidade1 = (float) (populacao1 / area1);
    pibPerCapita1 = (float) (pib1 / populacao1);

    //Imprimindo para usuário as informações da carta 01
    printf("\n Carta 01 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Demográfica: %f hab/km²\n", densidade1);
    printf("PIB per Capita: %f reais\n", pibPerCapita1);

    //Obtendo as informações para carta 02
    printf("\nDados carta 2 \n");
    printf("Digite o Estado \n");
    scanf(" %c", &estado2);
    printf("Digite o Codigo \n");
    scanf("%s", &codigo2);
    printf("Digite o Nome da Cidade \n");
    scanf("%s", &cidade2);
    printf("Digite a População \n");
    scanf("%d", &populacao2);
    printf("Digite a Área \n");
    scanf("%f", &area2);
    printf("Digite o PIB \n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos \n");
    scanf("%d", &pontosTuristicos2);

    //Calculando a densidade demográfica e PIB per capita para carta 02
    densidade2 = (float) (populacao2 / area2);
    pibPerCapita2 = (float) (pib2 / populacao2);

    //Imprimindo para usuário as informações da carta 01
    printf("\n Carta 02 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Demográfica: %f hab/km²\n", densidade2);
    printf("PIB per Capita: %f reais\n", pibPerCapita2);
}
