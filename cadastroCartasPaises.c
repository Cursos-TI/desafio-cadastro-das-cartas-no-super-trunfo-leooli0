#include <stdio.h>

int main() {
    // Variáveis da primeira cidade
    char estado1[50], nomeCidade1[50], siglaEstado1[10];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;

    // Variáveis da segunda cidade
    char estado2[50], nomeCidade2[50], siglaEstado2[10];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;

    int opcao;

    // Leitura da primeira cidade
    printf("=== Cadastro da Primeira Cidade ===\n");

    printf("Digite o Estado: ");
    scanf(" %[^\n]s", estado1);
    printf("Digite a Sigla do Estado: ");
    scanf(" %[^\n]s", siglaEstado1);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Digite a População: ");
    scanf("%lu", &populacao1);
    printf("Digite os Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("Digite a Área: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Leitura da segunda cidade
    printf("\n=== Cadastro da Segunda Cidade ===\n");
    
    printf("Digite o nome do Estado: ");
    scanf(" %[^\n]s", estado2);
    printf("Digite a Sigla do Estado: ");
    scanf(" %[^\n]s", siglaEstado2);
    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Digite a População: ");
    scanf("%lu", &populacao2);
    printf("Digite os Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("Digite a Área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Menu interativo
    printf("\n=== Menu de Comparação ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (MENOR vence)\n");
    printf("6 - PIB per capita\n");
    printf("7 - Super Poder\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    // Realizando a comparacao das cidades 
    printf("\nComparando %s (%s) com %s (%s):\n\n", nomeCidade1, siglaEstado1, nomeCidade2, siglaEstado2);

    switch(opcao) {
        case 1:
            printf("População: %lu x %lu\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %.2f x %.2f\n", area1, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %d x %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica: %.2f x %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("PIB per capita: %.2f x %.2f\n", pibPerCapita1, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 7:
            printf("Super Poder: %.2f x %.2f\n", superPoder1, superPoder2);
            if (superPoder1 > superPoder2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (superPoder2 > superPoder1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente com uma das opções do menu.\n");
    }

    return 0;
}
