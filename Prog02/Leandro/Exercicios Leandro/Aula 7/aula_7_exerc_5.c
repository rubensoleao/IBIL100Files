//Rafael Stefanini Carreira

/*Escreva um programa em linguagem C para contar o número
de vogais em uma string. A função deve contar apenas as
vogais não acentuadas;*/

#include <stdio.h>

int countVogal(char *str)
{
	int i=0, cont=0;

	while( str[i] != '\0')
	{
		if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
			cont++;
		if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
			cont++;
		i++;
	}

	return cont;
}

main ()
{
	char str[101];
	int cont;

	printf("\nDigite uma string (max 100 char): ");
	scanf("%[^\n]",str);
	setbuf (stdin, NULL);
	printf ("\nA string contém %d vogais\n", countVogal(str));
}

