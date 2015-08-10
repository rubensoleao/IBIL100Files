//Rafael Stefanini Carreira

//Faça uma função recursiva que permita somar os elementos de um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>

double soma(int vet[],int n)
{
	if(n==0)
		return vet[0];
	else
		return vet[n]+soma(vet,n-1);
}

main()
{

	int tam,i;

	printf("Quantos elementos: ");
	scanf("%d",&tam);

	int* vet=(int*)malloc(tam*sizeof(int));
	
	for(i=0;i<tam;i++)
	{
		printf("\n[%d]: ",i);
		scanf("%d",&vet[i]);
	}

	printf("\nSoma de todos os elementos: %lf\n",soma(vet,tam-1));

}


