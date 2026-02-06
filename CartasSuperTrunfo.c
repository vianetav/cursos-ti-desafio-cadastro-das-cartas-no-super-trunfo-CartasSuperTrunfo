#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1,estado2; //será somente uma letra representando o Estado
  char codigodacarta1,cidade1,codigodacarta2,cidade2;
  //int populacao1,pontosturisticos1,populacao2,pontosturisticos2;
  
  float area1,pib1,area2,pib2;
  
  // Área para entrada de dados
  printf("Primeiro passo do nosso jogo! Inserir os valores para a carta 1: \n");
  printf("Estado da carta 1: \n");
  scanf("%c", &estado1);
  printf("Código da carta 1: \n");
  scanf("%s",&codigodacarta1);
  printf("Nome da cidade 1: \n");
  scanf("%s", &cidade1);
  printf("População da cidade 1: \n");
  scanf("%f", &populacao1);
  printf("Área da cidade 1 (em quilômetros quadrados): \n");
  scanf("%f", &area1);
  printf("PIB da cidade 1: \n");
  scanf("%f", &pib1);
  printf("Número de Pontos Turísticos da cidade 1: \n");
  scanf("%i", &pontosturísticos1);

  printf("Insira os dados para a carta 2: \n");
  printf("Estado da carta 2: \n");
  scanf("%c", &estado2);
  printf("Código da carta 2: \n");
  scanf("%s",&codigodacarta2);
  printf("Nome da cidade 2: \n");
  scanf("%s", &cidade2);
  printf("População da cidade 2: \n");
  scanf("%f", &populacao2);
  printf("Área da cidade 2 (em quilômetros quadrados): \n");
  scanf("%f", &area2);
  printf("PIB da cidade 2: \n");
  scanf("%f", &pib2);
  printf("Número de Pontos Turísticos da cidade 2: \n");
  scanf("%i", &pontosturísticos2);

  // Área para exibição dos dados da cidade
  printf("Dados inseridos para a carta 1: \n");
  printf("Estado: %c \n",estado1);
  printf("Código da carta 1: %s \n",codigodacarta1);
  printf("Nome da cidade: %s \n", cidade1);
  printf("População: %i \n",populacao1);
  printf("Área (em Km2): %f \n",area1);
  printf("PIB: %f \n", pib1);
  printf("Número de pontos turísticos: %i \n", pontosturisticos1);

  printf("Dados inseridos para a carta 2: \n");
  printf("Estado: %c \n",estado2);
  printf("Código da carta 2: %s \n",codigodacarta2);
  printf("Nome da cidade: %s \n", cidade2);
  printf("População: %i \n",populacao2);
  printf("Área (em Km2): %f \n",area2);
  printf("PIB: %f \n", pib2);
  printf("Número de pontos turísticos: %i \n", pontosturisticos2);
 
  return 0;
} 
