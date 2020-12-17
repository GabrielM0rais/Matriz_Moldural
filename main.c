#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int ord, i, j;
    int lN, cN;

    printf("Informe a ordem da matriz: ");
    scanf("%d", &ord);

    // Iniciando a Matriz de acordo com sua ordem informada
    int matriz[ord][ord];

    //Atribuindo os valores da Matriz verificando o menor entre eles
    for(i=0; i<ord; i++) {
        for(j=0; j<ord; j++){
            lN = abs((ord - 1) - (i));
            cN = abs((ord - 1) - (j));
            matriz[i][j] = min(i, j, lN, cN);
        }
    }

    //Printando a matriz de forma a ficar no estilo padrão m x n
    for(i=0; i<ord; i++){
        for(j=0; j<ord; j++){
            printf("%3d ", matriz[i][j]);
            if(j == ord-1){
                printf("\n");
            }
        }
    }
}

/*
*   Função utilizar o método Bublle Short para ordenar a os valores informados,
*   colocados dentro de um vetor durante a chamada da função e retornando apenas
*   o valor na posição zero, por ser o menor valor
*/
int min(int a, int b, int c, int d){
    int i, j, aux, vetor[4];

    vetor[0] = a;
    vetor[1] = b;
    vetor[2] = c;
    vetor[3] = d;

    //Bubble Short
    for(i=0; i<3; i++)
	  for(j=i+1; j<4; j++)
	    if(vetor[j]<vetor[i])
	      {
	      	aux = vetor[j];
			vetor[j] = vetor[i];
	      	vetor[i] = aux;
		  } 

    return vetor[0];
}
