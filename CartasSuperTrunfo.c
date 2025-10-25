#include <stdio.h>

int main(){

    //Variáveis da primeira carta
    char estado1, codigo1[10], cidade1[20];
    int populacao1, turismo1;
    float area1, pib1;

    //variáveis da segunda carta
    char estado2, codigo2[10], cidade2[20];
    int populacao2, turismo2;
    float area2, pib2;

    //cadastro da primeira carta
    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf(" -RESPONDA AS PERGUNTAS A SEGUIR- \n");

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
    printf("=== CADASTRO DA SEGUNDA CARTA ===\n");
    printf(" -RESPONDA AS PERGUNTAS A SEGUIR- \n");

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

    //Exibição das informações cadastradas
    //Impressão da carta 1 
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: R$ %.2f Bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turismo1);

    printf ("\n");

   //Impressão da carta 2 
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f Bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turismo2);

    return 0;
}