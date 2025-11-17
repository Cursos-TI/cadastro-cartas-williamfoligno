#include <stdio.h>

int main(){

    //Variáveis da primeira carta
    char estado1, codigo1[10], cidade1[20];
    int turismo1;
    unsigned long int populacao1;
    float area1, pib1, densidade1, percapita1, superpoder1;

    //variáveis da segunda carta
    char estado2, codigo2[10], cidade2[20];
    int turismo2;
    unsigned long int populacao2;
    float area2, pib2, densidade2, percapita2, superpoder2;

    //Apresentação
    printf("\n");
    printf("======================================\n");
    printf("=  BEM VINDO AO SUPER TRUNFO PAÍSES  =\n");
    printf("======================================\n");
    printf("\n");
    
    //cadastro da primeira carta
    printf("===== CADASTRO DA PRIMEIRA CARTA =====\n");
    printf("   -RESPONDA AS PERGUNTAS A SEGUIR-   \n");

    printf("Estado (A-H): ");
    scanf("%c", &estado1);

    printf("Código (01-04): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área em Km²: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo1);

    printf("\n");

    //cadastro da segunda carta
    printf("===== CADASTRO DA SEGUNDA CARTA =====\n");
    printf("   -RESPONDA AS PERGUNTAS A SEGUIR-   \n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (01-04): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área em Km²: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &turismo2);

    printf("\n");

    // Cálculo Densidade Populacional e PIB per capita e super poder da carta 1
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)turismo1 + percapita1 + (1.0 / densidade1);

    // Cálculo Densidade Populacional e PIB per capita e super poder da carta 2
    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + percapita2 + (1.0 / densidade2);

    //Exibição das informações cadastradas
    //Impressão da carta 1 
    printf("\n");
    printf("======================================\n");
    printf("=          EXIBIÇÃO CARTA 1          =\n");
    printf("======================================\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", percapita1);
    printf("Super Poder: %.2f\n", superpoder1);

   //Impressão da carta 2 
    printf("\n");
    printf("======================================\n");
    printf("=          EXIBIÇÃO CARTA 2          =\n");
    printf("======================================\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", percapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    //Comparação das cartas
    printf("\n");
    printf("======================================\n");
    printf("=       COMPARAÇÃO DE ATRIBUTOS      =\n");
    printf("======================================\n");
    printf("\n");
    printf("A Carta 1 será representada pelo número '0' e a Carta 2 será representada pelo número '1'\n");
    printf("***Observação: Os atributos de maior valor vencem. Para a Densidade Populacional a vencedora será a de menor valor***\n");
    printf("\n");
    printf("População: A carta vencedora é a %d\n", populacao1 > populacao2);
    printf("Área: A carta vencedora é a %d\n", area1 > area2);
    printf("PIB: A carta vencedora é a %d\n", pib1 > pib2);
    printf("Pontos Turísticos: A carta vencedora é a %d\n", turismo1 > turismo2);
    printf("Densidade Populacional: A carta vencedora é a %d\n", densidade1 < densidade2);
    printf("PIB per Capita: A carta vencedora é a %d\n", percapita1 > percapita2);
    printf("Super Poder: A carta vencedora é a %d\n", superpoder1 > superpoder2);

    return 0;
}