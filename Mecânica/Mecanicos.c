#include <stdio.h>
#include <string.h>


int existe_mecanico( Mecanicos *vetFunc, int totFunc, char cpf[])
{
    int i;
    for(i=0; i<totFunc; i++)
    {
        if ( strcmp(vetFunc[i].CPF, cpf) == 0 )
            return i;
    }
    return -1;
}

void incluir_mecanico( Mecanicos *vetFunc, int *totFunc )
{
    char cpf[12];
    char nome[31];
    char salario[8];
    char email[40];
    char LIXO[2];
    
    
    printf("\nInclusao de mecanico:\n");
    
    if ( *totFunc == TOTAL )
    {
        printf("\n*ERRO* Nao ha espaço para incluir mais um mecanico!\n");
    }
    else
    {
        printf("Digite o CPF do mecanico: ");
        gets(cpf);
    
        if ( existe_mecanico(vetFunc, *totFunc, cpf) != -1 )
        {
            printf("\n* Este CPF ja existe!*\n");
        }
        else
        {   
            printf("Digite o nome do mecanico: ");
            gets(nome);

            printf("Digite o salario do mecanico: ");
            gets(salario);

            printf("Digite o email do mecanico: ");
            gets(email);

        
            strcpy( vetFunc[*totFunc].CPF, cpf );
            strcpy( vetFunc[*totFunc].nome, nome );
            strcpy( vetFunc[*totFunc].salario, salario );
            strcpy( vetFunc[*totFunc].email, email );
        
            (*totFunc)++;
            
            printf("\n* Mecanico inserido com sucesso!\n");
        }
    }
    printf("\nDigite <ENTER> para continuar....");
    gets(LIXO);
}

void alterar_mecanico( Mecanicos *vetFunc, int *totFunc )
{
    char cpf[12];
    char nome[31];
    char salario[8];
    char email[40];
    char LIXO[2];
    int indice;
    
    
    printf("\nAlteracao de Mecanico:\n");
    
    printf("Digite o CPF do mecanico: ");
    gets(cpf);
    
    indice = existe_mecanico(vetFunc, *totFunc, cpf);
    
    if ( indice == -1 )
    {
        printf("\n* Este CPF nao existe!*\n");
    }
    else
    {
            
        printf("Digite o nome do mecanico: ");
        gets(nome);
        printf("Digite o salario do mecanico: ");
        gets(salario);
        printf("Digite o email do mecanico: ");
        gets(email);

        strcpy( vetFunc[indice].nome, nome );
        strcpy( vetFunc[indice].salario, salario );
        strcpy( vetFunc[indice].email, email );
            
        printf("\n* Informacoes do mecanico alterado com sucesso!\n");
    }
    printf("\nDigite <ENTER> para continuar....");
    gets(LIXO);
    
}

void apagar_mecanico( Mecanicos *vetFunc, int *totFunc)
{
    char cpf[12];
    char LIXO[2];
    int indice, i;
    
    printf("\nApagando Mecanico:\n");
    
    printf("Digite o CPF do mecanico: ");
    gets(cpf);
    indice = existe_mecanico(vetFunc, *totFunc, cpf);

    if ( indice == -1 )
    {
        printf("\n* Este CPF nao existe!*\n");
    }
    else
    {
        
        for( i=indice; i<(*totFunc)-1; i++)
        {
            strcpy( vetFunc[indice].CPF, vetFunc[indice+1].CPF );
            strcpy( vetFunc[indice].nome, vetFunc[indice+1].nome );
            strcpy( vetFunc[indice].salario, vetFunc[indice+1].salario );
            strcpy( vetFunc[indice].email, vetFunc[indice+1].email );
        }
    
        (*totFunc)--;
        
        printf("\n* Mecanico apagado com sucesso!\n");
    }

printf("\nDigite <ENTER> para continuar....");
gets(LIXO);
    
}    

void consultar_mecanico( Mecanicos *vetFunc, int *totFunc )
{
    char cpf[12];
    char LIXO[2];
    int indice;
    
    
    printf("\nConsultar Mecanico:\n");
    
    printf("Digite o CPF do mecanico: ");
    gets(cpf);
    
    indice = existe_mecanico(vetFunc, *totFunc, cpf);
    
    if ( indice == -1 )
    {
        printf("\n* Este CPF nao existe!*\n");
    }
    else
    {
            
        printf("CPF: %s\n",  vetFunc[indice].CPF);
        printf("Nome: %s\n", vetFunc[indice].nome);
        printf("Salario: %s\n", vetFunc[indice].salario);
        printf("Email: %s\n", vetFunc[indice].email);
    }
    
    printf("\nDigite <ENTER> para continuar....");
    gets(LIXO);
    
}    

void consultarTodos_mecanico( Mecanicos *vetFunc, int *totFunc )
{
    char LIXO[2];
    int i;
    
    if( (*totFunc) == 0 )
    {
        printf("\nNao ha mecanicos a exibir!\n");
    }
    else
    {
        printf("\nExibindo todos os mecanicos:\n");
    
        for( i=0; i<(*totFunc); i++ )
        {            
            printf("\nCPF: %s\n",  vetFunc[i].CPF);
            printf("Nome: %s\n",   vetFunc[i].nome);
            printf("Salario: %s\n",   vetFunc[i].salario);
            printf("Email: %s\n",   vetFunc[i].email);
        }
    }
    
    printf("\nDigite <ENTER> para continuar....");
    gets(LIXO);
    
}    