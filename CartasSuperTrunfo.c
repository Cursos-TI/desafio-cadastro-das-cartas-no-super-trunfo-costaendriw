#include <stdio.h>
#include <string.h>

int main()
{

    // Estrutura principal para cadastro das cartas

    char estado[50];            // Uma letra de 'A' a 'H' (representando um dos oito estados).
    char codigoDoEstado[50];    // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).
    char nomeDaCidade[50];      // O nome da cidade.
    int populacao;              // O número de habitantes da cidade.
    float areaEmKm;             // A área da cidade em quilômetros quadrados.
    float PIB;                  // O Produto Interno Bruto da cidade.
    int numeroPontosTuristicos; // A quantidade de pontos turísticos na cidade.

    // Variáveis temporárias para armazenar os dados da primeira carta
    char estado1[50];            // Armazena o estado da primeira carta
    char codigoDoEstado1[50];    // Armazena o código do estado da primeira carta
    char nomeDaCidade1[50];      // Armazena o nome da cidade da primeira carta
    int populacao1;              // Armazena a população da primeira carta
    float areaEmKm1;             // Armazena a área da primeira carta
    float PIB1;                  // Armazena o PIB da primeira carta
    int numeroPontosTuristicos1; // Armazena o número de pontos turísticos da primeira carta

    // ---- CARTA 1 ----

    // Entrada dos dados para cadastro da CARTA 1
    printf("---- CARTA 1 ----\n");
    printf("Digite uma letra de 'A' a 'H' para representar o estado: \n");
    scanf(" %c", &estado[0]); // Lê um caractere para o estado
    estado[1] = '\0';         // Garante que o estado seja uma string terminada em nulo

    printf("Digite uma letra escolhida seguida de um numero de 01 a 04(ex: A01, B03): \n");
    scanf("%s", codigoDoEstado); // Lê o código do estado

    int c;                                      // Declara uma variável para armazenar o caractere lido
    while ((c = getchar()) != '\n' && c != EOF) // Limpa o buffer de entrada
    {
        // Este loop lê e descarta caracteres do buffer de entrada
        // até encontrar um caractere de nova linha ('\n') ou o fim do arquivo (EOF).
        // Isso é necessário porque scanf("%s", ...) deixa um caractere de nova linha no buffer,
        // o que pode interferir na próxima leitura com fgets().
    }

    printf("Digite o nome da cidade: \n");
    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin); // Lê o nome da cidade, incluindo espaços
    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = 0;    // Remove o caractere de nova linha do nome da cidade

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%i", &populacao); // Lê o número de habitantes

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &areaEmKm); // Lê a área da cidade

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &PIB); // Lê o PIB da cidade

    printf("Digite a quantidade em números de pontos turisticos na cidade: \n");
    scanf("%i", &numeroPontosTuristicos); // Lê a quantidade de pontos turísticos

    // Armazena os dados da primeira carta nas variáveis temporárias
    strcpy(estado1, estado);                          // Copia o estado para a variável temporária
    strcpy(codigoDoEstado1, codigoDoEstado);          // Copia o código do estado para a variável temporária
    strcpy(nomeDaCidade1, nomeDaCidade);              // Copia o nome da cidade para a variável temporária
    populacao1 = populacao;                           // Copia a população para a variável temporária
    areaEmKm1 = areaEmKm;                             // Copia a área para a variável temporária
    PIB1 = PIB;                                       // Copia o PIB para a variável temporária
    numeroPontosTuristicos1 = numeroPontosTuristicos; // Copia o número de pontos turísticos para a variável temporária

    // ---- CARTA 2 ----

    // Entrada dos dados para cadastro da CARTA 2
    printf("\n---- CARTA 2 ----\n"); // Adicionado para separar as entradas
    printf("Digite uma letra de 'A' a 'H' para representar o estado: \n");
    scanf(" %c", &estado[0]); // Lê um caractere para o estado
    estado[1] = '\0';         // Garante que o estado seja uma string terminada em nulo

    printf("Digite uma letra escolhida seguida de um numero de 01 a 04(ex: A01, B03): \n");
    scanf("%s", codigoDoEstado); // Lê o código do estado

    while ((c = getchar()) != '\n' && c != EOF)
        ; // Limpa o buffer de entrada
    {
        // Este loop lê e descarta caracteres do buffer de entrada
        // até encontrar um caractere de nova linha ('\n') ou o fim do arquivo (EOF).
        // Isso é necessário porque scanf("%s", ...) deixa um caractere de nova linha no buffer,
        // o que pode interferir na próxima leitura com fgets().
    }

    printf("Digite o nome da cidade: \n");
    fgets(nomeDaCidade, sizeof(nomeDaCidade), stdin); // Lê o nome da cidade, incluindo espaços
    nomeDaCidade[strcspn(nomeDaCidade, "\n")] = 0;    // Remove o caractere de nova linha do nome da cidade

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%i", &populacao); // Lê o número de habitantes

    printf("Digite a área da cidade em quilometros quadrados: \n");
    scanf("%f", &areaEmKm); // Lê a área da cidade

    printf("Digite o número do PIB da cidade: \n");
    scanf("%f", &PIB); // Lê o PIB da cidade

    printf("Digite a quantidade em números de pontos turisticos na cidade: \n");
    scanf("%i", &numeroPontosTuristicos); // Lê a quantidade de pontos turísticos

    // Imprime os dados das duas cartas
    printf("\n---- Dados das Cartas ----\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);                            // Imprime o estado da primeira carta
    printf("Código: %s\n", codigoDoEstado1);                    // Imprime o código do estado da primeira carta
    printf("Nome da cidade: %s\n", nomeDaCidade1);              // Imprime o nome da cidade da primeira carta
    printf("População: %i\n", populacao1);                      // Imprime a população da primeira carta
    printf("Área: %.3f\n", areaEmKm1);                          // Imprime a área da primeira carta com 3 casas decimais
    printf("PIB: %.2f\n", PIB1);                                // Imprime o PIB da primeira carta com 2 casas decimais
    printf("Pontos turísticos: %i\n", numeroPontosTuristicos1); // Imprime o número de pontos turísticos da primeira carta

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado);                            // Imprime o estado da segunda carta
    printf("Código: %s\n", codigoDoEstado);                    // Imprime o código do estado da segunda carta
    printf("Nome da cidade: %s\n", nomeDaCidade);              // Imprime o nome da cidade da segunda carta
    printf("População: %i\n", populacao);                      // Imprime a população da segunda carta
    printf("Área: %.3f\n", areaEmKm);                          // Imprime a área da segunda carta com 3 casas decimais
    printf("PIB: %.2f\n", PIB);                                // Imprime o PIB da segunda carta com 2 casas decimais
    printf("Pontos turísticos: %i\n", numeroPontosTuristicos); // Imprime o número de pontos turísticos da segunda carta

    return 0;
}