//Rafael Stefanini Carreira

/*Crie um programa em C que receba um vetor de números reais com
100 elementos. Escreva uma função recursiva que inverta ordem dos
elementos presentes no vetor.*/

#include <stdio.h>

void inverte(int vet[], int tam,int i)
{
	int tmp;
	if(tam>49)
	{
		tmp=vet[tam];
		vet[tam]=vet[i];
		vet[i]=tmp;
		inverte(vet,tam-1,i+1);
	}
		
}

main()
{
	
	int vet[100],i;
	
	printf("Insira 100 valores: ");
	for(i=0;i<100;i++)
		scanf("%d",&vet[i]);
	

	puts("\n\nValores digitados: \n");
	for(i=0;i<100;i++)
		printf("\n%d",vet[i]);

	inverte(vet,99,0);
	
	printf("\n\nValores invertidos: \n");
	for(i=0;i<100;i++)
		printf("\n%d",vet[i]);
}
