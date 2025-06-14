#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado, estado2, codigo[4], codigo2[4], cidade[20], cidade2[20];
    int populacao, populacao2, pontos, pontos2;
    float area, area2, pib, pib2, densidade, densidade2, pibpercapita, pibpercapita2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(">>PRIMEIRA CARTA<<\n\n");

    printf("ESTADO, escolha uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf("%c", &estado);

    printf("CÓDIGO DA CARTA, letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo);

    printf("CIDADE: ");
    scanf("%s", &cidade);

    printf("POPULAÇÃO: ");
    scanf("%d", &populacao);

    printf("ÀREA (km²): a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area);

    printf("PIB, produto Interno Bruto da cidade: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%i", &pontos);


    printf("\n>>SEGUNDA CARTA<<\n\n");

    printf("ESTADO, escolha uma letra de 'A' a 'H' (representando um dos oito estados): ");
    scanf(" %c", &estado2);

    printf("CÓDIGO DA CARTA, letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
    scanf("%s", &codigo2);

    printf("CIDADE: ");
    scanf("%s", &cidade2);

    printf("POPULAÇÃO: ");
    scanf("%d", &populacao2);

    printf("ÀREA (km²), a área da cidade em quilômetros quadrados: ");
    scanf("%e", &area2);

    printf("PIB, produto Interno Bruto da cidade: ");
    scanf("%e", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    //Calculo das váriaveis para definir a Densidade populacional e o PIB per Capita.

    densidade = populacao / area;
    densidade2 = populacao2 / area2;
    pibpercapita = (float) populacao / pib;
    pibpercapita2 = (float) populacao2 / pib2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta:1");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Àrea: %.2f km²\n", area),
    printf("PIB: %.2f Bilhões de Reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);


    printf("\nCarta:2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Àrea: %.2f km²\n", area2),
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    return 0;
}
