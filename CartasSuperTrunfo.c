#include <stdio.h>

int main(){

    char estado[20];
    char codigo[10];
    char cidade[30];
    int populacao, turismo;
    float area, pib;

    printf("carta: 01 \n");

    printf("estado: ");
    scanf("%s", estado);

    printf("codigo: ");
    scanf("%s", codigo);

    printf("cidade: ");
    scanf("%s", cidade);

    printf("populacao: ");
    scanf("%d", &populacao);

    printf("turismo: ");
    scanf("%d", &turismo);

    printf("area: ");
    scanf("%f", &area);

    printf("pib: ");
    scanf("%f", &pib);

    printf("estado: %s - codigo: %s - cidade: %s\n", estado, codigo,cidade);
    printf("populacao: %d - turismo: %d\n", populacao, turismo);
    printf("area: %f - pib: %f\n", area, pib);

    printf("carta: 02 \n");

    printf("estado: ");
    scanf("%s", estado);

    printf("codigo: ");
    scanf("%s", codigo);

    printf("cidade: ");
    scanf("%s", cidade);

    printf("populacao: ");
    scanf("%d", &populacao);

    printf("turismo: ");
    scanf("%d", &turismo);

    printf("area: ");
    scanf("%f", &area);

    printf("pib: ");
    scanf("%f", &pib);

    printf("estado: %s - codigo: %s - cidade: %s \n", estado, codigo, cidade);
    printf("populacao: %d - turismo: %d \n",populacao, turismo);
    printf("area: %f - pib: %f \n", area, pib);

    return 0;



    







}