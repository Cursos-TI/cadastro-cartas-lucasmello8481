#include <stdio.h>

int main(){
    int carta1 = 1;
    char estado1 [25] = "São Paulo";
    char codigo1 [15] = "A01";
    char nome1 [30] = "São José do Rio Pardo";
    int população1 = 55124;
    float área1 = 419;
    float pib1 = 2.4;
    int pontosturisticos1 = 15;



    int carta2 = 2;
    char estado2 [25] = "Rio de Janeiro";
    char codigo2 [15] = "B02";
    char nome2 [30] = "Arraial do Cabo";
    int população2 = 222161;
    float área2 = 401;
    float pib2 = 1.5;
    int pontosturisticos2 = 7;


    printf("Carta %d:\n", carta1);
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", população1);
    printf("Área: %.2f KM quadrados\n", área1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos1);

    printf("Carta %d:\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", população2);
    printf("Área: %.2f KM quadrados\n", área2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosturisticos2);


    return 0;


}