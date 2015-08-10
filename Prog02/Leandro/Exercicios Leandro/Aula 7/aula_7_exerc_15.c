//Rafael Stefanini Carreira

/*Escreva uma função mais completa do exercício 14, visando
procurar c a partir de uma dada posição i.*/

#include <stdio.h>
#include "mystring.h"

int whereis(char *str, char c,int pos)
{
	int i;

	for (i = pos; str[i] != '\0'; i++) //agora i começa em pos
		if (str[i] == c)
			return i+1;
	return -1;
}

main()
{
	char str[101];
	char c;
	int pos,i;

	printf ("Digite uma string: ");
	scanf("%[^\n]",str);
	setbuf (stdin, NULL);

	printf ("\nDigite o caractere a ser procurado: ");
	scanf("%c",&c);

	printf("\nApartir de que posição (entre 1 e %d): ",mystrlen(str));
	scanf("%d",&pos);

	if(pos > 0 && pos<= mystrlen(str))
		if (whereis(str,c,pos) != -1)
			printf ("\nPrimeira occorencia de \"%c\" no caractere \"%d\" da string\n",c,whereis(str,c,pos));
		else
			printf ("\nCaractere não encontrado\n");
	else
		puts("\nValor inválido!\n");

}

