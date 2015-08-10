//Rafael Stefanini Carreira

/* Determine o que a seguinte função recursiva em C faz. Escreva uma
função iterativa para atingir o mesmo objetivo.
int func (int n)
{
	if (n==0)
		return(0);
	return(n+func(n-1));
}
*/

//R: A função calcula e retorna o somatorio de todos os numeros menores que n(passado por parametro)
#include <stdio.h>
main()
{
	int n,aux,sum=0;
	printf("Digite um numero: ");
	scanf("%d", &n);
	aux=n;
	while(n!=0)
	{
		sum+= n;
		n--;
	}
	printf("\nO somatorio dos numeros até %d = %d\n",aux,sum);
}
	
