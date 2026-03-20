//PEM - Projeto 3 
//Exercício: Calendário Permanente. 
//Função: Dada uma data no modelo DD/MM/AAA, o programa retornará o dia da semana que será ou foi aquela data. 

#include <stdio.h>
#include <locale.h>

//a função busca uma linha específica em uma matriz
int procurarLinha (int L, int C, int mat[L][C], int proc){
    int i, j; 
    for (i=0; i<L; i++){
        for(j=0; j<C; j++){
            if(mat[i][j] == proc){
                return i; 
            } 
        }
    }
return -1; //mensagem de erro; 
}

//variáveis globais = acessível a todas as funções; 
int A1[28][4], A2[28][4];
int B[28][12] = 
  {
      {4, 0, 0, 3, 5, 1, 3, 6, 2, 4, 0, 2}, 
      {5, 1, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3}, 
      {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}, 
      {0, 3, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6}, 
      {2, 5, 5, 1, 3, 6, 1, 4, 0, 2, 5, 0}, 
      {3, 6, 6, 2, 4, 0, 2, 5, 1, 3, 6, 1}, 
      {4, 0, 0, 3, 5, 1, 3, 6, 2, 4, 0, 2}, 
      {5, 1, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}, 
      {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5}, 
      {1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6}, 
      {2, 5, 5, 1, 3, 6, 1, 4, 0, 2, 5, 0}, 
      {3, 6, 0, 3, 5, 1, 3, 6, 2, 4, 0, 2}, 
      {5, 1, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3}, 
      {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}, 
      {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5}, 
      {1, 4, 5, 1, 3, 6, 1, 4, 0, 2, 5, 0}, 
      {3, 6, 6, 2, 4, 0, 2, 5, 1, 3, 6, 1}, 
      {4, 0, 0, 3, 5, 1, 3, 6, 2, 4, 0, 2}, 
      {5, 1, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3}, 
      {6, 2, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5}, 
      {1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6}, 
      {2, 5, 5, 1, 3, 6, 1, 4, 0, 2, 5, 0}, 
      {3, 6, 6, 2, 4, 0, 2, 5, 1, 3, 6, 1}, 
      {4, 0, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3}, 
      {6, 2, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}, 
      {0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5}, 
      {1, 4, 4, 0, 2, 5, 0, 3, 6, 1, 4, 6}, 
      {2, 5, 6, 2, 4, 0, 2, 5, 1, 3, 6, 1}
};
int C[7][6];

//início da main; 
int main () 
{   int l, c, x;
    //populando a tabela A1
    x = -3;
    for (c = 0; c < 4; c++)
        for (l = 0; l < 28; l++, x++)
            if (x < 1)
                A1[l][c] = -1;
            else if (x < 100)
                A1[l][c] = x;
            else if (x == 100)
	            A1[l][c] = 0;
            else A1[l][c] = -1;

    //populando a tabela A2
    x = -19;
    for (c = 0; c < 4; c++)
        for (l = 0; l < 28; l++, x++)
            if (x < 1)
    	        A2[l][c] = -1;
            else
    	        A2[l][c] = x;
    
    //populando a tabela C
    x = 1;
    for (c = 0; c < 6; c++)
        for (l = 0; l < 7; l++, x++)
            if (x > 37)
    	        C[l][c] = -1;
            else
    	        C[l][c] = x;

    int dia, mes, ano, resposta, linha, final;
    setlocale (LC_ALL, "Portuguese");
    printf ("\nEntre com uma data no formato DD/MM/AAAA: ");
    scanf ("%d/%d/%d", &dia, &mes, &ano);
    if (ano < 1901 || ano > 2092){
        printf ("Erro!! O ano deve ser de 1901 a 2092.\n");
        return 0; 
    }
    final = ano % 100; 
    if (ano <= 2000){
        linha = procurarLinha(28,4, A1, final); 
    } else{
        linha = procurarLinha(28,4,A2, final); 
    }
    resposta = B[linha][mes-1]; 
    resposta = resposta + dia; 
    linha = procurarLinha (7, 6, C, resposta); 
    char diaSem[7][50] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};
    printf("%s\n", diaSem[linha]); 
    return 0;
}   