//Rafael Stefanini Carreira

/*Escreva um programa em linguagem C para reproduzir a
função strcat. O programa deve ser salvo como uma biblioteca
para uso nos exercícios seguintes;*/

#include <stdio.h>

char *mystrcat(char *str1, char *str2)
{

  	char *strcat = str1; //strcat aponta pra str1

  	while(*strcat) //chega até a ultima posição
  		strcat++;

  	while(*str2) //enquanto tiver valores em str2
	{
		*strcat=*str2;
		str2++;
		strcat++;
    	}
	*strcat='\0'; //null terminator
		

  	return str1; //que ainda aponta para o inicio da strcat
}

main()
{
	char str1[101], str2[51];

	printf ("\nDigite a primeira string (max 50 char): ");
	scanf("%[^\n]",str1);
	setbuf (stdin, NULL);

	printf ("\nDigite a segunda string (max 50 char): ");
	scanf("%[^\n]",str2);
	setbuf (stdin, NULL);

	printf ("\nstrings concatenadas: %s\n",mystrcat(str1, str2));

}
