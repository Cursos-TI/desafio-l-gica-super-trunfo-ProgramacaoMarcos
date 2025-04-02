#include <stdio.h>

int main() {
    int opcao;
    printf("\nBEM VINDO AO SUPER TRUNFO CIDADES \n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:");
    scanf("%d", &opcao);

    if (opcao ==1) {
    char Estado1[50], Estado2[50];
    char CodigoCarta1[50], CodigoCarta2[50];
    char NomeCidade1[50], NomeCidade2[50];
    int Populacao1, Populacao2;
    float Areakm21, Areakm22;
    float PIB1, PIB2;
    int NumeroPontosTuristicos1, NumeroPontosTuristicos2;
    float Densidadepopulacional1, Densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;

    printf("Digite o Estado da Primeira Cidade: ");
    scanf(" %49s", Estado1);
    
    printf("Digite o Código da Carta: ");
    scanf(" %49s", CodigoCarta1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", NomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &Populacao1);

    printf("Digite a Área km²: ");
    scanf("%f", &Areakm21);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &NumeroPontosTuristicos1);


    if (Areakm21 <= 0) {
        printf("Erro: A área deve ser maior que zero.\n");
        return 1;
    }

    Densidadepopulacional1 = Populacao1 / Areakm21;
    PIBpercapita1 = Populacao1 > 0 ? PIB1 / Populacao1 : 0;

    printf("Digite o Estado da Segunda Cidade: ");
    scanf(" %49s", Estado2);
    
    printf("Digite o Código da Carta: ");
    scanf(" %49s", CodigoCarta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %49s", NomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &Populacao2);

    printf("Digite a Área km²: ");
    scanf("%f", &Areakm22);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &NumeroPontosTuristicos2);

    if (Areakm22 <= 0) {
        printf("Erro: A área deve ser maior que zero.\n");
        return 1;
    }
    
    Densidadepopulacional2 = Populacao2 / Areakm22;
    PIBpercapita2 = Populacao2 > 0 ? PIB2 / Populacao2 : 0;

    printf("\n----- Carta 1 -----\n");
    printf("Estado: %s\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f\n", 
           Estado1, CodigoCarta1, NomeCidade1, Populacao1, Areakm21, PIB1, NumeroPontosTuristicos1, Densidadepopulacional1, PIBpercapita1);

    printf("\n----- Carta 2 -----\n");
    printf("Estado: %s\nCódigo da Carta: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade populacional: %.2f hab/km²\nPIB per capita: %.2f\n", 
           Estado2, CodigoCarta2, NomeCidade2, Populacao2, Areakm22, PIB2, NumeroPontosTuristicos2, Densidadepopulacional2, PIBpercapita2);


    int selecione;
    printf("\nSELECIONE UM ATRIBUTO PARA COMPARAÇÃO:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional (MENOR VENCE)\n6 - PIB per capita\n");
    printf("Digite o número desejado: ");
    scanf("%d", &selecione);

    float valor1, valor2;
    int menorGanha = 0;

    switch (selecione) {
        case 1:
            valor1 = Populacao1; valor2 = Populacao2;
            break;
        case 2:
            valor1 = Areakm21; valor2 = Areakm22;
            break;
        case 3:
            valor1 = PIB1; valor2 = PIB2;
            break;
        case 4:
            valor1 = NumeroPontosTuristicos1; valor2 = NumeroPontosTuristicos2;
            break;
        case 5:
            valor1 = Densidadepopulacional1; valor2 = Densidadepopulacional2; 
            menorGanha = 1;
            break;
        case 6:
            valor1 = PIBpercapita1; valor2 = PIBpercapita2;
            break;
        default:
            printf("Atributo inválido!\n");
            return 0;
    }

    printf("\nComparação do atributo selecionado:\n");
    printf("Carta 1 - %s: %.2f\n", NomeCidade1, valor1);
    printf("Carta 2 - %s: %.2f\n", NomeCidade2, valor2);

    if ((menorGanha && valor1 < valor2) || (!menorGanha && valor1 > valor2)) {
        printf("\nResultado: Carta 1 (%.s) venceu com o valor %.2f! \n", NomeCidade1 ,valor1);
    } else if ((menorGanha && valor1 > valor2) || (!menorGanha && valor1 < valor2)) {
        printf("\nResultado: Carta 2 (%.s) venceu  com o valor %.2f!\n", NomeCidade2 , valor2);
    } else {
        printf("\nResultado: Empate! As duas cidades possuem o mesmo valor para o atributo escolhido.\n");
    } 
    
}else if (opcao ==2 ) {
        printf("\nRegras do jogo:\n");
        printf("- O jogo consiste na comparação de atributos entre duas cidades.\n");
        printf("- O jogador escolhe um atributo e a cidade com o melhor valor vence.\n");
        printf("- Para Densidade Populacional, vence a cidade com o menor valor.\n");
        printf("- Em caso de empate, nenhuma cidade vence.\n");
    } else if (opcao == 3) {
        printf("Saindo do jogo...\n");
    } else {
        printf("Opção inválida!\n");


    }

    printf("\nObrigado por jogar SUPER TRUNFO!\n");

    return 0;
}