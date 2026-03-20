#include <stdio.h> 
#include <string.h>

int calculaDigito(int cnpj[], int mult[], int n){
    int soma=0; 
    int i; 
    for (i=0;i<n;i++){
        soma = soma + cnpj[i]*mult[i]; 
    }
    int resto = soma % 11;
    if (resto<2){
        return 0;
    } else{
        return 11-resto; 
    }
}

int main(){
    int cnpj[14];
    int m1[12] ={5,4,3,2,9,8,7,6,5,4,3,2}; 
    int m2[13]={6,5,4,3,2,9,8,7,6,5,4,3,2};
    int i, tam, j=0; 
    char entrada[50]; 

    printf("Entre com os 14 dígitos do cnpj: ");
    fgets(entrada, 50, stdin); 
    tam = strlen(entrada); 
    for (i=0; i<tam; i++){
        if(entrada[i]>=48 && entrada[i]<=57){
            cnpj[j] = entrada[i]-48;
            j++;
        }
    }
   
    if ((calculaDigito(cnpj, m1, 12) == cnpj[12]) && (calculaDigito(cnpj, m2, 13) == cnpj[13])){
        printf ("\nCNPJ válido!\n");
    } else{
        printf("\nCNPJ inválido!\n");
    }
    return 0; 
}