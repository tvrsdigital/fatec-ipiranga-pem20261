// PEM - Tópico Recursividade
//Exercício: Implementação de uma função recursiva que calcule a multiplicação de dois números através da soma

#include <stdio.h>
int multiplica(int x, int y){
if (y == 0) return 0;
else return x + multiplica(x,y-1);
}

int main(){
int x, y;
printf ("Digite o numero 1: ");
scanf("%d", &x);
printf("\nDigite o numero 2: ");
scanf("%d", &y);
printf("\n%d multiplicado por %d será: %d\n", x,y,multiplica(x,y));

return 0; 
}