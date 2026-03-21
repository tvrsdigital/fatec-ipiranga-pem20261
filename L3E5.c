// PEM - Tópico Recursividade
//Exercício: Implementação de uma função recursiva que calcule a divisão de um número por outro através de subtrações sucessivas

#include <stdio.h>

int divisao(int x, int y){
if (x < y) return 0;
else return divisao(x-y,y)+1; 
}

int main(){
int x, y; 
printf ("Digite o numero 1: ");
scanf("%d", &x);
printf("\nDigite o numero 2: ");
scanf("%d", &y);
printf("\nA divisão inteira de x/y é: %d\n", divisao(x,y));

return 0; 
}