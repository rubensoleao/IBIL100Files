//Rafael Stefanini Carreira

/*Reproduzir o programa proposto no exercício 1, porém adaptado
para alocar uma array 2D. Nesse caso o usuário deve informar
os valores que definem as duas dimensões. Pesquise e
implemente o código necessário para que alocação aceite
dimensões diferentes, exemplo: 10x20; 5x 455 e outras.*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int m,n; //dimensoes
	int i,j; //contadores
	float** A; //matriz

	printf("Digite as dimenções da matriz MxN: ");
	scanf("%d %d",&m,&n);

	A=(float**)malloc(m*sizeof(float*));
	for(i=0;i<m;i++)
		A[i]=(float*)malloc(n*sizeof(float));


	if(A==NULL)
		printf("\nSem memória livre!");
	else
	{
		puts("\nAlocado com sucesso!\n");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
					printf("\n[%d][%d]: ",i,j);
					scanf("%f",&A[i][j]);
			}

		printf("\n\nValores inseridos:\n");
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				printf("\n[%d][%d]: %.2f",i,j,A[i][j]);
		
		free(A);
		puts("\n\nMatriz liberado!\n");
	}

}


