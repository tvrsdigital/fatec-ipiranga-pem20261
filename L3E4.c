// PEM - Tópico Recursividade
//Exercício: Implementação de uma função recursiva que calcule a expressão: 1/1 + 1/2 + 1/3 + ... + 1/(n-1) + 1/n

#include <stdio.h>

float expressao(int n){
if (n == 1) return 1;
else return expressao(n-1) + 1.0/n; 
}

int main(){
int x;
printf("Digite um numero: ");
scanf("%d", &x);
printf("\nA expressão será: %.3f\n", expressao(x)); 
return 0; 
}