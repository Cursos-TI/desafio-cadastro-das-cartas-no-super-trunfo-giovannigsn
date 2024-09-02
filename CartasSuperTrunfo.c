#include <stdio.h>

int main() {
    int codigo, turisticos;
    char nome[20];
    float area, populacao, pib;

    printf("Digite o codigo: \n");
    scanf("%d", &codigo);

    printf("Digite a Cidade: \n");
    scanf("%s", &nome);

    printf("Informe os pontos turisticos: \n");
    scanf("%d", &turisticos);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a populaçao: \n");
    scanf("%f", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Cidade: %s\n", nome);
    printf("Codigo: %d\n", codigo);
    printf("Pontos turisticos: %d\n", turisticos);
    printf("PIB: %f\n", pib);
    printf("Populacao: %f\n", populacao);
    printf("Area: %f\n", area);

    return 0;
}
