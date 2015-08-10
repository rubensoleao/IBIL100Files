//Rafael Stefanini Carreira

/*Escreva um programa em linguagem C para reproduzir a
função strlen. O programa deve ser salvo como uma biblioteca
para uso nos exercícios seguintes;*/

#include <stdio.h>

int mystrlen(char *str)
{
    int i=0;
    while(str[i] != '\0')
        i++;
    return i;
}

main()
{
	char string[101];
	
	printf ("\nDigite uma string (max 100 char): ");
	scanf("%[^\n]",string);
	setbuf (stdin, NULL);
	
	printf ("\nTamanho da string: %d\n", mystrlen(string));
}

