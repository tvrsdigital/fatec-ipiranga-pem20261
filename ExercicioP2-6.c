//Faça uma função que crie uma bandeira utilizando uma matriz
//matriz utilizada [20][30] para melhor visualização 
//Bandeira escolhida: Irlanda (colunas Verde, Branca e Laranja)


#include <stdio.h>

#define LINHAS 20
#define COLUNAS 30

void bandeira(int mat[LINHAS][COLUNAS]){
    int l, c; 

    for(l=0;l<LINHAS;l++){
        for(c=0;c<COLUNAS;c++){
            if (c < 10){
                mat[l][c] = 1;
            } 
            else if (c < 20){
                mat[l][c] = 2; 
            } else{
                mat[l][c] = 3; 
            }
        }
    }

     for(l=0;l<LINHAS;l++){
        for(c=0;c<COLUNAS;c++){
            if(mat[l][c] == 1) printf("V");
            else if(mat[l][c] == 2) printf("B");
            else printf("L");    
        }

        if(c == 30){
        printf("\n");
        }
    }

}

int main(){
    int matriz[LINHAS][COLUNAS];

    bandeira(matriz);

return 0; 
}