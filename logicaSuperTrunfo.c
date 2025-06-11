#include <stdio.h>

int main(){

    char nome_1[30], nome_2[30];
    unsigned int populacao_1, populacao_2;
    float area_1, area_2;
    float pib_1, pib_2;
    unsigned pts_tur_1, pts_tur_2;

//Leitura dos dados da primeira carta

    printf("Digite o nome do País da primeira carta:\n");
    scanf("%s", nome_1);

    printf("Digite o número da população da primeira carta:\n");
    scanf("%u", &populacao_1);

    printf("Digite a área da primeira carta:\n");
    scanf("%f", &area_1);

    printf("Digite o número do PIB da primeira carta:\n");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos da primeira carta:\n");
    scanf("%u", &pts_tur_1);

//Leitura dos dados da segunda carta

    printf("Digite o nome do País da segunda carta:\n");
    scanf("%s", nome_2);

    printf("Digite o número da população da segunda carta:\n");
    scanf("%u", &populacao_2);

    printf("Digite a área da segunda carta:\n");
    scanf("%f", &area_2);

    printf("Digite o número do PIB da segunda carta:\n");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos da segunda carta:\n");
    scanf("%u", &pts_tur_2);

//Cálculo do PIB per capita e densidade demográfica das cartas

    float dens_demo_1 = (float) populacao_1 / area_1;
    float pib_percap_1 = (float) pib_1 / populacao_1;

    float dens_demo_2 = (float) populacao_2 / area_2;
    float pib_percap_2 = (float) pib_2 / populacao_2;

//conversão em bilhões

    float pib_1_bilhao = pib_1 / 1000000000;
    float pib_2_bilhao = pib_2 / 1000000000;

//saída dos dados e execução do desafio

    printf("\nCarta 1:\n");
    printf("Nome do país: %s\n", nome_1);
    printf("População: %u habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.4f bilhões de reais\n", pib_1_bilhao);
    printf("Pontos turísticos: %u\n", pts_tur_1);
    printf("Densidade Demográfica: %.2f hab/km²\n", dens_demo_1);
    printf("PIB per Capita: %.2f reais\n\n", pib_percap_1);

    printf("Carta 2:\n");
    printf("Nome do país: %s\n", nome_2);
    printf("População: %u habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.4f bilhões de reais\n", pib_2_bilhao);
    printf("Pontos turísticos: %u\n", pts_tur_2);
    printf("Densidade Demográfica: %.2f hab/km²\n", dens_demo_2);
    printf("PIB per Capita: %.2f reais\n\n", pib_percap_2);

//Menu para Comparação dos Valores das Cartas

    int opcao_1, opcao_2, resultado_1, resultado_2;

    printf("Escolha o primeiro atributo que deseja utilizar para a comparação.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &opcao_1);



    switch (opcao_1)
    {
    case 1:

        printf("\nComparação de Cartas (Atributo 1: População):\n");
        printf("Carta 1 - %s: %u habitantes\n", nome_1, populacao_1);
        printf("Carta 2 - %s: %u habitantes\n\n", nome_2, populacao_2);

        resultado_1 = populacao_1 > populacao_2 ? 1 : 0 ;
        resultado_1 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 2:

        printf("\nComparação de Cartas (Atributo 1: Área):\n");
        printf("Carta 1 - %s: %.2f km²\n", nome_1, area_1);
        printf("Carta 2 - %s: %.2f km²\n\n", nome_2, area_2);

        resultado_1 = area_1 > area_2 ? 1 : 0 ;
        resultado_1 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 3:

        printf("\nComparação de Cartas (Atributo 1: PIB):\n");
        printf("Carta 1 - %s: %.4f bilhões de reais\n", nome_1, pib_1_bilhao);
        printf("Carta 2 - %s: %.4f bilhões de reais\n\n", nome_2, pib_2_bilhao);

        resultado_1 = pib_1_bilhao > pib_2_bilhao ? 1 : 0 ;
        resultado_1 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 4:

        printf("\nComparação de Cartas (Atributo 1: Número de pontos turísticos):\n");
        printf("Carta 1 - %s: %u pontos turísticos\n", nome_1, pts_tur_1);
        printf("Carta 2 - %s: %u pontos turísticos\n\n", nome_2, pts_tur_2);

        resultado_1 = pts_tur_1 > pts_tur_2 ? 1 : 0 ;
        resultado_1 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 5:

        printf("\nComparação de Cartas (Atributo 1: Densidade Demográfica):\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nome_1, dens_demo_1);
        printf("Carta 2 - %s: %.2f hab/km²\n\n", nome_2, dens_demo_2);

        resultado_1 = dens_demo_1 < dens_demo_2 ? 1 : 0 ;
        resultado_1 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 6:

        printf("\nComparação de Cartas (Atributo 1: PIB per Capita):\n");
        printf("Carta 1 - %s: %.2f reais\n", nome_1, pib_percap_1);
        printf("Carta 2 - %s: %.2f reais\n\n", nome_2, pib_percap_2);

        resultado_1 = pib_percap_1 > pib_percap_2? 1 : 0 ;
        resultado_1 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    default:

        printf("\nOpção Inválida! Tente Novamente.\n\n");

        return 0;

    break;
    }

    printf("Escolha o segundo atributo que deseja utilizar para a comparação.\n");
    printf("Atenção! Você deve escolher um atributo diferente do primeiro.\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &opcao_2);

    if (opcao_2 == opcao_1){
        printf("\nVocê escolheu o mesmo atributo.\n");
    } else {
    switch (opcao_2)
    {
    case 1:

        printf("\nComparação de Cartas (Atributo 2: População):\n");
        printf("Carta 1 - %s: %u habitantes\n", nome_1, populacao_1);
        printf("Carta 2 - %s: %u habitantes\n\n", nome_2, populacao_2);

        resultado_2 = populacao_1 > populacao_2 ? 1 : 0 ;
        resultado_2 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 2:

        printf("\nComparação de Cartas (Atributo 2: Área):\n");
        printf("Carta 1 - %s: %.2f km²\n", nome_1, area_1);
        printf("Carta 2 - %s: %.2f km²\n\n", nome_2, area_2);

        resultado_2 = area_1 > area_2 ? 1 : 0 ;
        resultado_2 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 3:

        printf("\nComparação de Cartas (Atributo 2: PIB):\n");
        printf("Carta 1 - %s: %.4f bilhões de reais\n", nome_1, pib_1_bilhao);
        printf("Carta 2 - %s: %.4f bilhões de reais\n\n", nome_2, pib_2_bilhao);

        resultado_2 = pib_1_bilhao > pib_2_bilhao ? 1 : 0 ;
        resultado_2 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 4:

        printf("\nComparação de Cartas (Atributo 2: Número de pontos turísticos):\n");
        printf("Carta 1 - %s: %u pontos turísticos\n", nome_1, pts_tur_1);
        printf("Carta 2 - %s: %u pontos turísticos\n\n", nome_2, pts_tur_2);

        resultado_2 = pts_tur_1 > pts_tur_2 ? 1 : 0 ;
        resultado_2 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 5:

        printf("\nComparação de Cartas (Atributo 2: Densidade Demográfica):\n");
        printf("Carta 1 - %s: %.2f hab/km²\n", nome_1, dens_demo_1);
        printf("Carta 2 - %s: %.2f hab/km²\n\n", nome_2, dens_demo_2);

        resultado_2 = dens_demo_1 < dens_demo_2 ? 1 : 0 ;
        resultado_2 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    case 6:

        printf("\nComparação de Cartas (Atributo 2: PIB per Capita):\n");
        printf("Carta 1 - %s: %.2f reais\n", nome_1, pib_percap_1);
        printf("Carta 2 - %s: %.2f reais\n\n", nome_2, pib_percap_2);

        resultado_2 = pib_percap_1 > pib_percap_2? 1 : 0 ;
        resultado_2 == 1 ? printf("1 ponto para carta 1.\n\n") : printf("1 ponto para carta 2.\n\n") ;

    break;
    default:

        printf("\nOpção Inválida! Tente Novamente.\n\n");

        return 0;

    break;
    }
    }

    if (resultado_1 && resultado_2){
        printf("Parabéns! carta 1 venceu.\n");
    } else if (resultado_1 != resultado_2) {
        printf("Empate!\n");
    } else {
        printf("Parabéns! Carta 2 venceu.\n");
    }

    return 0;

}