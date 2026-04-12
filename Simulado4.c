#include <stdio.h>

int SomaQuadrados(int N){
    int quad; 
    if (N==0){
        return 0; //caso de parada 
    } else{ 
        quad = N*N;
        return quad + SomaQuadrados(N-1); //caso recursivo
    }

}

int main(){
    int n; 

    printf("Digite um numero: ");
    scanf("%d", &n); 

    if (n<0) n=n*(-1); 

    printf("A soma dos quadrados será: %d\n", SomaQuadrados(n)); 
}