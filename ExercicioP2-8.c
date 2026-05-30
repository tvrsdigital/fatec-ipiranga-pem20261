//Código Base para o Mini-Projeto Agenda de Amigos
//Projeto Mini CRUD em C

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>

struct ficha{
	char nome[40];
	char telefone[20];
    char dataNasc[10];
};

int procurar (char procurado[], struct ficha vetor[], int num_fichas){
    for (int i = 0; i < num_fichas; i++){
        if (strcasestr(vetor[i].nome, procurado) != NULL){
            return i;
        } 
    }
    return -1; //caso não encontre 
}


int main()
{
	struct ficha agenda[100];
	int fichas_existentes = 0, proxima = 0;

	char opcao[10]="0"; 
        setlocale(LC_ALL, "Portuguese");
	while(opcao[0] != '5'){
		printf("\nEntre com a opção desejada:\n");
		printf("\n1) Inserir ficha:");
		printf("\n2) Procurar por nome:");
		printf("\n3) Listar toda a base:");
		printf("\n4) Excluir por nome:");
		printf("\n5) Sair\n\n");
		gets(opcao);
		if(opcao[0] == '1') //inserir
		{
			printf("\nEntre com um nome:");
			gets(agenda[proxima].nome);
			printf("\nEntre com um telefone:");
			gets(agenda[proxima].telefone);
			fichas_existentes++;
			proxima++;
		}
		if(opcao[0] == '2') //procurar
		{
			char procurado[40];
			printf("\nEntre com o nome procurado:");
			gets(procurado);
			
            int indice = procurar(procurado,agenda,fichas_existentes);

            if(indice != -1){
                printf("O numero de telefone %s é de %s\n", agenda[indice].nome, agenda[indice].telefone);
                printf("A data de nascimento de %d é %s\n", agenda[indice].nome, agenda[indice].dataNasc); 
            } else{
                printf("\n Nome não encontrado! \n"); 
            }
		}
		if(opcao[0] == '3'){ //listar todos os registros 
			printf("\n\n");
			int i;
			for(i=0; i<fichas_existentes; i++){
			    printf("O telefone de %s é %s\n",
			      agenda[i].nome, agenda[i].telefone);
			}
			if(fichas_existentes == 0)
				printf("A base de dados está vazia!\n");
		}
		if(opcao[0] == '4') { //excluir 
			char procurado[40];
			printf("\nEntre com o nome que sera excluído:");
			gets(procurado);

            int indice = procurar(procurado,agenda,fichas_existentes);

            if (indice != -1){
                printf("\n\nO telefone de %s, que é %s, será removido\n", agenda[indice].nome, agenda[indice].telefone);
            // Puxa os elementos seguintes para cobrir o buraco do elemento excluído
            for(int j = indice + 1; j < fichas_existentes; j++){
                agenda[j-1] = agenda[j];
            }
            fichas_existentes--;
            proxima--;
            } else{
              printf("\n\nNome não encontrado\n");
            }
		}
	}
	return 0;
}