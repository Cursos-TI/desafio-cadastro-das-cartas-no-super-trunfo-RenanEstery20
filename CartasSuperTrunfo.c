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

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30     
*/ 
    //Declaracao de váriaveis
    int pontosTuristicos, populacao;
    float area, pib;
    char estado, codigo[10], cidade[20];

    //Obtendo as informações para carta 01
    printf("Dados carta 1 \n\n");
    printf("Digite o Estado \n");
    scanf("%c", &estado);
    printf("Digite o Codigo \n");
    scanf("%s", &codigo);
    printf("Digite o Nome da Cidade \n");
    scanf("%s", &cidade);
    printf("Digite a População \n");
    scanf("%d", &populacao);
    printf("Digite a Área \n");
    scanf("%f", &area);
    printf("Digite o PIB \n");
    scanf("%f", &pib);
    printf("Digite o Número de Pontos Turísticos \n");
    scanf("%d", &pontosTuristicos);

    //Imprimindo para usuário as informações da carta 01
    printf("\n Carta 01 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);

    //Obtendo as informações para carta 02
    printf("\nDados carta 2 \n");
    printf("Digite o Estado \n");
    scanf(" %c", &estado);
    printf("Digite o Codigo \n");
    scanf("%s", &codigo);
    printf("Digite o Nome da Cidade \n");
    scanf("%s", &cidade);
    printf("Digite a População \n");
    scanf("%d", &populacao);
    printf("Digite a Área \n");
    scanf("%f", &area);
    printf("Digite o PIB \n");
    scanf("%f", &pib);
    printf("Digite o Número de Pontos Turísticos \n");
    scanf("%d", &pontosTuristicos);

    //Imprimindo para usuário as informações da carta 01
    printf("\n Carta 02 \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
}
