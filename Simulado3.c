#include <stdio.h>

int somaCentro(int L, int C, int mat[L][C]) { 
    int i, j;
    int soma = 0;

    if (L < 3 || C < 3) {
        return 0;
    }

    for (i = 1; i < L-1; i++) {
        for (j = 1; j < C-1; j++) {
            soma += mat[i][j];
        }
    }
    return soma;
}

int main() {
    int L, C;
    
    
    // Leitura das dimensões
    printf("Digite o numero de linhas: ");
    scanf("%d", &L);
    printf("Digite o numero de colunas: ");
    scanf("%d", &C);
    int mat[L][C]; 
    
    // Leitura da matriz
    printf("Digite os elementos da matriz:\n");
    for(int i = 0; i < L; i++){
        for(int j = 0; j < C; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    // Calcula e exibe resultado
    int resultado = somaCentro(L, C, mat);
        printf("Soma do centro da matriz: %d\n", resultado);

    
    return 0; 
}