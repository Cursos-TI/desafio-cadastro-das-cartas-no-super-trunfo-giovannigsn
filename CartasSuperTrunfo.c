#include <stdio.h>

int main() {

    int turisticos;
    char estado, nome[20], codigo[10];
    float area, populacao, pib, densidadepopulacional, superpoder, pibpc, resultado, cartaA, cartaB;

    char a01, a02, a03, a04;
    char b01, b02, b03, b04;
    char c01, c02, c03, c04;
    char d01, d02, d03, d04;
    char e01, e02, e03, e04;
    char f01, f02, f03, f04;
    char g01, g02, g03, g04;
    char h01, h02, h03, h04;

    //tela interativa de entrada e saida do usuario

    printf("Digite o Estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo);

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

    //Atribuiçao do super poder
    densidadepopulacional = populacao / area;
    pibpc = pib / populacao;
    superpoder = turisticos + area + populacao + pib + densidadepopulacional + pibpc;


    //exibir dados cadastrados e calculos sistemico.
    printf("Cidade: %s\n", nome);
    printf("Codigo da Carta: %s\n", codigo);
    printf("Numero de pontos turisticos: %d\n", turisticos);
    printf("PIB: %.2f Bilhoes\n", pib);
    printf("Populacao: %.f\n", populacao);
    printf("Area em KM²: %.2f KM²\n", area);
    printf("Densidade Populacional: %.2f pessoas/KM² \n", densidadepopulacional);
    printf("PIB per Capita: %.2f Reais \n", pibpc);

    //comparaçao entre cartas.
    printf("Insira a Primeira carta a ser comparada\n");
    scanf("%f", &cartaA);

    printf("Insira a Segunda carta a ser comparada\n");
    scanf("%f", &cartaB);

    resultado = densidadepopulacional + cartaA < cartaB + superpoder;

    printf("***A CARTA VENCEDORA E %d***\n", resultado);

    return 0;
}
