//Rafael Stefanini Carreira

/*Escreva uma função que receba uma string e imprima uma tabela
com o número de ocorrências de cada caractere na string;*/

#include <stdio.h>
#include <stdlib.h>


main()
{
	char str[101],*p;
	unsigned int ascii[256];
	int i;

	printf ("\nDigite uma string (max 100 char): ");
	scanf ("%[^\n]",str);
	p=str;

	//memset(ascii,0,256); //inicializa tudo com zero //não funfou
	for(i=0;i<256;i++)ascii[i]=0;

	while(*p)
	{
		ascii[(int)*p]++;
		p++;
	}
	
	for(i=33;i<127;i++) //entre os caracteres relevantes
		printf("%c = %d     ",(char)i,ascii[i]);
}
