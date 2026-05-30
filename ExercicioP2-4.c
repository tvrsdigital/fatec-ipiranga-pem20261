// Comente o trecho linha a linha 
//e mostre o que será impresso pelo comando printf

#include <stdio.h>

int main(){
    //declaração de um vetor vet[] 
    int vet[ ] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
    //declaração e inicialização do ponteiro p;
    //o ponteiro p vai salvar o endereço de memória do vet[2]; 
	int *p = &(vet[2]);		
    //declaração de variável auxiliar i; 
	int i;								
    //inicio de um loop, que começa com i = 1 e terminará quando i > 6		
	for (i = 1; i <= 6; i++ ){	
        //printf irá mostrar o valor atribuído ao ponteiro p 
        //no caso valor pois utiliza o operador *p 
        printf ("%d -  ", *p);	

        //aqui o programa irá fazer p = p + 1;
        //neste caso ele irá somar 1 no endereço de memória apontado por p
        //isto é, iremos passar para o próximo item do vetor.
        //logo será printado em ordem o seguinte: 6 - 8 - 10 - 12 - 14 - 16 -

		p++;														
	}		
    return 0; 
}
