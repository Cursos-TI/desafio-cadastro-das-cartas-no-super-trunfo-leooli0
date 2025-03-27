#include <stdio.h>
int main()
{

    /*

        Programa para cadastro de informações das cidades do desafio Super Trunfo.
        Sao coletados os seguintes dados:
        - Nome do Estado
        - Codigo da Cidade
        - Nome da Cidade
        - Populacao
        - Numero de Pontos Turisticos
        - Area (em km²)
        - PIB (Produto Interno Bruto)

    */

    // Declarando as variaveis para armazenar os dados das cidades
    char estados[50], nomeCidades[50], codigoCidades[10];
    int populacao, numeroPontosTuristicos;
    float area, pib;

    // Fazendo a coleta dos dados da primeira cidade
    printf("=== Cadastro da Primeira Cidade ===\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", estados);

    printf("Digite o Codigo da Cidade: \n");
    scanf("%s", codigoCidades);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidades);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    // Exibição dos dados da primeira cidade cadastrada
    printf("\n--- Dados da Primeira Cidade ---\n");
    printf("Nome do Estado: %s\n", estados);
    printf("Nome da Cidade: %s\n", nomeCidades);
    printf("Populacao: %d\n", populacao);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);
    printf("Area: %.2f km²\n", area, pib);
    printf("PIB: %.2f bilhoes de reais\n", pib);

    // Cadastrando a exibicao dos dados da segunda cidade
    printf("\n=== Cadastro da Segunda Cidade ===\n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", estados);

    printf("Digite o Codigo da Cidade: \n");
    scanf("%s", codigoCidades);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nomeCidades);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numeroPontosTuristicos);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    // Exibindo os dados da segunda cidade cadastrada
    printf("\n--- Dados da Segunda Cidade ---\n");
    printf("Nome do Estado: %s\n", estados);
    printf("Nome da Cidade: %s\n", nomeCidades);
    printf("Populacao: %d\n", populacao);
    printf("Numero de Pontos Turisticos: %d\n", numeroPontosTuristicos);
    printf("Area: %.2f km²\n", area);
    printf("PIB: %.2f  bilhoes de reais\n", pib);

    return 0; // finalizando o programa co um retorno padrao
}