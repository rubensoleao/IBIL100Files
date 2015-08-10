//Rafael Stefanini Carreira

//Repetir o exercício anterior com a função calloc. Qual a diferença entre calloc e malloc.


#include <stdio.h>
#include <stdlib.h>

void main(){

	int num,i;
	float* vet;

	printf("Tamanho do vetor: ");
	scanf("%d",&num);

	vet=(float*) calloc(num,sizeof(float));

	if(vet==NULL)
		printf("\nSem memória livre!");
	else
	{
		puts("\nAlocado com sucesso!\n");

		puts("\nDigites os elementos do vetor\n");

		for(i = 0;i < num;i++)
		{
			printf("\n[%d]: ",i);
			scanf("%f",&vet[i]);
		}
		puts("\n-----------------------------");
		printf("\nValorem inseridos: ");
		for(i=0;i<num;i++)
			printf("\n%.2f",vet[i]);


		free(vet); //Notice that this function does not change the value of ptr itself,
			   //hence it still points to the same (now invalid) location.
			   // Source: http://www.cplusplus.com/reference/cstdlib/free/

		//if(vet==NULL)			
			puts("\n\nVetor liberado com sucesso!\n");
		
		//else
		//	puts("ERRO!");
		
	}

}

//R: A diferença é que o calloc ja faz o calculo da quantidade de memoria baseado nos argumentos passados
