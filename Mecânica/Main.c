#include <stdio.h>
#include "structs.c"
#include "Prototipos.c"
#include "Mecanicos.c"
#include "Veiculos.c"


int main()
{
    
    Mecanicos BDMecanicos[TOTAL];
        int totFunc = 0;
    Veiculos BDVeiculos[TOTAL];
    	int totFunc_2 = 0;
    
    int opcao_principal, opcao_submenu;

    do {
        printf("=== Menu ===\n");
        printf("1. Mecanicos\n");
        printf("2. Veiculo\n");
        printf("3. Conserto\n");
        printf("4. Relatorios\n");
        printf("5. Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d%*c", &opcao_principal);

        switch (opcao_principal) {
            case 1:
                do {
                    printf("\n=== Submenu Mecanicos ===\n");
                    printf("1. Incluir\n");
                    printf("2. Alterar\n");
                    printf("3. Excluir\n");
                    printf("4. Consultar\n");
                    printf("5. Consultar todos\n");
                    printf("6. Voltar ao menu anterior\n");
                    printf("\nEscolha uma opcao: ");
                    scanf("%d%*c", &opcao_submenu);

                    switch (opcao_submenu) {
                        case 1:
                            incluir_mecanico(BDMecanicos, &totFunc);
                            break;
                        case 2:
                            alterar_mecanico(BDMecanicos, &totFunc);
                            break;
                        case 3:
                            apagar_mecanico(BDMecanicos, &totFunc);
                            break;
                        case 4:
                            consultar_mecanico(BDMecanicos, &totFunc);
                            break;
                        case 5:
                            consultarTodos_mecanico(BDMecanicos, &totFunc);
                            break;
                        case 6:
                            printf("Voltando ao menu anterior...\n");
                            break;
                        default:
                            printf("Opcao invalida.\n");
                    }
                } while (opcao_submenu != 6);
                break;
            case 2:
                    do{
                    printf("\n=== Submenu Veiculos ===\n");
                    printf("1. Incluir\n");
                    printf("2. Alterar\n");
                    printf("3. Excluir\n");
                    printf("4. Consultar\n");
                    printf("5. Consultar todos\n");
                    printf("6. Voltar ao menu anterior\n");
                    printf("\nEscolha uma opcao: ");
                    scanf("%d%*c", &opcao_submenu);
                    
                    switch (opcao_submenu) {
                        case 1:
                            incluir_veiculo(BDVeiculos, &totFunc_2);
                            break;
                        case 2:
                            alterar_veiculo(BDVeiculos, &totFunc_2);
                            break;
                        case 3:
                            apagar_veiculo(BDVeiculos, &totFunc_2);
                            break;
                        case 4:
                            consultar_veiculo(BDVeiculos, &totFunc_2);
                            break;
                        case 5:
                            consultarTodos_veiculo(BDVeiculos, &totFunc_2);
                            break;
                        case 6:
                            printf("Voltando ao menu anterior...\n");
                            break;
                        default:
                            printf("Opcao invalida.\n");
                    }
                } while (opcao_submenu != 6);
                break;
            case 3:
                    printf("\n=== Submenu Conserto ===\n");
                    printf("1. Incluir\n");
                    printf("2. Alterar\n");
                    printf("3. Excluir\n");
                    printf("4. Consultar\n");
                    printf("5. Consultar todos\n");
                    printf("6. Voltar ao menu anterior\n");
                    printf("\nEscolha uma opcao: ");
                    scanf("%d%*c", &opcao_submenu);
                break;
            case 4:
                printf("Opcao escolhida: Relatorios\n");
                break;
            case 5:
                printf("Opcao escolhida: Sair\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao_principal != 5);
}