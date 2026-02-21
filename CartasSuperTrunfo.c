#include <stdio.h>
#include <string.h>

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
  int pontosTuristicos1, pontosTuristicos2;

  // Irei declarar a população como o tipo unsigned long int para comportar numeros maiores.
  
  unsigned long int  populacao1, populacao2;

  // Variável para declaração da área e pib em float.
  long double area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPercapita1, pibPercapita2, superPoder1, superPoder2;


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
  scanf("%lu", &populacao1);

  printf("Área (em km2): ");
  scanf("%Lf", &area1);

  printf("PIB: ");
  scanf("%Lf", &pib1);

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
  scanf("%lu", &populacao2);

  printf("Área (em km2): ");
  scanf("%Lf", &area2);

  printf("PIB: ");
  scanf("%Lf", &pib2);

  printf("Numero de Pontos turísticos: ");
  scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  /*Aqui irei exibir na tela o resultado das informações inseridas pelo usuário*/

  densidadePopulacional1 = populacao1 / area1;
  pibPercapita1 = (pib1 * 1000000000.0L) / (long double)populacao1;
  superPoder1 = (populacao1 + area1 + pib1 + pontosTuristicos1) + (1.0 / densidadePopulacional1);

  printf("\n");
  printf("Carta 1:\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigoCarta1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("Populaçao: %lu\n", populacao1);
  printf("Área: %.2Lf km2\n", area1);
  printf("PIB: %.2Lf bilhoes de reais\n", pib1);
  printf("Numero de Pontos turisticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2Lf hab/km2\n", densidadePopulacional1);
  printf("PIB per Capita: %.2Lf reais\n", pibPercapita1);
  printf("Super Poder: %.2Lf", superPoder1);
  
  densidadePopulacional2 = populacao2 / area2;
  pibPercapita2 = (pib2 * 1000000000.0L) / (long double)populacao2;
  superPoder2 = ((long double)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2) + (1.0L / densidadePopulacional2);

  printf("\n");
  printf("Carta 2:\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigoCarta2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("Populaçao: %lu\n", populacao2);
  printf("Área: %.2Lf km2\n", area2);
  printf("PIB: %.2Lf bilhoes de reais\n", pib2);
  printf("Numero de Pontos turisticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2Lf hab/km2\n", densidadePopulacional2);
  printf("PIB per Capita: %.2Lf reais\n", pibPercapita2);
  printf("Super Poder: %.2Lf", superPoder2);

  printf("\n");

  int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontosTuristicos, resultadoDensidadePopulacional, resultadoPibPercapita, resultadoSuperPoder;

  resultadoPopulacao = populacao1 > populacao2;
  resultadoArea = area1 > area2;
  resultadoPib = pib1 > pib2;
  resultadoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
  resultadoDensidadePopulacional = densidadePopulacional1 < densidadePopulacional2;
  resultadoPibPercapita = pibPercapita1 > pibPercapita2;
  resultadoSuperPoder = superPoder1 > superPoder2;

  printf("\n");
  printf("Comparacao das cartas:\n");
  printf("Populaçao: %d\n", resultadoPopulacao);
  printf("Área: %d\n", resultadoArea);
  printf("PIB: %d\n", resultadoPib);
  printf("Pontos Turisticos: %d\n", resultadoPontosTuristicos);
  printf("Densidade Populacional: %d\n", resultadoDensidadePopulacional);
  printf("PIB Per Capita: %d\n", resultadoPibPercapita);
  printf("Super Poder: %d\n", resultadoSuperPoder);

  
return 0;
} 
