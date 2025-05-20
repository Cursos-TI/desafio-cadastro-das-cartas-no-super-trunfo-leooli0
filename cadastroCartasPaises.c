#include <stdio.h>

int main() {
    // Dados da primeira cidade
    char estado1[50], nomeCidade1[50], siglaEstado1[10];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidade1, pibPerCapita1;

    // Dados da segunda cidade
    char estado2[50], nomeCidade2[50], siglaEstado2[10];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidade2, pibPerCapita2;

    int attr1, attr2;

    // Entrada de dados da primeira cidade
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

    // Entrada de dados da segunda cidade
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

    // Menu para o primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica (MENOR vence)\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &attr1);

    // Validação do primeiro atributo
    if (attr1 < 1 || attr1 > 6) {
        printf("Atributo inválido. Encerrando programa.\n");
        return 1;
    }

    // Menu para o segundo atributo (dinâmico)
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 6; i++) {
        if (i == attr1) continue;
        switch (i) {
            case 1: printf("%d - População\n", i); break;
            case 2: printf("%d - Área\n", i); break;
            case 3: printf("%d - PIB\n", i); break;
            case 4: printf("%d - Pontos turísticos\n", i); break;
            case 5: printf("%d - Densidade demográfica (MENOR vence)\n", i); break;
            case 6: printf("%d - PIB per capita\n", i); break;
        }
    }
    printf("Opção: ");
    scanf("%d", &attr2);

    // Validação do segundo atributo
    if (attr2 < 1 || attr2 > 6 || attr2 == attr1) {
        printf("Atributo inválido ou repetido. Encerrando programa.\n");
        return 1;
    }

    // Função auxiliar para obter valor do atributo
    float getAttr(int option, int cidade) {
        switch (option) {
            case 1: return cidade == 1 ? populacao1 : populacao2;
            case 2: return cidade == 1 ? area1 : area2;
            case 3: return cidade == 1 ? pib1 : pib2;
            case 4: return cidade == 1 ? pontosTuristicos1 : pontosTuristicos2;
            case 5: return cidade == 1 ? densidade1 : densidade2;
            case 6: return cidade == 1 ? pibPerCapita1 : pibPerCapita2;
            default: return 0;
        }
    }

    // Obter valores dos atributos para ambas as cidades
    float valor1_attr1 = getAttr(attr1, 1);
    float valor2_attr1 = getAttr(attr1, 2);
    float valor1_attr2 = getAttr(attr2, 1);
    float valor2_attr2 = getAttr(attr2, 2);

    // Comparações individuais
    int pontos1 = 0, pontos2 = 0;

    // Atributo 1
    if (attr1 == 5) {
        valor1_attr1 < valor2_attr1 ? pontos1++ : (valor2_attr1 < valor1_attr1 ? pontos2++ : 0);
    } else {
        valor1_attr1 > valor2_attr1 ? pontos1++ : (valor2_attr1 > valor1_attr1 ? pontos2++ : 0);
    }

    // Atributo 2
    if (attr2 == 5) {
        valor1_attr2 < valor2_attr2 ? pontos1++ : (valor2_attr2 < valor1_attr2 ? pontos2++ : 0);
    } else {
        valor1_attr2 > valor2_attr2 ? pontos1++ : (valor2_attr2 > valor1_attr2 ? pontos2++ : 0);
    }

    // Soma final
    float soma1 = valor1_attr1 + valor1_attr2;
    float soma2 = valor2_attr1 + valor2_attr2;

    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
    printf("Cidade 1: %s (%s)\n", nomeCidade1, siglaEstado1);
    printf("Cidade 2: %s (%s)\n\n", nomeCidade2, siglaEstado2);

    // Mostrar os atributos escolhidos e valores
    char *nomeAttr[] = {
        "", "População", "Área", "PIB", "Pontos turísticos", "Densidade demográfica", "PIB per capita"
    };

    printf("%s: %.2f x %.2f\n", nomeAttr[attr1], valor1_attr1, valor2_attr1);
    printf("%s: %.2f x %.2f\n", nomeAttr[attr2], valor1_attr2, valor2_attr2);
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    // Resultado final
    if (soma1 > soma2)
        printf("\n🏆 %s venceu!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("\n🏆 %s venceu!\n", nomeCidade2);
    else
        printf("\n🤝 Empate!\n");

    return 0;
}
