//Exercício RECURSIVIDADE
//crie uma função recursiva somaQuadrados que calcule
//a soma dos quadados dos numeros positivos até N. 

#include <stdio.h>

int somaQuadrados(int N){
    if(N==0){
        return 0; 
    } else {
        return N*N + somaQuadrados(N-1); 
    }
}

int main(){
    int n;

    printf("Indique um numero para fazer a soma dos quadrados: ");
    scanf("%d", &n); 

    if(n<0){
        n = n * -1; 
    }

    printf("A soma dos quadrados até %d será: %d\n", n, somaQuadrados(n)); 

    return 0; 
}