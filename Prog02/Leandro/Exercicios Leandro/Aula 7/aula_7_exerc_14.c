//Rafael Stefanini Carreira

/*Escreva uma função que receba uma string s, um caractere c e
devolva o índice da primeira posição de s que é igual a c.*/

#include <stdio.h>

int whereis(char *str, char c)
{
	int i;

	for (i = 0; str[i] != '\0'; i++) //de 0 até o final
		if (str[i] == c)	//se achar 
			return i+1;	//retorna index+1
	return -1;
}

main()
{
	char str[101];
	char c;
	int i;

	printf ("Digite uma string: ");
	scanf("%[^\n]",str);
	setbuf (stdin, NULL);

	printf ("\nDigite um caractere: ");
	scanf("%c",&c);

	if (whereis(str,c) != -1)
		printf ("\nPrimeira occorencia de \"%c\" no caractere \"%d\" da string\n",c,whereis(str,c));


	else
		printf ("\nCaractere não encontrado\n");
}

