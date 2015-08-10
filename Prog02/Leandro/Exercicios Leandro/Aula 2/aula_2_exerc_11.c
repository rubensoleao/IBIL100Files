//Rafael Stefanini Carreira

//Modifique o Exercício 3 da Aula 01, considerando duas structs:
//uma para armazenar nome, código e preço
//outra para armazenar as baixas, sendo nesse caso que cada dia deve ser uma variável.
//O associação das structs deve ser por ponteiros

#include<stdio.h>

main()
{	
	typedef struct DiasBaixa{
		int segunda;
		int terca;
		int quarta;
		int quinta;
		int sexta;
		int sabado;
	}baixa;
	
	
	typedef struct produto{
		char nome[30];
		int codigo;
		float valor;
		baixa dias;
	}pr;
	
	pr *prod, produto;
	prod=&produto;
	
	printf("Nome do produto: ");
	scanf("%s", prod->nome);
	printf("Código do produto: ");
	scanf("%d", &prod->codigo);
	printf("Valor do produto: ");
	scanf("%f", &prod->valor);

	puts("\n------Baixas-------\n");

	printf("Segunda feira: ");
	scanf("%d", &prod->dias.segunda);
	printf("Terca feira: ");
	scanf("%d", &prod->dias.terca);
	printf("Quarta feira: ");
	scanf("%d", &prod->dias.quarta);
	printf("Quinta feira: ");
	scanf("%d", &prod->dias.quinta);
	printf("Sexta feira: ");
	scanf("%d", &prod->dias.sexta);
	printf("Sabado: ");
	scanf("%d", &prod->dias.sabado);
	
	puts("\n--------------------------------\n");

	printf("\nNome do produto: %s",prod->nome);
	printf("\nCodigo do produto: %d",prod->codigo);
	printf("\nValor do produto: %.2f",prod->valor);	
	puts("\n\nBaixas:");
	printf("\nSegunda feira: %d",prod->dias.segunda);
	printf("\nTerca feira: %d",prod->dias.terca);
	printf("\nQuarta feira: %d",prod->dias.quarta);
	printf("\nQuinta feira: %d",prod->dias.quinta);
	printf("\nSexta feira: %d",prod->dias.sexta);
	printf("\nSabado: %d\n",prod->dias.sabado);

}
