#include <stdio.h>

int main() {

  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char nomeCidade1[50], nomeCidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int ptTuristico1, ptTuristico2;
  //Cadastro da primeira carta.
  printf("Cadastre a primeira carta:\n");
  printf("Digite a letra que representa o estado:\n");
  scanf("%c", &estado1);
  printf("Digite o código da carta:\n");
  scanf("%s", &codigo1);
  printf("Digite o nome da cidade:\n");
  scanf("%s", &nomeCidade1);
  printf("Digite o número de habitantes:\n");
  scanf("%d", &populacao1);
  printf("Digite a Área:\n");
  scanf("%f", &area1);
  printf("Digite o PIB:\n");
  scanf("%f", &pib1);
  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &ptTuristico1);
  printf("\nCarta: 01\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado1, codigo1, nomeCidade1, populacao1, area1, pib1, ptTuristico1);
  //Cadastro da segunda carta.
  printf("\nCadastre a segunda carta:\n");
  printf("Digite a letra que representa o estado:\n");
  scanf(" %c", &estado2);// erro de leitura, necessário espaço para corrigir
  printf("Digite o código da carta:\n");
  scanf("%s", &codigo2);
  printf("Digite o nome da cidade:\n");
  scanf("%s", &nomeCidade2);
  printf("Digite o número de habitantes:\n");
  scanf("%d", &populacao2);
  printf("Digite a Área:\n");
  scanf("%f", &area2);
  printf("Digite o PIB:\n");
  scanf("%f", &pib2);
  printf("Digite o número de pontos turísticos:\n");
  scanf("%d", &ptTuristico2);

  printf("\nCarta: 02\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado2, codigo2, nomeCidade2, populacao2, area2, pib2, ptTuristico2);
  
return 0;
} 
