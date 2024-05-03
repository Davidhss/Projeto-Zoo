#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int opcao;
    int qtde_animais;
    int id_animal;
    int consumo_dia;
    float custo_kg;
    int indice = 1;
    char animal[20] = "";
    
    printf("******Bem-vindo ao Zoorulhos******");
    
    while(indice >= 1)
    {
        printf("\n\n[1] Iniciar\n");
        printf("[2] Sair\n");
        printf("=>");    
        scanf("%d", &opcao);
        
        switch(opcao){     
            case 1:
                printf("\n\nEscolha um animal:\n");
                printf("[1] Leopardo\n");
                printf("[2] Piriquito\n");
                printf("[3] Macaco-Prego\n");
                printf("=>");   
                scanf("%d", &id_animal);
            
                switch(id_animal){
                    case 1:
                        strcpy(animal, "Leopardo");
                        consumo_dia = 30;
                        break;
                    case 2:
                        strcpy(animal, "Piriquito");
                        consumo_dia = 2;
                        break;
                    case 3:
                        strcpy(animal, "Macaco-Prego");
                        consumo_dia = 13;
                        break;
                }
            
                printf("\n\nAnimal escolhido: %s", animal);  
                printf("\nConsumo de Alimento por Dia: %d kg", consumo_dia);
                
                printf("\n\nQuantidade de animais => ");
                scanf("%d", &qtde_animais);
                
                printf("Custo estimado por kg de comida => ");
                scanf("%f", &custo_kg);
                
                float qtde_kg_dia = consumo_dia * qtde_animais;
                float qtde_kg_mes = 30 * qtde_kg_dia;
                float custo_estimado = qtde_kg_mes * custo_kg;
                
                printf("\n\n---------------------------------------------------");
                printf("\nQuantidade por dia: %.1f kg", qtde_kg_dia);
                printf("\nQuantidade por mes: %.1f kg", qtde_kg_mes);
                printf("\nCusto estimado por mes: R$%.2f", custo_estimado);
                printf("\n---------------------------------------------------\n\n");
                break;
            default:
                printf("Encerrando o programa...\n\n");
                system("pause");
                indice = 0;
        }
    }
    return 0;
}
