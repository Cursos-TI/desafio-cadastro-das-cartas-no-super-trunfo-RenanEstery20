#include <stdio.h>

int main() {

    // Declaracao de váriaveis para cartas 01
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;
    char estado1, codigo1[10], cidade1[50];

    // Declaracao de váriaveis para cartas 02
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    char estado2, codigo2[10], cidade2[50];

    // Obtendo as informações para carta 01
    printf("Dados carta 1 \n\n");
    printf("Digite o Estado \n");
    scanf(" %c", &estado1);
    printf("Digite o Codigo \n");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade \n");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População \n");
    scanf("%lu", &populacao1); // unsigned long int
    printf("Digite a Área \n");
    scanf("%f", &area1);
    printf("Digite o PIB \n");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos \n");
    scanf("%d", &pontosTuristicos1);

    // Calculando a densidade demográfica e PIB per capita para carta 01 (com proteção)
    densidade1 = (area1 == 0.0f) ? 0.0f : (float)populacao1 / area1;
    pibPerCapita1 = (populacao1 == 0) ? 0.0f : (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1 = (densidade1 == 0.0f) ? 0.0f : (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Imprimindo para usuário as informações da carta 01
    printf("\n Carta 01 \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // Obtendo as informações para carta 02
    printf("\nDados carta 2 \n");
    printf("Digite o Estado \n");
    scanf(" %c", &estado2);
    printf("Digite o Codigo \n");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade \n");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População \n");
    scanf("%lu", &populacao2);
    printf("Digite a Área \n");
    scanf("%f", &area2);
    printf("Digite o PIB \n");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos \n");
    scanf("%d", &pontosTuristicos2);

    // Calculando a densidade demográfica e PIB per capita para carta 02 (com proteção)
    densidade2 = (area2 == 0.0f) ? 0.0f : (float)populacao2 / area2;
    pibPerCapita2 = (populacao2 == 0) ? 0.0f : (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (densidade2 == 0.0f) ? 0.0f : (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // Imprimindo para usuário as informações da carta 02
    printf("\n Carta 02 \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação direta (Mestre): imprime 1 se carta 1 venceu, 0 se não venceu
    printf("\nComparação de Cartas:\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); // menor vence!
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

}
