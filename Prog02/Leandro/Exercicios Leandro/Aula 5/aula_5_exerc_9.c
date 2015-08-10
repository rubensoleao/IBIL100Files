//Rafael Stefanini Carreira

/*Um palíndromo é uma string que é lida da mesma maneira da esquerda
para a direita e da direita para a esquerda. Alguns exemplos de
palíndromo são radar e a bola da loba (se os espaços forem ignorados)
Escreva uma função recursiva que retorna 1 se a string armazenada no
array for um palíndromo e 0, caso contrário. O método deve ignorar
espaços e pontuação na string.*/


#include <stdio.h>
#include <string.h>

int palindromo(char *str, int tam,int i)
{
	if(tam>0)
	{	
		if(str[i] == ' ')i++;
		if(str[tam-1] == ' ')tam--;

		if(str[i] != str[tam-1])
			return 0;
		else
			return palindromo(str,tam-1,i+1);
	}
	else
		return 1;
} 

main()
{
	char str[100];
	printf("Digite uma frase: ");
   	scanf("%[^\n]s",str);

  	if (palindromo(str,strlen(str),0))
		printf("É um palíndromo\n");
  	else
		printf("Não é um palíndromo\n");
 
}





