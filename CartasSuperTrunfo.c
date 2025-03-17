#include <stdio.h>
 
int main(){

    int carta;
    char estado[50];
    char codigodacarta[5];
    char nomedacidade[50];
    int populacao, pontosturisticos;
    float area, pib;

    int carta2;
    char estado2[50];
    char codigodacarta2[5];
    char nomedacidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2;

    printf("Digite a carta:\n");
    scanf("%d", &carta);

    printf("Digite o estado:\n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigodacarta);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nomedacidade);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);

    printf("Digite a area:\n");
    scanf("%f", &area);

    printf("Digite o pib:\n");
    scanf("%f", &pib);

    printf("Digite o ponto turistico:\n");
    scanf("%d", &pontosturisticos);



    printf("Digite a carta2:\n");
    scanf("%d", &carta2);

    printf("Digite o estado2:\n");
    scanf("%s", &estado2);

    printf("Digite o codigo da carta2:\n");
    scanf("%s", &codigodacarta2);

    printf("Digite o nome da cidade2:\n");
    scanf("%s", &nomedacidade2);

    printf("Digite a populacao2:\n");
    scanf("%d", &populacao2);

    printf("Digite a area2:\n");
    scanf("%f", &area2);

    printf("Digite o pib2:\n");
    scanf("%f", &pib2);

    printf("Digite o ponto turistico2:\n");
    scanf("%d", &pontosturisticos2);
    
    printf("Carta: %d   Estado: %s\n", carta, estado);
    printf("Codigo da carta: %s     Nome da cidade:%s\n", codigodacarta, nomedacidade);
    printf("Populacao: %d   Area:%f\n", populacao, area);
    printf("Pib: %f     Pontos Turisticos:%d\n", pib, pontosturisticos);

    printf("Carta 2: %d         Estado 2: %s\n", carta2, estado2);
    printf("Codigo da carta 2: %s   Nome da cidade 2:%s\n", codigodacarta2, nomedacidade2);
    printf("Populacao 2: %d         Area 2:%f\n", populacao2, area2);
    printf("Pib 2: %f           Pontos Turisticos 2:%d\n", pib2, pontosturisticos2);

    return 0;
}