#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  // Variável para declaração dos estados em char.
  char estado1, estado2;

  // Variável para declaração das cidades e códigos das cartas em string.
  char cidade1[50], cidade2[50], codigoCarta1[50], codigoCarta2[50];

  // Variável para declaração dos números de populaçao e pontos turisticos em int.
  int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;

  // Variável para declaração da área e pib em float.
  float area1, area2, pib1, pib2;


  // Área para entrada de dados
  /*Na sequência abaixo, irei fazer o comando de instrução para o usuário inserir
  dado necessário para a carta e em seguida a leitura do mesmo e guardando cada um
  em suas respectivas variáveis*/
  printf("Digite os dados da carta 1:\n");
  printf("Estado: ");
  scanf(" %c", &estado1);
  getchar();

  printf("Codigo da carta: ");
  fgets(codigoCarta1, 50, stdin);
  codigoCarta1[strcspn(codigoCarta1, "\n")]= '\0';

  printf("Nome da cidade: ");
  fgets(cidade1, 50, stdin);
  cidade1[strcspn(cidade1, "\n")]= '\0';

  printf("População: ");
  scanf("%d", &populacao1);

  printf("Área (em km2): ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de Pontos turísticos: ");
  scanf("%d", &pontosTuristicos1);

  printf("\n");

  printf("Digite os dados da carta 2:\n");
  printf("Estado: ");
  scanf(" %c", &estado2);
  getchar();

  printf("Codigo da carta: ");
  fgets(codigoCarta2, 50, stdin);
  codigoCarta2[strcspn(codigoCarta2, "\n")] = '\0';

  printf("Nome da cidade: ");
  fgets(cidade2, 50, stdin);
  cidade2[strcspn(cidade2, "\n")]= '\0';

  printf("População: ");
  scanf("%d", &populacao2);

  printf("Área (em km2): ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de Pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  /*Aqui irei exibir na tela o resultado das informações inseridas pelo usuário*/
  printf("\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populaçao: %d\n", populacao1);
  printf("Área: %.2f km2\n", area1);
  printf("PIB: %.2lf bilhoes de reais\n", pib1);
  printf("Numero de Pontos turisticos: %d\n", pontosTuristicos1);
  
  printf("\n");
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populaçao: %d\n", populacao2);
  printf("Área: %.2f km2\n", area2);
  printf("PIB: %.2lf bilhoes de reais\n", pib2);
  printf("Numero de Pontos turisticos: %d\n", pontosTuristicos2);
  
return 0;
} 
