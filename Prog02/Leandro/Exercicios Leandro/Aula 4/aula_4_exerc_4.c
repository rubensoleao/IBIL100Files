//Rafael Stefanini Carreira

//Reproduzir o programa proposto no exercício 3, porém adaptado para alocar uma array 3D


#include <stdio.h>
#include <stdlib.h>

void main(){

	int m,n,o; //dimensoes
	int i,j,k; //contadores
	float*** A;

	printf("Digite as dimenções da matriz MxNxO: ");
	scanf("%d %d %d",&m,&n,&o);

	A=(float***) malloc(m*sizeof(float**));
	for(i=0;i<m;i++)
		A[i]=(float**)malloc(n*sizeof(float*));

	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			A[i][j]=(float*)malloc(n*sizeof(float));

	if(A==NULL)
		printf("\nSem memória livre!");
	else
	{
		puts("\nAlocado com sucesso!\n");

		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				for(k=0;k<o;k++)
				{
					printf("\n[%d][%d][%d]: ",i,j,k);
					scanf("%f",&A[i][j][k]);
				}

	
		printf("\n\nValores inseridos:\n");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				for(k=0;k<o;k++)
					printf("\n[%d][%d][%d]: %.2f",i,j,k,A[i][j][k]);

		free(A);
		puts("\n\nMatriz liberado!\n");
	}


}


