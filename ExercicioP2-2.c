//Comente cada uma das linhas do código abaixo
//E explique por que *q = 10; causa problemas

#include <stdio.h>
#include <stdlib.h> 

int main(){ //inicio da função main 
    int x,y,*p,*q; //declaração das variaveis
    //sendo x e y variáveis int
    // p e q são ponteiros 
    
    y = 19; //atribuindo valor 19 a variável y 
    
    p = &y; //atribuindo endereço de y ao ponteiro p 
    
    x = *p; //atribuimos o valor que o ponteiro p aponta a variável x 
    //isto é x=19
    
    x = 7; //atribuimos valor 7 a variavel x 
    
    (*p)++; //fazemos *p = *p + 1; isto é *p = 19 + 1 = 20
    
    x--; //fazemos x = x - 1; isto é x = 7 - 1 = 6
    
    (*p) = (*p) + x; // agora fazemos *p = *p + x, isto é, *p = 20 + 6 = 26
    
    printf("y = %d\n", y); //o programa irá printar o valor de y, isto é 26. 
    //uma vez que p aponta para o endereço de y, e o valor atribuido a ele é na vdd o valor atribuído a y. 
    
    //linha abaixo como comentário para não dar erro. 
    // *q = 10; 
    //aqui ocorre uma falha de segmentation fault. 
    //isto pq o ponteiro q não foi iniciado em momento nenhum; isto é, não existe endereço de memória disponível pra alocar o valor atribuido a ele. 
    //para resolver o problema seria necessário alocar uma memória para o ponteiro q com malloc
    //ou deveriamos ter atribuído algum valor para o ponteiro q como foi feito com p em *p = &y;
    //corrigindo:
    q = (int*)malloc(sizeof(int));
    *q = 10; 

    free(q); 
return 0; //fecha o programa. 
}