//PEM - simulado de prova P1 
//cálculo da distancia Quadrática de dois vetores

#include<stdio.h>

double distanciaQuadratica(double A[], double B[],int N){
    int i;
    double d = 0.0;  
    //verificação de que o vetor não está vazio. 
    if (N<=0) return -1.0; 
    else {
        //inicio do loop para fazer a diferença quadrática 
        for (i=0; i<N; i++){
            double diferenca = A[i] - B[i]; 
            d += diferenca * diferenca;
            
        }
    }
    return d; //retorna o valor final d 
}

int main(){
    int N;
    
    printf("Digite o tamanho dos vetores (N): ");
    scanf("%d", &N);
    
    if (N <= 0) {
        printf("Tamanho invalido!\n");
        return 1;
    }
    
    double A[N];
    double B[N]; 
    
    // Pedir os dados do vetor A 
    printf("Digite os %d elementos do vetor A:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &A[i]);
    }
    
    // Pedir os dados do vetor B 
    printf("Digite os %d elementos do vetor B:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &B[i]);
    }
    
    // Cálculo e resultado
    //double resultado = distanciaQuadratica(A, B, N);
    printf("Distancia quadratica: %.2lf\n", distanciaQuadratica(A, B, N));
    
    
    return 0;
}  
