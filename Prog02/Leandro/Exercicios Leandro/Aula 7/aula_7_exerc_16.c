//Rafael Stefanini Carreira

/*Escreva uma função que receba strings s e t e decida se s é um
segmento de t. Escreva um programa que use a função para
contar o número de ocorrências de uma string s em uma string t.*/

#include <stdio.h>
#include "mystring.h"

int countOcorrencia (char *str1, char *str2)
{
	int tam1,tam2;
	int cont=0,achou;
	int i, j;

	tam1 = mystrlen(str1);
	tam2 = mystrlen(str2);

	for (i = 0;i < tam1;i++) //até o final de str1
	{
		for (j = 0;j < tam2 && i+j < tam1; j++)
		{
			achou=1; //supoe q achou
			if (str2[j]!= str1[i+j]) //caso não ache
			{
				achou=0; //volte pro primeiro for
				break;
			}
		}
		if(achou) //se achou mesmo
			cont++; //incrementa
	}

	return cont;
}


main()
{
	int x;
	char str1[101],str2[101];

	printf("\nDigite a primeira string (max 100 char): ");
	scanf("%[^\n]",str1);
	setbuf (stdin, NULL);

	printf("\nDigite a segunda string(max 100 char): ");
	scanf("%[^\n]",str2);
	setbuf (stdin, NULL);


	if (countOcorrencia(str1,str2) == 0)
		printf("\na segunda string não aparece na primeira\n");

	else
		printf("\na segunda string aparece %d vezes na primeira\n",countOcorrencia(str1,str2));
}

