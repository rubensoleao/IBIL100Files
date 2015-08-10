//Rafael Stefanini Carreira

/*Escreva um programa em linguagem C para reproduzir a
função strcpy. O programa deve ser salvo como uma biblioteca
para uso nos exercícios seguintes;*/

#include <stdio.h>
#include <stdlib.h>



char *mystrcpy(char *str2, char *str1)
{
	char *ret = str2;
	while(*str1)
	{
		*str2=*str1;
		str2++;
		str1++;
	}
	*str2='\0'; //null terminator
   
   	return ret;
}

main()
{
	char str1[101], str2[101];
	
	printf ("Digite a string 1 (max 100 char): ");
	scanf("%[^\n]",str1);
	setbuf(stdin, NULL);
	mystrcpy(str2,str1); //copia str1 em str2
	puts("\nCopiando a string 1 para a string 2...\n");
	printf ("\nValor da string 2: %s\n",str2);
}

