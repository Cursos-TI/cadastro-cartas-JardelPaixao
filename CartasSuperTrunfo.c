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
  int pontosTuristicos1, pontosTuristicos2, atributoComparativo;

  // Irei declarar a população como o tipo unsigned long int para comportar numeros maiores.
  
  unsigned long int  populacao1, populacao2;

  // Variável para declaração da área e pib em float.
  long double area1, area2, pib1, pib2, densidadePopulacional1, densidadePopulacional2, pibPercapita1, pibPercapita2, superPoder1, superPoder2;


  // Área para entrada de dados
  /*Na sequência abaixo, irei fazer o comando de instrução para o usuário inserir o
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
  superPoder1 = ((long double)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPercapita1) + (1.0L / densidadePopulacional1);

  /*printf("\n");
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
  printf("Super Poder: %.2Lf", superPoder1);*/
  
  densidadePopulacional2 = populacao2 / area2;
  pibPercapita2 = (pib2 * 1000000000.0L) / (long double)populacao2;
  superPoder2 = ((long double)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPercapita2) + (1.0L / densidadePopulacional2);

  /*printf("\n");
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
  printf("Super Poder: %.2Lf", superPoder2);*/


  printf("\n");
  printf("Escolha o atributo para batalhar:\n");
  printf("##%s X %s##\n", cidade1, cidade2);
  printf(" 1- População\n 2- Área\n 3- PIB\n 4- Números de pontos Turisticos\n 5- Densidade Demográfica\n");
  scanf("%d", &atributoComparativo);

  printf("\n");

  switch(atributoComparativo)
  {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("%s\n População\n %lu\n %s ganhou!\n",cidade1, populacao1, codigoCarta1); 
        }

        else if (populacao2 > populacao1)
        {
           printf("%s\n População\n %lu\n %s ganhou!\n",cidade2, populacao2, codigoCarta2); 
        }
        else
        {
            printf("Empate!\n");
        }
        break;

        case 2:
        if (area1 > area2)
        {
            printf("%s\n Área\n %.2Lf\n %s ganhou!\n",cidade1, area1, codigoCarta1); 
        }

        else if (area2 > area1)
        {
           printf("%s\n Área\n %.2Lf\n %s ganhou!\n",cidade2, area2, codigoCarta2); 
        }
        else
        {
            printf("Empate!\n");
        }
        break;

        case 3:
        if (pib1 > pib2)
        {
            printf("%s\n PIB\n %.2Lf\n %s ganhou!\n",cidade1, pib1, codigoCarta1); 
        }

        else if (pib2 > pib1)
        {
           printf("%s\n PIB\n %.2Lf\n %s ganhou!\n",cidade2, pib2, codigoCarta2); 
        }

        else
        {
            printf("Empate!\n");
        }
        break;

        
        case 4:
        if (pontosTuristicos1 > pontosTuristicos2)
        {
            printf("%s\n Pontos Turísticos\n %d\n %s ganhou!\n",cidade1, pontosTuristicos1, codigoCarta1); 
        }

        else if (pontosTuristicos2 > pontosTuristicos1)
        {
           printf("%s\n Pontos Turísticos\n %d\n %s ganhou!\n",cidade2, pontosTuristicos2, codigoCarta2); 
        }
        else
        {
            printf("Empate!\n");
        }
        break;


        case 5:
        if (densidadePopulacional1 < densidadePopulacional2)
        {
            printf("%s\n Densidade Demográfica\n %.2Lf\n %s ganhou!\n",cidade1, densidadePopulacional1, codigoCarta1); 
        }

        else if (densidadePopulacional2 < densidadePopulacional1)
        {
           printf("%s\n Densidade Demográfica\n %.2Lf\n %s ganhou!\n",cidade2, densidadePopulacional2, codigoCarta2); 
        }

        else
        {
            printf("Empate!\n");
        }
        break;
        
        default:
        printf("Opção Inválida!\n");
  }

  printf("\n");

  //Imprimir na tela o resultado da comparação e do vencedor.
  /*printf("\n");
  printf("Comparação das cartas (Atributo: Pontos Turísticos):\n");
  printf("\n");
  printf("Carta 1 - %s : %d\n", cidade1, pontosTuristicos1);
  printf("Carta 2 - %s : %d\n", cidade2, pontosTuristicos2);
  if (pontosTuristicos1 > pontosTuristicos2 )
  {
      printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
  }
  else 
  {
      printf("Carta 2 (%s) venceu!\n", cidade2);
  }*/



  
return 0;
} 
