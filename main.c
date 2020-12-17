#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    int ord, i, j;
    int lN, cN;
    printf("Informe a ordem da matriz: ");
    scanf("%d", &ord);

    int matriz[ord][ord];

    for(i=0; i<ord; i++) {
        for(j=0; j<ord; j++){
            lN = abs((ord - 1) - (i));
            cN = abs((ord - 1) - (j));
            matriz[i][j] = min(i, j, lN, cN);
        }
    }

    for(i=0; i<ord; i++){
        for(j=0; j<ord; j++){
            printf("%3d ", matriz[i][j]);
            if(j == ord-1){
                printf("\n");
            }
        }
    }
}

int min(int a, int b, int c, int d){
    int i, j, aux, vetor[4];

    vetor[0] = a;
    vetor[1] = b;
    vetor[2] = c;
    vetor[3] = d;

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
