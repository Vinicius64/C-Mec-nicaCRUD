#include <stdio.h>
#include <string.h>


int existe_veiculos( Veiculos *vetFunc, int totFunc, char placa[])
{
    int i;

    for(i=0; i<totFunc; i++)
    {

        if ( strcmp(vetFunc[i].Placa, placa) == 0 )
            return i;
    }
            
    return -1;
}


void incluir_veiculo( Veiculos *vetFunc, int *totFunc )
{
    char placa[9];
    char modelo[21];
    char ano[5];
    char cor[21];
    char LIXO[2];
    
    
    printf("\nInclusao de veiculo:\n");
    
    if ( *totFunc == TOTAL )
    {
        printf("\n*ERRO* Nao ha espaço para incluir mais um Veiculo!\n");
    }
    else
    {
        printf("Digite a placa do veiculo: ");
        gets(placa);
    
        if ( existe_veiculos(vetFunc, *totFunc, placa) != -1 )
        {
            printf("\n* Esta placa ja existe!*\n");
        }
        else
        {
            
            printf("Digite o modelo do veiculo: ");
            gets(modelo);

            printf("Digite o ano do veiculo: ");
            gets(ano);

            printf("Digite o cor do veiculo: ");
            gets(cor);

        
            strcpy( vetFunc[*totFunc].Placa, placa );
            strcpy( vetFunc[*totFunc].modelo, modelo );
            strcpy( vetFunc[*totFunc].ano, ano );
            strcpy( vetFunc[*totFunc].cor, cor );
        
            (*totFunc)++;
            
            printf("\n* Veiculo inserido com sucesso!\n");
        }
    }
    printf("\nDigite <ENTER> para continuar....");
    gets(LIXO);
}


void alterar_veiculo( Veiculos *vetFunc, int *totFunc )
{
    char placa[9];
    char modelo[21];
    char ano[5];
    char cor[21];
    char LIXO[2];
    int indice;
    
    
    printf("\nAlteracao de Veiculo:\n");
    
    printf("Digite a placa do veiculo: ");
    gets(placa);
    
    indice = existe_veiculos(vetFunc, *totFunc, placa);
    
    if ( indice == -1 )
    {
        printf("\n* Esta plca nao existe!*\n");
    }
    else
    {
         
        printf("Digite o modelo do veiculo: ");
        gets(modelo);

        printf("Digite o ano do veiculo: ");
        gets(ano);

        printf("Digite o cor do veiculo: ");
        gets(cor);
        
        
        strcpy( vetFunc[indice].modelo, modelo );
        strcpy( vetFunc[indice].ano, ano );
        strcpy( vetFunc[indice].cor, cor );
		 
		    
        printf("\n* Informacoes do veiculo alterado com sucesso!\n");
    }
    printf("\nDigite <ENTER> para continuar....");
    gets(LIXO);
    
}



void apagar_veiculo( Veiculos *vetFunc, int *totFunc)
{
    char placa[12];
    char LIXO[2];
    int indice, i;
    
    printf("\nApagando Veiculo:\n");
    
    printf("Digite a placa do veiculo: ");
    gets(placa);
        indice = existe_veiculos(vetFunc, *totFunc, placa);
    
        if ( indice == -1 )
        {
            printf("\n* Esta placa nao existe!*\n");
        }
        else
        {
            
            for( i=indice; i<(*totFunc)-1; i++)
            {
                strcpy( vetFunc[indice].Placa, vetFunc[indice+1].Placa );
                strcpy( vetFunc[indice].modelo, vetFunc[indice+1].modelo );
                strcpy( vetFunc[indice].ano, vetFunc[indice+1].ano );
                strcpy( vetFunc[indice].cor, vetFunc[indice+1].cor );
            }
        
            (*totFunc)--;
            
            printf("\n* Veiculo apagado com sucesso!\n");
        }
    
    printf("\nDigite <ENTER> para continuar....");
    gets(LIXO);
    
}    
    

void consultar_veiculo( Veiculos *vetFunc, int *totFunc )
{
    char placa[12];
    char LIXO[2];
    int indice;
    
    
    printf("\nConsultar Veiculo:\n");
    
    printf("Digite a placa do veiculo: ");
    gets(placa);
    
    indice = existe_veiculos(vetFunc, *totFunc, placa);
    
    if ( indice == -1 )
    {
        printf("\n* Esta placa nao existe!*\n");
    }
    else
    {
            
        printf("Palca: %s\n",  vetFunc[indice].Placa);
        printf("modelo: %s\n", vetFunc[indice].modelo);
        printf("Ano: %s\n", vetFunc[indice].ano);
        printf("Cor: %s\n", vetFunc[indice].cor);
    }
    
    printf("\nDigite <ENTER> para continuar....");
    gets(LIXO);
    
}    
    

void consultarTodos_veiculo( Veiculos *vetFunc, int *totFunc )
{
    char LIXO[2];
    int i;
    
    if( (*totFunc) == 0 )
    {
        printf("\nNao ha veiculos a exibir!\n");
    }
    else
    {
        printf("\nExibindo todos os veiculos:\n");
    
        for( i=0; i<(*totFunc); i++ )
        {            

            printf("Palca: %s\n",  vetFunc[i].Placa);
	        printf("modelo: %s\n", vetFunc[i].modelo);
	        printf("Ano: %s\n", vetFunc[i].ano);
	        printf("Cor: %s\n", vetFunc[i].cor);
            
        }
    }
    
    printf("\nDigite <ENTER> para continuar....");
    gets(LIXO);
    
}