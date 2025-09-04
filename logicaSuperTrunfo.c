#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    //
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    // Dados da primeira carta
    char estado;
    char codigo[3];
    char cidade[50];
    char pais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;

    // Dados da segunda carta
    char estado2;
    char codigo2[3];
    char cidade2[50];
    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    int opcao;

    // Entrada de dados da primeira carta
    printf("Cadastro da Primeia Carta\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade);

    printf("Informe a População: ");
    scanf("%d", &populacao);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = populacao / area;
    pibPerCapita = pib * 1000000000.0 / (float)populacao;

    // Entrada de dados da segunda carta
    printf("\nCadastro da segunda carta\n");
    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]s", cidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = pib2 * 1000000000.0 / (float)populacao2;

    // Menu de comparação
    printf("\n=== Menu de Comparação ===\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");

    scanf("%d", &opcao);

    printf("\n=== Comparação de Cartas ===\n");
    printf("Paises Selecionados: %s e %s\n", pais, pais2);
    switch (opcao)
    {
    case 1:

        printf("Atributo Selecionado: População\n");
        printf("Carta 1 - %s (%c): %d habitantes\n", cidade, estado, populacao);
        printf("Carta 2 - %s (%c): %d habitantes\n", cidade2, estado2, populacao2);
        if (populacao > populacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        }
        else if (populacao2 > populacao)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate entre %s e %s!\n", cidade, cidade2);
        }
        break;
    case 2:
        printf("Atributo Selecionado: Área\n");
        printf("Carta 1 - %s (%c): %.2f km²\n", cidade, estado, area);
        printf("Carta 2 - %s (%c): %.2f km²\n", cidade2, estado2, area2);
        if (area > area2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        }
        else if (area2 > area)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate entre %s e %s!\n", cidade, cidade2);
        }
        break;
    case 3:
        printf("Atributo Selecionado: PIB\n");
        printf("Carta 1 - %s (%c): R$ %.2f bilhões\n", cidade, estado, pib);
        printf("Carta 2 - %s (%c): R$ %.2f bilhões\n", cidade2, estado2, pib2);
        if (pib > pib2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        }
        else if (pib2 > pib)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate entre %s e %s!\n", cidade, cidade2);
        }
        break;
    case 4:
        printf("Atributo Selecionado: Pontos Turísticos\n");
        printf("Carta 1 - %s (%c): %d pontos turísticos\n", cidade, estado, pontosTuristicos);
        printf("Carta 2 - %s (%c): %d pontos turísticos\n", cidade2, estado2, pontosTuristicos2);
        if (pontosTuristicos > pontosTuristicos2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        }
        else if (pontosTuristicos2 > pontosTuristicos)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate entre %s e %s!\n", cidade, cidade2);
        }
        break;
    case 5:
        printf("Atributo Selecionado: Densidade Populacional\n");
        printf("Carta 1 - %s (%c): %.2f habitantes/km²\n", cidade, estado, densidadePopulacional);
        printf("Carta 2 - %s (%c): %.2f habitantes/km²\n", cidade2, estado2, densidadePopulacional2);
        if (densidadePopulacional > densidadePopulacional2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
        }
        else if (densidadePopulacional2 > densidadePopulacional)
        {
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
        }
        else
        {
            printf("Resultado: Empate entre %s e %s!\n", cidade, cidade2);
        }
        break;
    default:
        break;
    }

    return 0;
}
