#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    printf("*** Vamos cadastrar duas cartas para o nosso jogo de super trunfo! *** \n");

    // Definindo os atributos para as duas cartas 
    // código da cidade, nome, população, área, PIB, número de pontos turísticos
    //int cod_cid_1, cond_cid_2;
    //char[] nome1, nome1;
    int pop_1, pop_2;
    float area_1, area_2;
    float PIB_1, PIB_2;
    int pont_turi_1, pont_turi_2;

    // Cadastrando a primeira carta
    printf("Vamos cadastrar a primeira carta! \n");

    printf("Insira a população: \n");
    scanf("%d", &pop_1);

    printf("Insira a área: \n");
    scanf("%f", &area_1);

    printf("Insira o PIB: \n");
    scanf("%f", &PIB_1);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &pont_turi_1);


   // Cadastrando a segunda carta
   printf("Vamos cadastrar a segunda carta! \n");

   printf("Insira a população: \n");
   scanf("%d", &pop_2);

   printf("Insira a área: \n");
   scanf("%f", &area_2);

   printf("Insira o PIB: \n");
   scanf("%f", &PIB_2);

   printf("Insira a quantidade de pontos turísticos: \n");
   scanf("%d", &pont_turi_2);

    // Exibição dos Dados das Cartas:
    printf("*** Exibindo as cartas cadastradas ***");
    printf(" Primeira carta \n");
    printf("População: %d \n", pop_1);
    printf("Área: %f \n", area_1);
    printf("PIB: %f \n", PIB_1);
    printf("Número de pontos turísticos: %d \n", pont_turi_1);


    printf(" Segunda carta \n");
    printf("População: %d \n", pop_2);
    printf("Área: %f \n", area_2);
    printf("PIB: %f \n", PIB_2);
    printf("Número de pontos turísticos: %d \n", pont_turi_2);

    return 0;
}
