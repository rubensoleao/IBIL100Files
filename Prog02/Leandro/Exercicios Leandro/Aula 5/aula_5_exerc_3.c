//Rafael Stefanini Carreira

//Construa um programa recursivo para imprimir a sequência binária de um número inteiro qualquer, informado pelo usuário.

#include <stdio.h>

void bin(int n)
{
	if(n==1)
		printf("1");
	else if(n==0)
		printf("0");
	else
	{
		bin(n/2);
		printf("%d",n%2);		
	}

}

void main()
{
	
	int num;

	printf("digite um número inteiro: ");
	scanf("%d",&num);
	bin(num);

}



