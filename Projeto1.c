#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//procedimento para dizer em qual Estado o cpf foi registrado;
void Estado(int cpf[]){
    char estados[10][80]={
        "\nRio Grande do Sul\n",
        "\nDistrito Federal, Goiás, Mato Grosso, Mato Grosso do Sul e Tocantins\n",
        "\nAmazonas, Pará, Roraima, Amapá, Acre e Rondônia\n",
        "\nCeará, Maranhão e Piauí\n",
        "\nParaíba, Pernambuco, Alagoas e Rio Grande do Norte\n",
        "\nBahia e Sergipe\n",
        "\nMinas Gerais\n",
        "\nRio de Janeiro e Espírito Santo\n",
        "\nSão Paulo\n",
        "\nParaná e Santa Catarina\n"
    }; 
    printf("%s", estados[cpf[8]]);
}

//função que verifica se o cpf é inválido por ter números repetidos;
int VerificaRepetidos(int cpf[]){
    int i; 
    for (i=0; i<10; i++){
        if (cpf[0] != cpf[i+1])
        return false;
        }
    return true; 
}
//função que verifica se os dígitos estão corretos; 
int calculaDigito (int cpf[], int mult[], int n){
    int soma=0;
    int i; 
    for(i=0; i<n; i++){
        soma = soma + cpf[i]*mult[i];
    }
    return ((soma*10)%11)%10; 
}

int main(){

    int cpf[11];
    int m1[9]={10,9,8,7,6,5,4,3,2};
    int m2[10]={11,10,9,8,7,6,5,4,3,2};
    int i, j=0, tam;
    char entrada[50];  

    printf("Entre com o CPF: ");
    fgets(entrada, 50, stdin);
    tam = strlen(entrada); 
    for(i=0; i<tam; i++){
        if(entrada[i]>=48 && entrada[i]<=57){
            cpf[j] = entrada[i]-48; 
            j++; 
        }
    }
    
    if((calculaDigito(cpf, m1, 9) == cpf[9]) && (calculaDigito(cpf,m2,10) == cpf[10]) && (VerificaRepetidos(cpf) == false)){
        printf("\n CPF válido.");  
        Estado(cpf);  
    }  else{
        printf("\n CPF inválido!");
    }
    return 0; 
}