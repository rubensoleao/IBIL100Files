//Rafael Stefanini Carreira

/*Escreva um programa em linguagem C para reproduzir a
função strcmp. O programa deve ser salvo como uma
biblioteca para uso nos exercícios seguintes;*/

#include <stdio.h>

int mystrcmp(char *str1, char *str2)
{
	int i=0;
	while(str1[i] == str2[i] && str1[i])
		i++;

	if(str1[i] == str2[i] && !str1[i]) //str1=str2
		return 0;
	else if(str1[i] > str2[i]) //str1>str2
		return -1;
	else if(str2[i] > str1[i]) //str1<str2
		return 1;
}


main()
{
	
	char str1[50], str2[50];

	printf ("Digite a primeira string: ");
	scanf("%s",&str1);

	printf ("\nDigite a segunda string: ");
	scanf("%s",&str2);

	if (mystrcmp(str1,str2) == 0)
		printf ("\nStrings identicas\n");
	else if(mystrcmp(str1,str2) < 0)
		printf ("\nstr1 é maior (alfabeticamente) que str2\n");
	else	
		printf ("\nstr2 é maior (alfabeticamente) que str1\n");
}


