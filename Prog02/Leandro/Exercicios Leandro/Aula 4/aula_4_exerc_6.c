//Rafael Stefanini Carreira

/*Crie um programa em C para que o usuário digite elementos em
um vetor do tipo inteiro. O vetor é inicialmente um ponteiro. Para
cada novo valor, uma posição de memória deve ser realocada e
testada. O valor digitado deve ser armazenado na posição
correta. Esse processo termina quando o usuário digitar, como
elemento do vetor, o valor ‘0’ . O vetor deve ser apresentado e
em seguida a memória deve ser liberada.*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int *vet;
	int num,i,j;

	printf("Digite os elementos do vetor:\n");
	scanf("%d",&num);
	i=0;
	while(num != 0)
	{
		i++;
		vet = (int*)realloc(vet,i*sizeof(int));
		vet[i-1]=num;
		if(vet[i-1]==NULL)
		{
			puts("\nErro na realocação");
			exit(1);
		}
		scanf("%d",&num);
	}

	puts("\n----- Valores digitados --------\n");

	for(j=0;j<i;j++)
		printf("\nvet[%d]: %d ", j,vet[j]);

	free(vet);
	
	printf("\n\nMemoria liberada!!!\n");
	
}
