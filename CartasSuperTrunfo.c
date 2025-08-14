#include <stdio.h>

int main(){

    char estado1[20] , estado2[20];
    char codigo1[10] , codigo2[10];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2, turismo1, turismo2 ;
    float area1, area2, pib1, pib2;
    float Densidade_Populacional1, Densidade_Populacional2, Pib_Per_Capta1, Pib_Per_Capta2;
    

    printf("carta: 01 \n");

    printf("estado1: ");
    scanf(" %19[^\n]", estado1);

    printf("codigo1: ");
    scanf("%s", codigo1);

    printf("cidade1: ");
    scanf(" %29[^\n]", cidade1);

    printf("populacao1: ");
    scanf("%d", &populacao1);

    printf("turismo1: ");
    scanf("%d", &turismo1);

    printf("area1: ");
    scanf("%f", &area1);

    printf("pib1: ");
    scanf("%f", &pib1);

    if (area1 != 0.0f) {Densidade_Populacional1 = (float)populacao1 / area1;} else {Densidade_Populacional1 = 0.0f;}

    if (populacao1 != 0.0f) {Pib_Per_Capta1 = pib1 * 1000000000.0f / populacao1;} else {Pib_Per_Capta1 = 0.0f;}

    printf("estado1: %s - codigo1: %s - cidade1: %s\n", estado1, codigo1,cidade1);
    printf("populacao1: %d - turismo1: %d\n", populacao1, turismo1);
    printf("area1: %f - pib1: %f\n", area1, pib1);
    printf("Densidade_Populacional1: %.2f - Pib_Per_capta1: %.2f\n",Densidade_Populacional1, Pib_Per_Capta1);

    printf("carta: 02 \n");

    printf("estado2: ");
    scanf(" %19[^\n]", estado2);

    printf("codigo2: ");
    scanf("%s", codigo2);

    printf("cidade2: ");
    scanf(" %29[^\n]", cidade2);

    printf("populacao2: ");
    scanf("%d", &populacao2);

    printf("turismo2: ");
    scanf("%d", &turismo2);

    printf("area2: ");
    scanf("%f", &area2);

    printf("pib2: ");
    scanf("%f", &pib2);

    if (area2 != 0.0f) {Densidade_Populacional2 = (float)populacao2 / area2;} else {Densidade_Populacional2 = 0.0f;}

    if (populacao2 != 0.0f) {Pib_Per_Capta2 = pib2 * 1000000000.0f / populacao2;} else {Pib_Per_Capta2 = 0.0f;}

    printf("estado2: %s - codigo2: %s - cidade2: %s \n", estado2, codigo2, cidade2);
    printf("populacao2: %d - turismo2: %d \n",populacao2, turismo2);
    printf("area2: %f - pib2: %f \n", area2, pib2);
    printf("Densidade_Populaciona2: %.2f - Pib_Per_Capta: %.2f\n", Densidade_Populacional2, Pib_Per_Capta2);

    return 0;



    







}