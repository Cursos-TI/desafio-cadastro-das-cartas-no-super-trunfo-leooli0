#include <stdio.h>
int main(){

    /*
        Programa para cadastro e comparacao de duas cidades no estilo Super Trunfo.
        Cada cidade tem varios atributos, e ao final eh exibido qual carta venceu em cada comparacao.
    */

    // Variaveis da primeira cidade
    char estado1[50], nomeCidade1[50], codigoCidade1[10];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // Variaveis da segunda cidade
    char estado2[50], nomeCidade2[50], codigoCidade2[10];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // Leitura da primeira cidade
    printf("=== Cadastro da Primeira Cidade ===\n");

    printf("Digite o nome do Estado: ");
    scanf("%s", estado1);

    printf("Digite o Codigo da Cidade: ");
    scanf("%s", codigoCidade1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("Digite a area: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    // Calculos da primeira cidade
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Leitura da segunda cidade
    printf("\n=== Cadastro da Segunda Cidade ===\n");

    printf("Digite o nome do Estado: ");
    scanf("%s", estado2);

    printf("Digite o Codigo da Cidade: ");
    scanf("%s", codigoCidade2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    // Calculos da segunda cidade
    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Comparacoes com exibicao da carta vencedora
    printf("\n--- Comparacao de Cartas ---\n");

    int resultado;

    resultado = populacao1 > populacao2;
    printf("Populacao: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = area1 > area2;
    printf("Area: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pontosTuristicos1 > pontosTuristicos2;
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = densidade1 < densidade2; // menor densidade vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = pibPerCapita1 > pibPerCapita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = superPoder1 > superPoder2;
    printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    return 0;
}
