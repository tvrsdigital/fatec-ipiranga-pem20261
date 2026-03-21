// PEM - Tópico Recursividade
//Exercício: Implementação de uma função recursiva que calcule o fatorial de um número. 

#include <stdio.h>

//início da função recursiva 
int fatorial(int x){  
    int fat = 0; 
    if (x == 0){
        return 1; //caso "final" -> fatorial de 0 é sempre 1.   
    } else{ //em todos os outros casos
        fat = fat + (x * fatorial(x-1)); 
        return fat; 
    }
    
}

int main(){

    int x; 
    printf("Digite um número: ");
    scanf("%d", &x);

    printf("O fatorial do número será: %d\n", fatorial(x)); 
    return 0; 
}
