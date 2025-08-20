#include <stdio.h>

int main(){

    char estado1[20] , estado2[20];
    char codigo1[10] , codigo2[10];
    char cidade1[30], cidade2[30];
    int populacao1, populacao2, turismo1, turismo2 ;
    float area1, area2, pib1, pib2;
    float Densidade_Populacional1, Densidade_Populacional2, Pib_Per_Capta1, Pib_Per_Capta2;
    float superPoder1, superPoder2;  
    int resultadoCarta1, resultadoCarta2;

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

    Densidade_Populacional1 = (float) (populacao1 / area1);
    Pib_Per_Capta1 = (float) (pib1 *1000000000.0f / populacao1);

    superPoder1 = (float) (populacao1+area1+pib1+Pib_Per_Capta1+turismo1+ 1 / Densidade_Populacional1);


    printf("estado1: %s\n codigo1: %s\n cidade1: %s\n", estado1, codigo1,cidade1);
    printf("populacao1: %d\n turismo1: %d\n", populacao1, turismo1);
    printf("area1: %.2f km²\n pib1: %.2f bilhoes\n", area1, pib1);
    printf("Densidade_Populacional1: %.2f hab/km²\n Pib_Per_capta1: %.2f reais\n",Densidade_Populacional1, Pib_Per_Capta1);
    printf(" super poder1: %.2f\n", superPoder1);

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

    Densidade_Populacional2 = (float) (populacao2 / area2);
    Pib_Per_Capta2 = (float) (pib2 *1000000000.0f / area2);

    superPoder2 = (float) (populacao2+pib2+Pib_Per_Capta2+turismo2+ 1 / Densidade_Populacional2);

    printf("estado2: %s\n codigo2: %s\n cidade2: %s \n", estado2, codigo2, cidade2);
    printf("populacao2: %d\n turismo2: %d \n",populacao2, turismo2);
    printf("area2: %.2f km²\n pib2: %.2f bilhoes\n", area2, pib2);
    printf("Densidade_Populacional2: %.2f hab/km²\n Pib_Per_Capta: %.2f reais\n", Densidade_Populacional2, Pib_Per_Capta2);
    printf("super poder2: %.2f\n", superPoder2);

    //comparacoes de valores entre variaveis

    printf("populacao carta 1 > carta 2: %d\n", populacao1 > populacao2);
    printf("area carta 1 > carta 2: %d\n", area1 > area2);
    printf("pib carta 1 > carta 2 : %d\n",pib1 > pib2);
    printf("pontos turistico carta > carta 2: %d\n", turismo1 > turismo2);
    printf("densidade populacional carta 1 < carta 2: %d\n", Densidade_Populacional1 < Densidade_Populacional2);
    printf("pib per capita carta 1 < carta 2: %d\n",Pib_Per_Capta1 < Pib_Per_Capta2);
    printf("super poder carta 1 > carta 2: %d\n", superPoder1 > superPoder2);
    
    

    
    
                                                                                                                                                                                                        return 0;



                                                                                                                                                                                                            







}