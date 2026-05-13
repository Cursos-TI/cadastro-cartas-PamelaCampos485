#include <stdio.h>

int main(){
    char estado1;
    char estado2;

    char codigo1[10];
    char codigo2[10];

    char cidade1[50];
    char cidade2[50];

    int populacao1;
    int populacao2;

    float area1;
    float area2;

    float pib1;
    float pib2;

    int pontos1;
    int pontos2;

    printf("Digite o estado da carta 1: ");
    scanf("%c", &estado1);
    printf("Estado digitado: %c\n", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);
    printf("Codigo digitado: %s\n", codigo1);

    printf("Digite a cidade da carta 1: ");
    scanf("%s", cidade1);
    printf("Cidade digitada: %s\n", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Populacao digitada: %d\n", populacao1);

    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Area digitada: %.3f\n", area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("PIB digitado: %.3f\n", pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);
    printf("Numero de pontos turisticos digitados: %d\n", pontos1);

    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Estado digitado: %c\n", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);
    printf("Codigo digitado: %s\n", codigo2);

    printf("Digite a cidade da carta 2: ");
    scanf("%s", cidade2);
    printf("Cidade digitada: %s\n", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Populacao digitada: %d\n", populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Area digitada: %.3f\n", area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("PIB digitado: %.3f\n", pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);
    printf("Numero de pontos turisticos digitado: %d\n", pontos2);

    return 0;
}
