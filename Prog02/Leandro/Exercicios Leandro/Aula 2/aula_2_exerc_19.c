//Rafael Stefanini Carreira

//Escreva um método que receba um vetor de inteiros e retorne o maior elemento e o menor elemento.
//Observe que o método deve retornar ao local da chamada os dois valores.

#include<stdio.h>
#include<stdlib.h>

int* maior(int *vet,int tam)
{ 
	int *res;
	int i;
	res =(int *) malloc(2*sizeof(int));

	res[0]=res[1] = vet[0]; // supondo valores para começar a verificação

	for(i=0;i<tam;i++)
	{
		if(vet[i]>mai) // se for maior
			res[0] = vet[i];
		if(m[i]<men) //se for menor
			res[1] = vet[i];
	
	}
	
	return res; // é retornado um vetor com o maior elemento na posição 0 e o menor elemento na posição 1
}
