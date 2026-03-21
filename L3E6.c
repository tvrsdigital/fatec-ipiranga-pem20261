//PEM - Lista Recursividade
//
#include <stdio.h>

int somaImp(int n){
if(n==1 || n==0){
    return n;
}
if ((n%2) == 0){
return (n-1) + somaImp(n-2);
} else{
	return n + somaImp(n-2);
}
}

int main(){
int x;

printf("Digite um número: ");
scanf("%d", &x);
printf("A soma dos ímpares até %d é: %d\n", x, somaImp(x));

    return 0;
}