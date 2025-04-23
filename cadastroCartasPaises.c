#include <stdio.h>

int main(){

    /*
        Programa para cadastro e comparacao de duas cidades no estilo Super Trunfo.
        Cada cidade tem varios atributos, e ao final eh exibido qual carta venceu em cada comparacao.
    */

    // Variaveis da primeira cidade
    char estado1[50], nomeCidade1[50], siglaEstado1[10];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // Variaveis da segunda cidade
    char estado2[50], nomeCidade2[50], siglaEstado2[10];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    // Leitura da primeira cidade
    printf("=== Cadastro da Primeira Cidade ===\n");

    printf("Digite o nome do Estado: ");
    scanf("%s", estado1);

    printf("Digite a sigla do Estado: ");
    scanf("%s", siglaEstado1);

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

    printf("Digite a sigla do Estado: ");
    scanf("%s", siglaEstado2);

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

    // Comparacoes
    printf("\n--- Comparacao de Cartas ---\n");

    printf("\nComparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %lu\n", nomeCidade1, siglaEstado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", nomeCidade2, siglaEstado2, populacao2);
    if (populacao1 >= populacao2) {
        printf("Populacao: Carta 1 venceu\n");
    } else {
        printf("Populacao: Carta 2 venceu\n");
    }

    printf("\nComparação de cartas (Atributo: Área):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, siglaEstado1, area1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, siglaEstado2, area2);
    if (area1 >= area2) {
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
    }

    printf("\nComparação de cartas (Atributo: PIB):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, siglaEstado1, pib1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, siglaEstado2, pib2);
    if (pib1 >= pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    }

    printf("\nComparação de cartas (Atributo: Pontos Turísticos):\n");
    printf("Carta 1 - %s (%s): %d\n", nomeCidade1, siglaEstado1, pontosTuristicos1);
    printf("Carta 2 - %s (%s): %d\n", nomeCidade2, siglaEstado2, pontosTuristicos2);
    if (pontosTuristicos1 >= pontosTuristicos2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    }

    printf("\nComparação de cartas (Atributo: Densidade Populacional - menor vence):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, siglaEstado1, densidade1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, siglaEstado2, densidade2);
    if (densidade1 <= densidade2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    }

    printf("\nComparação de cartas (Atributo: PIB Per Capita):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, siglaEstado1, pibPerCapita1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, siglaEstado2, pibPerCapita2);
    if (pibPerCapita1 >= pibPerCapita2) {
        printf("PIB Per Capita: Carta 1 venceu\n");
    } else {
        printf("PIB Per Capita: Carta 2 venceu\n");
    }

    printf("\nComparação de cartas (Atributo: Super Poder):\n");
    printf("Carta 1 - %s (%s): %.2f\n", nomeCidade1, siglaEstado1, superPoder1);
    printf("Carta 2 - %s (%s): %.2f\n", nomeCidade2, siglaEstado2, superPoder2);
    if (superPoder1 >= superPoder2) {
        printf("Super Poder: Carta 1 venceu\n");
    } else {
        printf("Super Poder: Carta 2 venceu\n");
    }

    return 0;
}
