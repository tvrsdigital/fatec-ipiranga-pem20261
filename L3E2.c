// PEM - Tópico Recursividade
//Exercício: Implementação de uma função recursiva que calcule a potenciação de um número 

#include <stdio.h>
int potencia (int base, int pot){
if (pot == 0) return 1;  
else return base * potencia(base,pot-1); 
}

int main(){
int x, y; 
printf ("Digite a base: ");
scanf("%d", &x);
printf("\nDigite a potencia: ");
scanf("%d", &y);
printf("\n%d elevado a %d será: %d\n", x,y,potencia(x,y));

return 0; 
}