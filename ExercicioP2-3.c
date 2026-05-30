#include <stdio.h>

int main(){
    int a = 10, b = 7, c; //declaração das variáveis 
    //a = 10, b = 7, c não tem valor; 

    int *p = &a; //declaração e inicialização do ponteiro p;
    //neste caso, p passa a apontar para o endereço de a; 
    //*p = 10

    int *q = &b; //declaração e inicialização do ponteiro q; 
    //neste caso, q passa a apontar para o endereço de b; 
    //*q = 7

    int *r = &c; //declaração e inicialização do ponteiro r;
    //neste caso, r passa a apontar para o endereço de c
    //como c não tem valor, *r tb não tem valor. 


    *r = *p; //o valor que está no endereço apontado por p (que é 10) é copiado... 
    //...para o endereço apontado por r (no caso, a variável c).
    //a = 10, b = 7, c = 10


    *p = *q; //o valor que está no endereço apontado por q (que é 7) é copiado...
    //... para o endereço apontado por p (no caso, a variável a)
    //a =7, b= 7, c = 10

    *q = *r; //o valor que está no endereço apontado por r (que é 10 ) é copiado...
    //... para o endereço apontado por q (no caso, a variável a mais uma vez)
    //a = 7, b = 10, c = 10

    printf("%d - %d\n", a,b); //o print irá mostrar: "7 - 10"

    //no final, c foi utilizado como uma variável auxiliar para segurar o valor de a...
    //enquanto o programa invertia os valores de a e b; 
    
    return 0; 
}