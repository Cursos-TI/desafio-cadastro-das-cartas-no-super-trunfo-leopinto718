#include <stdio.h>
#include <stdbool.h> //necessário para usar o tipo bool (booleano)

#define NUM_ATRIBUTOS 6 // Define quantos atributos nossas cartas terão

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {

    // Cartas pré-cadastradas - Alemanha vs Brasil
    char pais1[50] = "Alemanha";
    char pais2[50] = "Brasil";
    
    // Dados da Alemanha
    int pop_1 = 83200000;                   // População (83.2 milhões)
    float area_1 = 357022.0;                // Área em km² (357.022 km²)
    float PIB_1 = 4226000.0;                // PIB em milhões de US$ (4.226 trilhões)
    int pont_turi_1 = 350;                  // Pontos turísticos importantes
    float den_pop_1 = pop_1/area_1;         // Densidade populacional
    float PIB_per_capita_1 = PIB_1/pop_1;   //PIB per capita

    // Dados do Brasil
    int pop_2 = 214000000;                  // População (214 milhões)
    float area_2 = 8515767.0;               // Área em km² (8.515.767 km²)
    float PIB_2 = 1600000.0;                // PIB em milhões de US$ (1.6 trilhão)
    int pont_turi_2 = 200;                  // Pontos turísticos importantes
    float den_pop_2 = pop_2/area_2;         // Densidade populacional
    float PIB_per_capita_2 = PIB_2/pop_2;   //PIB per capita


    // Comparação das cartas 
    int atributo1, atributo2;  // Armazenam as escolhas do usuário
    bool usado[NUM_ATRIBUTOS] = {false}; // Controla atributos já selecionados

    // Array com os atributos
    char *atributos[NUM_ATRIBUTOS] = {
        "Populacao",          // Índice 0
        "Area",               // Índice 1
        "PIB",                // Índice 2
        "Pontos turisticos",  // Índice 3
        "Densidade populacional",    // Índice 4
        "PIB per capita"      // Índice 5
    };

    printf("Escolha o primeiro atributo para comparar:\n");
    
    // Exibe apenas atributos não utilizados
    for(int i = 0; i < NUM_ATRIBUTOS; i++) {
        if(!usado[i]) {
            printf("%d. %s\n", i+1, atributos[i]);
        }
    }
    printf("Digite o numero da opcao: ");
    scanf("%d", &atributo1);
    
    // Validação com switch case
    switch(atributo1) {
        case 1: case 2: case 3: case 4: case 5: case 6:  // Opções válidas
            if(atributo1 >= 1 && atributo1 <= NUM_ATRIBUTOS) {
                usado[atributo1-1] = true;  // Marca como usado
                printf("\nVoce escolheu: %s\n", atributos[atributo1-1]);
            }
            break;
        default:  // Tratamento de erro
            printf("\nOpcao invalida! O jogo sera encerrado.\n");
            return 1;
    }
    
    /******* SEGUNDA ESCOLHA *******/
    printf("\nEscolha o segundo atributo para comparar:\n");
    
    // Mostra menu atualizado
    for(int i = 0; i < NUM_ATRIBUTOS; i++) {
        if(!usado[i]) {
            printf("%d. %s\n", i+1, atributos[i]);
        }
    }
    printf("Digite o numero da opcao: ");
    scanf("%d", &atributo2);
    
    // Validação com switch case
    switch(atributo2) {
        case 1: case 2: case 3: case 4: case 5: case 6:
            if(atributo2 >= 1 && atributo2 <= NUM_ATRIBUTOS) {
                if(usado[atributo2-1]) {  // Verifica se já foi escolhido
                    printf("\nEste atributo ja foi selecionado!\n");
                    return 1;
                }
                printf("\nVoce escolheu: %s\n", atributos[atributo2-1]);
            }
            break;
        default:
            printf("\nOpcao invalida! O jogo sera encerrado.\n");
            return 1;
    }
    
    /******* COMPARAÇÃO *******/
    printf("\nCOMPARANDO:\n");
    printf("- Primeiro atributo: %s\n", atributos[atributo1-1]);
    printf("- Segundo atributo: %s\n", atributos[atributo2-1]);
    
    // Lógica de comparação entre as cartas

    // Resultado da primeira comparação (usando ternário)
    char* vencedor1 = 
        (atributo1 == 1) ? (pop_1 > pop_2 ? pais1 : pais2) :
        (atributo1 == 2) ? (area_1 > area_2 ? pais1 : pais2) :
        (atributo1 == 3) ? (PIB_1 > PIB_2 ? pais1 : pais2) :
        (atributo1 == 4) ? (pont_turi_1 > pont_turi_2 ? pais1 : pais2) :
        (atributo1 == 5) ? (den_pop_1 > den_pop_2 ? pais1 : pais2) :
        (PIB_per_capita_1 > PIB_per_capita_2 ? pais1 : pais2);

    printf("Vencedor no atributo %s: %s\n", atributos[atributo1-1], vencedor1);

    // Resultado da segunda comparação (usando ternário)
    char* vencedor2 = 
        (atributo2 == 1) ? (pop_1 > pop_2 ? pais1 : pais2) :
        (atributo2 == 2) ? (area_1 > area_2 ? pais1 : pais2) :
        (atributo2 == 3) ? (PIB_1 > PIB_2 ? pais1 : pais2) :
        (atributo2 == 4) ? (pont_turi_1 > pont_turi_2 ? pais1 : pais2) :
        (atributo2 == 5) ? (den_pop_1 > den_pop_2 ? pais1 : pais2) :
        (PIB_per_capita_1 > PIB_per_capita_2 ? pais1 : pais2);
    
    printf("Vencedor no atributo %s: %s\n", 
           atributos[atributo2-1], vencedor2);

    // Comparando a soma dos atributos
     printf("\n=== RESULTADOS ===\n");
    
    // Obter valores dos atributos selecionados para cada país
    float valor1_pais1, valor2_pais1, valor1_pais2, valor2_pais2;
    
    // Primeiro atributo para ambos países
    switch(atributo1) {
        case 1: 
            valor1_pais1 = pop_1; 
            valor1_pais2 = pop_2;
            break;
        case 2: 
            valor1_pais1 = area_1; 
            valor1_pais2 = area_2;
            break;
        case 3: 
            valor1_pais1 = PIB_1; 
            valor1_pais2 = PIB_2;
            break;
        case 4: 
            valor1_pais1 = pont_turi_1; 
            valor1_pais2 = pont_turi_2;
            break;
        case 5: 
            valor1_pais1 = den_pop_1; 
            valor1_pais2 = den_pop_2;
            break;
        case 6: 
            valor1_pais1 = PIB_per_capita_1; 
            valor1_pais2 = PIB_per_capita_2;
            break;
    }
    
    // Segundo atributo para ambos países
    switch(atributo2) {
        case 1: 
            valor2_pais1 = pop_1; 
            valor2_pais2 = pop_2;
            break;
        case 2: 
            valor2_pais1 = area_1; 
            valor2_pais2 = area_2;
            break;
        case 3: 
            valor2_pais1 = PIB_1; 
            valor2_pais2 = PIB_2;
            break;
        case 4: 
            valor2_pais1 = pont_turi_1; 
            valor2_pais2 = pont_turi_2;
            break;
        case 5: 
            valor2_pais1 = den_pop_1; 
            valor2_pais2 = den_pop_2;
            break;
        case 6: 
            valor2_pais1 = PIB_per_capita_1; 
            valor2_pais2 = PIB_per_capita_2;
            break;
    }
    
    // Mostrar valores selecionados
    printf("\n%s:\n", pais1);
    printf("- %s: %.2f\n", atributos[atributo1-1], valor1_pais1);
    printf("- %s: %.2f\n", atributos[atributo2-1], valor2_pais1);
    printf("SOMA: %.2f\n\n", valor1_pais1 + valor2_pais1);
    
    printf("%s:\n", pais2);
    printf("- %s: %.2f\n", atributos[atributo1-1], valor1_pais2);
    printf("- %s: %.2f\n", atributos[atributo2-1], valor2_pais2);
    printf("SOMA: %.2f\n\n", valor1_pais2 + valor2_pais2);
    
    // Comparação final pela soma
    float soma_pais1 = valor1_pais1 + valor2_pais1;
    float soma_pais2 = valor1_pais2 + valor2_pais2;
    
    printf("=== RESULTADO FINAL ===\n");
    printf("Soma %s: %.2f\n", pais1, soma_pais1);
    printf("Soma %s: %.2f\n", pais2, soma_pais2);
    
    // Determinar vencedor com operador ternário
    char* vencedor = (soma_pais1 > soma_pais2) ? pais1 : 
                    (soma_pais2 > soma_pais1) ? pais2 : "Empate";
    
    if(vencedor == "Empate") {
        printf("\nEMPATE! As cartas tem soma igual (%.2f)\n", soma_pais1);
    } else {
        printf("\nVENCEDOR: %s (%.2f vs %.2f)\n", 
               vencedor, soma_pais1, soma_pais2);
    }
    


    return 0;
}
