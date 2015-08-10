//Rafael Stefanini Carreira

/*Crie um programa em C para solicitar um número inteiro ao
usuário. O valor digitado será o número de elementos de um
vetor do tipo char, reservado dinamicamente. O espaço de
memória deve ser testado para garantir que a alocação foi
realizada com êxito. Os valores digitados pelo usuário devem
ser apresentados. Em seguida, o usuário deve fornecer um novo
valor, que será utilizado para redefinir o tamanho do vetor char.
Apresentar o conteúdo do vetor após redefinição. Testar : 1.
valor maior que o inicial; 2. valor menor que o inicial. Tratar
ponteiro NULO para um valor menor que o inicial.*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	char *vet;
	int tam,i;
	printf("Digite o num de elementos do vetor: ");
	scanf("%d", &tam);
	vet = (char*)malloc(tam*sizeof(char));
	if(vet==NULL)
		printf("\nSem memória disponivel");
	else
	{
		printf("\nAlocado com sucesso!");
		//for(i=0;i<tam;i++)
		//{
		//	printf("\n[%d]: ",i);
		//	scanf("%c",vet[i]);
		//}
		puts("Digite algo: ");
		scanf("%s",vet);
		
		puts("\n--- Valores digitados ---\n");
		for(i=0;i<tam;i++)
			printf("\n%c",vet[i]);
		printf("\n\nDigite um novo tamanho para o vetor: ");
		scanf("%d", &tam);
		vet = (char*)realloc(vet,tam*sizeof(char));
		puts("\nNovo valor do vetor: \n");
		for(i=0;i<tam;i++)
			printf("\n%c",vet[i]);
		puts("\n");
		
	}
	
}
	
