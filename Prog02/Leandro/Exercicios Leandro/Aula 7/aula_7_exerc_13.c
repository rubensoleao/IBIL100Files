//Rafael Stefanini Carreira

/*Escreva uma função para receber uma string s e um inteiro não
negativo i. Em seguida, a função deve devolver o i-1-ésimo
caractere de s, ou seja, o caractere s[i].*/


#include <stdio.h>
#include "mystring.h"


char retIndex (char *str, int i)
{
	return str[i-1];
}

main ()
{
	char str[101];
	int i;

	printf ("Digite uma string (max 100 char): ");
	scanf("%[^\n]",str);
	setbuf (stdin, NULL);

	printf("\nDigite um valor entre 1 e %d: ",mystrlen(str));
	scanf("%d",&i);
	if(i > 0 && i<= mystrlen(str))
		printf("\nO caractere nº %d da string é: %c\n",i,retIndex(str,i));
	else
		puts("\nValor inválido!\n");
}
