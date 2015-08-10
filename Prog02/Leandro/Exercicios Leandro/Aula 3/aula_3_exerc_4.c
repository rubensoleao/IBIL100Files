//Rafael Stefanini Carreira

/*Faça uma função que receba como parâmetros um vetor de
inteiros (de qualquer tamanho), a quantidade de elementos
desse vetor e um determinado valor inteiro. A função deverá
retornar o número de elementos do vetor que são iguais ao
valor inteiro determinado. Escreva um programa principal que
use a função implementada.*/


#include <stdio.h>
#include <stdlib.h>

int count( int *vet, int tam, int num )
{
	int n=0, i;

	for(i=0;i < tam;i++)
		if(num == vet[i]) //se for igual
			n++; //incrementa contador
	return n;
}

main()
{

	int tam, num,i;
	int *vet;

	printf("Tamanho do vetor: ");
	scanf("%d", &tam);

	vet =(int*) malloc(tam*sizeof(int)); //aloca

	printf("\nDigite os elementos do vetor: ");

	for(i=0; i<tam; i++)
		scanf("%d", &vet[i]);
	

	printf("\nDigite o número a ser procurado: ");
	scanf("%d", &num);

	printf("\nO numero %d foi encontrado %d vezes\n",num,count(vet,tam,num));

}
