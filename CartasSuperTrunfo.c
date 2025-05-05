#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    printf("*** Vamos cadastrar duas cartas para o nosso jogo de super trunfo! *** \n");

    // Definindo os atributos para as duas cartas 
    // código da cidade, nome, população, área, PIB, número de pontos turísticos
    //int cod_cid_1, cond_cid_2;
    char pais1[50], pais2[50];
    int pop_1, pop_2;
    float area_1, area_2;
    float PIB_1, PIB_2;
    int pont_turi_1, pont_turi_2;
    

    // Cadastrando a primeira carta
    printf("Vamos cadastrar a primeira carta! \n");

    printf("Insira o nome do país: \n");
    scanf("%s", pais1);

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

   printf("Insira o nome do país: \n");
   scanf("%s", pais2);

   printf("Insira a população: \n");
   scanf("%d", &pop_2);

   printf("Insira a área: \n");
   scanf("%f", &area_2);

   printf("Insira o PIB: \n");
   scanf("%f", &PIB_2);

   printf("Insira a quantidade de pontos turísticos: \n");
   scanf("%d", &pont_turi_2);

   // Agora vamos calcular dois novos atributos com base nas informações recebidas do usuário

   // Densidade populacional
   float den_pop_1 = pop_1/area_1; 
   float den_pop_2 = pop_2/area_2;

    // PIB per capita
    float PIB_per_capita_1 = PIB_1/pop_1;
    float PIB_per_capita_2 = PIB_2/pop_2;

    // Exibição dos Dados das Cartas:
    printf("*** Exibindo as cartas cadastradas ***");
    printf(" Primeira carta \n");
    printf("População: %d \n", pop_1);
    printf("Área: %f \n", area_1);
    printf("PIB: %f \n", PIB_1);
    printf("Número de pontos turísticos: %d \n", pont_turi_1);
    printf("Densidade populacional: %f \n", den_pop_1);
    printf("PIB per capita: %f \n", PIB_per_capita_1);

    printf(" Segunda carta \n");
    printf("População: %d \n", pop_2);
    printf("Área: %f \n", area_2);
    printf("PIB: %f \n", PIB_2);
    printf("Número de pontos turísticos: %d \n", pont_turi_2);
    printf("Densidade populacional: %f \n", den_pop_2);
    printf("PIB per capita: %f \n", PIB_per_capita_2);


    // Comparação das cartas 
    // Menu interativo para os usuários escolherem qual atributo querem comparar

    int escolha_usuario; //variável para receber a escolha do usuário

    printf("*** Qual atributo você quer comparar? ***\n");
    printf("Escolha uma opção (1 a 6):\n");
    printf("1: População \n");
    printf("2: Área \n");
    printf("3: PIB \n");
    printf("4: Número de pontos turísticos \n");
    printf("5: Densidade populacional \n");
    printf("6: PIB per capita \n");
    
    //Lendo a escolha do usuário
    scanf("%d", &escolha_usuario);

    //Executando a comparação de acordo com a escolha do usuário
    switch(escolha_usuario) {
        case 1:
            
            printf("Os dois países comparados foram: %s e %s \n", pais1, pais2);
            printf("Você escolheu comparar o atributo população\n");
            printf("População de %s: %d \n", pais1, pop_1);
            printf("População de %s: %d \n", pais2, pop_2);

            // Executando as comparações
            if(pop_1 > pop_2){
                
                printf("Carta 1 ganhou!\n");
                
            } 
            else if(pop_1 < pop_2){

                printf("Carta 2 ganhou!\n");

            }
            else {
                printf("Empate!");
            }
            break;
        case 2:
            printf("Os dois países comparados foram: %s e %s \n", pais1, pais2);
            printf("Você escolheu comparar o atributo área\n");
            printf("Área de %s: %d \n", pais1, area_1);
            printf("Área de %s: %d \n", pais2, area_2);
           

            // Executando as comparações
            if(area_1 > area_2){
                
                printf("Carta 1 ganhou!\n");
                
            } 
            else if(area_1 < area_2){

                printf("Carta 2 ganhou!\n");

            }
            else {
                printf("Empate!");
            }
            break;
        case 3: //Opção PIB
            printf("Os dois países comparados foram: %s e %s \n", pais1, pais2);
            printf("Você escolheu comparar o atributo PIB\n");
            printf("PIB %s: %d \n", pais1, PIB_1);
            printf("PIB %s: %d \n", pais2, PIB_2);

            // Executando as comparações
            if(PIB_1 > PIB_2){
                
                printf("Carta 1 ganhou!\n");
                
            } 
            else if(PIB_1 < PIB_2){

                printf("Carta 2 ganhou!\n");

            }
            else {
                printf("Empate!");
            }
            break;
        case 4: // Número de pontos turísticos
            printf("Os dois países comparados foram: %s e %s \n", pais1, pais2);
            printf("Você escolheu comparar o atributo Número de pontos turísticos\n");
            printf("Numéro de pontos turísticos de  %s: %d \n", pais1, pont_turi_1);
            printf("Numéro de pontos turísticos de %s: %d \n", pais2, pont_turi_2);

            // Executando as comparações
            if(pont_turi_1 > pont_turi_2){
                
                printf("Carta 1 ganhou!\n");
                
            } 
            else if(pont_turi_1 < pont_turi_2){

                printf("Carta 2 ganhou!\n");

            }
            else {
                printf("Empate!");
            }
            break;
        case 5: // Densidade populacional
            printf("Os dois países comparados foram: %s e %s \n", pais1, pais2);
            printf("Você escolheu comparar o atributo Densidade populacional\n");
            printf("Densidade populacional de  %s: %d \n", pais1, den_pop_1);
            printf("Densidade populacional de %s: %d \n", pais2, den_pop_2);

            // Executando as comparações
            if(den_pop_1 > den_pop_2){
                
                printf("Carta 2 ganhou!\n");
                
            } 
            else if(den_pop_1 < den_pop_2){

                printf("Carta 1 ganhou!\n");

            }
            else {
                printf("Empate!");
            }
            break;
        case 6: //PIB per capita
            printf("Os dois países comparados foram: %s e %s \n", pais1, pais2);
            printf("Você escolheu comparar o atributo PIB per capita\n");
            printf("PIB per capita de  %s: %d \n", pais1, PIB_per_capita_1);
            printf("PIB per capita de %s: %d \n", pais2, PIB_per_capita_2);

            // Executando as comparações
            if(PIB_per_capita_1 > PIB_per_capita_2){
                
                printf("Carta 1 ganhou!\n");
                
            } 
            else if(PIB_per_capita_1 < PIB_per_capita_2){

                printf("Carta 2 ganhou!\n");

            }
            else {
                printf("Empate!");
            }

            break;
        default:
            printf("Opção inválida! Escolha um número entre 1 e 6.\n");
    }

    return 0;
}
