//Faça uma função que crie uma imagem de espiral quadrada 
//formada por '=' e espaços vazios

#include <stdio.h>

#define linhas 10
#define colunas 11

void criarEspiral(){
    int l, c;
    char matriz[linhas][colunas]; 

    //Inicializamos a matriz limpa. 
    for(l=0;l<linhas;l++){
        for(c=0;c<colunas;c++){
            matriz[l][c] = ' '; 

        }
    }

    //limites iniciais da matriz 
    int cima = 0;
    int baixo = linhas - 1; 
    int esq = 0;
    int dir = colunas - 1; 

    while (cima <= baixo && esq <= dir){

        //preenche a linha de cima da esquerda para a direita 
        for(int i = esq; i<=dir; i++){
            matriz[cima][i] = '='; 
        }

        //chega ultima coluna e vai preenchendo pra baixo
        for (int j = cima + 1; j <= baixo; j++){
            matriz[j][dir] = '='; 
        }

        //na ultima linha, preenche da direita pra esquerda
        //para 1 coluna antes do final. 
        for(int i = dir-1; i>=esq+2; i--){
            matriz[baixo][i] = '='; 
        }

        //agora vamos preencher de baixo pra cima
        //parando uma linha antes;
        for(int j=baixo-1;j>=cima+2;j--){
            matriz[j][esq+1] = '='; 
        }

        //atualização das fronteiras
        cima += 2; 
        baixo -= 2; 
        esq += 2;
        dir -= 2; 
    }
    
    // Imprime a matriz na tela
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            // Imprime o caractere seguido de dois espaços para ajustar a proporção visual no console
            printf("%c  ", matriz[i][j]);
        }
        printf("\n"); // Quebra de linha ao fim de cada linha da matriz
    }
}


int main(){
    
criarEspiral(); 

return 0; 
}