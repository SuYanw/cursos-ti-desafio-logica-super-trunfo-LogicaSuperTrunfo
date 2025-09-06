#include <stdio.h>



// declarando strings
char estado1[2], codigo1[4], cidade1[50];
char estado2[2], codigo2[4], cidade2[50];


// declarandos numeros inteiros
int populacao1, pturisticos1;
int populacao2, pturisticos2;
int poder1, poder2;

// declarando numeros flutuantes
float popl1, area1, pib1, denspopulacional1, pipcapta1;
float popl2, area2, pib2, denspopulacional2, pipcapta2;


int atributo1, atributo2;

int EscolherAtributo()
{

    if(atributo1 == 0){ 
        printf("\n\n\nPor favor, ecolha o primeiro atributo para comparação:\n"); 
    }else if(atributo2 == 0){
        printf("\n\n\nPor favor, ecolha o segundo atributo para comparação:\n");
    }
    else{
        return 0;
    }

    int atributo;
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Super Poder\n");
    printf("Atributo: ");
    scanf("%d", &atributo);

    int tributo_escolhido;
    switch(atributo){
        case 1: // População
            printf("Você escolheu População como comparativo!\n");
            tributo_escolhido = 1;
            break;
        case 2: // Area
            printf("Você escolheu Area como comparativo!\n");
            tributo_escolhido = 2;
            break;
        case 3: // PIB
            printf("Você escolheu PIB como comparativo!\n");
            tributo_escolhido = 3;
            break;
        case 4: // Pontos Turisticos
            printf("Você escolheu Pontos Turisticos como comparativo!\n");
            tributo_escolhido = 4;
            break;
        case 5: // Super Poder
            printf("Você escolheu Super Poder como comparativo!\n");
            tributo_escolhido = 5;
            break;
        default:
            tributo_escolhido = 0;
            break;
    }
    return tributo_escolhido;
}

int CalcularAtributo(int atributo)
{
    switch(atributo){
        case 1: // População
            printf("Método de comparação: POPULAÇÃO\n");
            printf("População da carta 1: %d, População da carta2: %d\n", populacao1, populacao2);
            if(populacao1 > populacao2){
                printf("Vencedor é a carta1\n");
            }else if(populacao1 < populacao2){
                printf("Vencedor é a carta2\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 2: // Area
            printf("Método de comparação: ÁREA\n");
            printf("Área da carta 1: %.2f, Área da carta2: %.2f\n", area1, area2);
            if(area1 > area2){
                printf("Vencedor é a carta1\n");
            }else if(area1 < area2){
                printf("Vencedor é a carta2\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 3: // PIB
            printf("Método de comparação: PIB\n");
            printf("Área da carta 1: %.2f, Área da carta2: %.2f\n", pib1, pib2);
            if(pib1 > pib2){
                printf("Vencedor é a carta1\n");
            }else if(pib1 < pib2){
                printf("Vencedor é a carta2\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 4: // Pontos Turisticos
            printf("Método de comparação: POPULAÇÃO\n");
            printf("Pontos turisticos da carta 1: %d, Pontos Turisticos da carta2: %d\n", pturisticos1, pturisticos2);
            if(pturisticos1 > pturisticos2){
                printf("Vencedor é a carta1\n");
            }else if(pturisticos1 < pturisticos2){
                printf("Vencedor é a carta2\n");
            }else{
                printf("Empate!\n");
            }
            break;
        case 5: // Super Poder
            printf("Método de comparação: SUPER PODER\n");
            printf("Super poder da carta 1: %d, Super poder da carta2: %d\n", poder1, poder2);
            if(poder1 > poder2){
                printf("Vencedor é a carta1\n");
            }else if(poder1 < poder2){
                printf("Vencedor é a carta2\n");
            }else{
                printf("Empate!\n");
            }
            break;
        default:
            break;
    }
    return 0;
}


int main() {

    printf("Informe os dados da Carta1:\n");
    printf("Bem vindo ao Lógica Super Trunfo!\n");
    printf("Preencha com dados da Carta1 e Carta2\n");
    printf("Após preencher os dados, escolha método de comparação\n\n");


    
    printf("Estado:");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade1, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pturisticos1);

    printf("Super Poder: ");
    scanf("%d", &poder1); 

    printf("\n\nDados da Carta1:");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pturisticos1);
    denspopulacional1 = (float)populacao1 / area1;
    printf("Densidade Populacional: %.2f\n", denspopulacional1);
    pipcapta1 = (float) populacao1 / pib1;
    printf("PIB per Capita: %.2f\n", pipcapta1);
    printf("Super Poder: %d\n", poder1);

    printf("\n\n\n\n");

    printf("Informe os dados da Carta2:\n");
    printf("Estado:");

    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    getchar();
    fgets(cidade2, 50, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pturisticos2);

    printf("Super Poder: ");
    scanf("%d", &poder2); 

    printf("\n\nDados da Carta2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pturisticos2);
    denspopulacional2 = (float)populacao2 / area2;
    printf("Densidade Populacional: %.2f\n", denspopulacional2);
    pipcapta2 = (float) populacao2 / pib2;
    printf("PIB per Capita: %.2f\n", pipcapta2);
    printf("Super Poder: %d\n", poder2);

   

    atributo1 = EscolherAtributo();
    while(atributo1 < 1 || atributo1 > 5){
        printf("Opção inválida!\n");
        atributo1 = EscolherAtributo();
    }

    atributo2 = EscolherAtributo();
    while(atributo2 < 1 || atributo2 > 5){
        printf("Opção inválida!\n");
        atributo2 = EscolherAtributo();
    }

    CalcularAtributo(atributo1);
    printf("\n\nIniciando segunda comparação:\n\n");
    CalcularAtributo(atributo2);
    return 0;
}
