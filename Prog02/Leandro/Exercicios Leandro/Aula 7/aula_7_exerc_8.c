//Rafael Stefanini Carreira

/*Escreva uma função que receba uma string e substitua cada
segmento de dois ou mais espaços por um só caractere ' '.*/


#include <stdio.h>
#include "mystring.h"


void tiraEspaco(char *str)
{
	int i, j;

	for (i=0;i < mystrlen(str);i++)
		if(str[i] == ' ' && str[i+1] == ' ')//se achor 2 ' ' consecutivos
			for (j = i;j < mystrlen(str); j++)
				str[j] = str[j+1]; //copia até o final + \0
}

main ()
{
	char str[101];

	printf ("Digite uma string (max 100 char): ");
	scanf("%[^\n]",str);
	setbuf (stdin, NULL);
	tiraEspaco(str); //duplos, é claro
	printf ("\nNova string: %s\n", str);
}


