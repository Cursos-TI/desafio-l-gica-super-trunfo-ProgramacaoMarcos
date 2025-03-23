#include <stdio.h>

int main(){
    char Estado1[50], Estado2[50];
    char CodigoCarta1[50], CodigoCarta2[50];
    char NomeCidade1[50], NomeCidade2[50];
    int Populacao1, Populacao2;
    float Areakm21, Areakm22;
    float PIB1, PIB2;
    int NumeroPontosTuristicos1, NumeroPontosTuristicos2;
    float Densidadepopulacional1, Densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;

    printf("BEM VINDO AO JOGO SUPER TRUNFO! \n");

    printf("Digite o Estado da Primeira Cidade: \n");
    scanf("%49s", Estado1);
    
    printf("Digite o Código da Carta: \n");
    scanf("%49s", CodigoCarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%49s", NomeCidade1);

    printf("Digite a População: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área km²: \n");
    scanf("%f", &Areakm21);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumeroPontosTuristicos1);

    if (Areakm21 <= 0) {
        printf("Erro: A área deve ser maior que zero.\n");
        return 1;
    }

    Densidadepopulacional1 = Populacao1 / Areakm21;
    PIBpercapita1 = Populacao1 > 0 ? PIB1 / Populacao1 : 0;

    printf("Digite o Estado da Segunda Cidade: \n");
    scanf("%49s", Estado2);
    
    printf("Digite o Código da Carta: \n");
    scanf("%49s", CodigoCarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%49s", NomeCidade2);

    printf("Digite a População: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área km²: \n");
    scanf("%f", &Areakm22);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &NumeroPontosTuristicos2);

    
    if (Areakm22 <= 0) {
        printf("Erro: A área deve ser maior que zero.\n");
        return 1;
    }
    
    Densidadepopulacional2 = Populacao2 / Areakm22;
    PIBpercapita2 = Populacao2 > 0 ? PIB2 / Populacao2 : 0;

    printf("\n----- Carta 1 -----\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", CodigoCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Areakm21);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", Densidadepopulacional1);
    printf("PIB per capita: %.2f\n", PIBpercapita1);

    printf("\n----- Carta 2 -----\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", CodigoCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", Areakm22);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", Densidadepopulacional2);
    printf("PIB per capita: %.2f\n", PIBpercapita2);
    
    int selecione;
    printf ("\n SELECIONE UM ATRIBUTO PARA COMPARAÇÃO: \n");
    printf ("1-População\n 2-Área\n 3-PIB \n 4-Pontos Turisticos \n 5-Densidade Populacional \n 6-PIB per capita \n Digite o número desejado:");
    scanf ("%d", &selecione);

    float valor1, valor2;
    int menorGanha = 0;

    if (selecione == 1) {
        valor1 = Populacao1; valor2 = Populacao2;
    } else if (selecione== 2) {
        valor1 = Areakm21; valor2 = Areakm22;
    } else if (selecione == 3) {
        valor1 = PIB1; valor2 = PIB2;
    } else if (selecione == 4) {
        valor1 = NumeroPontosTuristicos1; valor2 = NumeroPontosTuristicos2;
    } else if (selecione == 5) {
        valor1 = Densidadepopulacional1; valor2 = Densidadepopulacional2; menorGanha = 1;
    } else if (selecione == 6) {
        valor1 = PIBpercapita1 ; valor2 = PIBpercapita2 ;
    } else {
        printf("Atributo inválido!\n");
        return 1;
    }

    printf("Carta 1 - %s: %.2f\n", NomeCidade1, valor1);
    printf("Carta 2 - %s: %.2f\n", NomeCidade2, valor2);

    if ((menorGanha && valor1 < valor2) || (!menorGanha && valor1 > valor2)) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", NomeCidade1);
    } else if ((menorGanha && valor1 > valor2) || (!menorGanha && valor1 < valor2)) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", NomeCidade2);
    } else {
        printf("\nResultado: Empate! As duas cidades possuem o mesmo valor para o atributo escolhido.\n");
    }

    printf("\nObrigado por jogar SUPER TRUNFO!\n");

    return 0;
}