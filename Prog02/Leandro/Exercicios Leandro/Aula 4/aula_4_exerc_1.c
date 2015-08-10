//Rafael Stefanini Carreira

/*Crie um programa em C para solicitar um número inteiro ao
usuário. O valor digitado será o número de elementos de um
vetor do tipo float, reservado dinamicamente. O espaço de
memória deve ser testado para garantir que a alocação foi
realizada com êxito. Os valores digitados pelo usuário devem
ser apresentados e posteriormente o vetor deve ser liberado. A
liberação de memória também deve ser testada, para garantir
que foi realizada com êxito.*/

#include <stdio.h>
#include <stdlib.h>

void main(){

	int num,i;
	float* vet;

	printf("Tamanho do vetor: ");
	scanf("%d",&num);

	vet=(float*) malloc(num*sizeof(float));

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
