#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ptTuristico1, ptTuristico2;
    int escolha1, escolha2, resultado1, resultado2;
    float atrib1Carta1, atrib1Carta2, atrib2Carta1, atrib2Carta2, resultAtributo1, resultAtributo2;
    float densPopulacional1, densPopulacional2;
    float pibPerCapita1, pibPerCapita2;
   
//Cadastro da primeira carta.
    printf("Cadastre a primeira carta:\n");
    printf("Digite a letra que representa o estado:\n");
    scanf("%c", &estado1);
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomeCidade1);
    printf("Digite o número de habitantes:\n");
    scanf(" %lu", &populacao1);
    printf("Digite a Área:\n");
    scanf(" %f", &area1);
    printf("Digite o PIB:\n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf(" %d", &ptTuristico1);
//cálculos da primeira carta
    densPopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (float) (pib1 * 1000000000) / populacao1;
    
    printf("\nCarta: 01\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado1, codigo1, nomeCidade1, populacao1, area1, pib1, ptTuristico1);
    printf("Densidade Populacional: %.2f hab/Km²\nPib per Capita: %.2f reais\n", densPopulacional1, pibPerCapita1);
    
//Cadastro da segunda carta.
    printf("\nCadastre a segunda carta:\n");
    printf("Digite a letra que representa o estado:\n");
    scanf(" %c", &estado2);// erro de copilação, necessário espaço para corrigir
    printf("Digite o código da carta:\n");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomeCidade2);
    printf("Digite o número de habitantes:\n");
    scanf("%lu", &populacao2);
    printf("Digite a Área:\n");
    scanf(" %f", &area2);
    printf("Digite o PIB:\n");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &ptTuristico2);
//cálculos da segunda carta
    densPopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (float) (pib2 * 1000000000) / populacao2;
    
    printf("\nCarta: 02\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f Km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado2, codigo2, nomeCidade2, populacao2, area2, pib2, ptTuristico2);
    printf("Densidade Populacional: %.2f hab/Km²\nPib per Capita: %.2f reais\n", densPopulacional2, pibPerCapita2);
    
//Menu interativo e resultado do jogo
    printf("\nEscolha 2 atributos diferentes para competir:\n");
    printf("01. População;\n");
    printf("02. Área;\n");
    printf("03. PIB;\n");
    printf("04. Pontos Turísticos;\n");
    printf("05. Densidade Popolacional.\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);
    printf("Escolha o segundo atributo: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2){
        printf("Opção inválida! Os atributos são iguais.");
    } else if (escolha1 > 5 || escolha1 <1) {
        printf("Primeiro atributo inválido, tente novamente.\n"); 
    } else if (escolha2 > 5 || escolha2 <1) {
        printf("Segundo atributo inválido, tente novamente.");
    } else {
        printf("Carta 01 (%s) vs Carta 02 (%s)\n", nomeCidade1, nomeCidade2);
        switch (escolha1) {
            case 1:
                printf("Atributo 1 - População: Carta 01: %lu vs Carta 02: %lu\n", populacao1, populacao2);
                resultado1 = populacao1 > populacao2 ? 1 : 0;
                atrib1Carta1 = populacao1;
                atrib1Carta2 = populacao2;
                break;
            case 2:
                printf("Atributo 1 - Área: Carta 01: %.2f vs Carta 02: %.2f\n", area1, area2);
                resultado1 = area1 > area2 ? 1 : 0;
                atrib1Carta1 = area1;
                atrib1Carta2 = area2;
                break;
            case 3:
                printf("Atributo 1 - PIB: Carta 01: %.2f vs Carta 02: %.2f\n", pib1, pib2);
                resultado1 = pib1 > pib2 ? 1 : 0;
                atrib1Carta1 = pib1;
                atrib1Carta2 = pib2;
                break;
            case 4:
                printf("Atributo 1 - Pontos Turísticos: Carta 01: %d vs Carta 02: %d\n", ptTuristico1, ptTuristico2);
                resultado1 = ptTuristico1 > ptTuristico2 ? 1 : 0;
                atrib1Carta1 = ptTuristico1;
                atrib1Carta2 = ptTuristico2;
                break;
            case 5:
                printf("Atributo 1 - Dens. Populacional: Carta 01: %.2f vs Carta 02: %.2f\n", densPopulacional1, densPopulacional2);
                resultado1 = densPopulacional1 < densPopulacional2 ? 1 : 0;
                atrib1Carta1 = densPopulacional1;
                atrib1Carta2 = densPopulacional2;
                break;
        }
        switch (escolha2)
        {
            case 1:
                printf("Atributo 2 - População: Carta 01: %lu vs Carta 02: %lu\n", populacao1, populacao2);
                resultado2 = populacao1 > populacao2 ? 1 : 0;
                atrib2Carta1 = populacao1;
                atrib2Carta2 = populacao2;
                break;
            case 2:
                printf("Atributo 2 - Área: Carta 01: %.2f vs Carta 02: %.2f\n", area1, area2);
                resultado2 = area1 > area2 ? 1 : 0;
                atrib2Carta1 = area1;
                atrib2Carta2 = area2;
                break;
            case 3:
                printf("Atributo 2 - PIB: Carta 01: %.2f vs Carta 02: %.2f\n", pib1, pib2);
                resultado2 = pib1 > pib2 ? 1 : 0;
                atrib2Carta1 = pib1;
                atrib2Carta2 = pib2;
                break;
            case 4:
                printf("Atributo 2 - Pontos Turísticos: Carta 01: %d vs Carta 02: %d\n", ptTuristico1, ptTuristico2);
                resultado2 = ptTuristico1 > ptTuristico2 ? 1 : 0;
                atrib2Carta1 = ptTuristico1;
                atrib2Carta2 = ptTuristico2;
                break;
            case 5:
                printf("Atributo 2 - Dens. Populacional: Carta 01: %.2f vs Carta 02: %.2f\n", densPopulacional1, densPopulacional2);
                resultado2 = densPopulacional1 < densPopulacional2 ? 1 : 0;
                atrib2Carta1 = densPopulacional1;
                atrib2Carta2 = densPopulacional2;
                break;           
        }
    resultAtributo1 = (float) atrib1Carta1 + atrib2Carta1;
    resultAtributo2 = (float) atrib1Carta2 + atrib2Carta2;
    printf("Total Carta 01: %.2f vs Total Carta 02: %.2f\n", resultAtributo1, resultAtributo2);
    if (resultado1 && resultado2){
        printf("Carta 01 Venceu!!!\n");
    } else if (resultado1 != resultado2){
        printf("As Cartas Empataram!\n");
    } else {
        printf("Carta 02 Venceu!!!\n");
    }
    }

return 0;
}