//Rafael Stefanini Carreira

/*Escreva uma função que decida se uma string é ou não um
palíndromo (ou seja, se o inverso da string é igual a ela);*/

#include <stdio.h>
#include <stdlib.h>
#include "mystring.h"



int palindromo(char *str)
{
	int i;
	int eh=1;
	int tam;
	tam=(mystrlen(str) - 1);

	for (i = 0;i < tam && eh; i++, tam--)
	{
		if (str[i] == ' ')//pula pra frente
			i++;

		if (str[tam] == ' ') //pula pra traz
			tam--;
		if(str[i] != str[tam])
			eh=0;
	}

	return eh;
}




main()
{
	char str[101];


	printf ("Digite uma string (max 100 char): ");
	scanf("%[^\n]",str);
	setbuf (stdin, NULL);

	

	if(palindromo(str))
		puts ("É palíndromo");
	else
		puts ("Não é um palíndromo!");
}

