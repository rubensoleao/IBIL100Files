//Rafael Stefanini Carreira

/*A sequência de Fibonacci é a sequência de inteiros: 0, 1, 1, 2, 3, 5, 8,
13, 21, 34... Cada elemento nessa sequência é a soma dos dois
elementos anteriores ( por exemplo, 0+1 = 1, 1+1 = 2, 1+2 = 3 ....).
Construa um programa recursivo para calcular e imprimir a sequência
de fibonacci de um número qualquer, informado pelo usuário. Em
seguida, implemente a solução através de um método iterativo.
*/

#include <stdio.h>


int fibonacci(int n)
{
	if(n==1)
		return 0;	
	else if(n==2)
		return 1;
	else if(n==0)
		return 0;
	else
		return fibonacci(n-1)+fibonacci(n-2);	
}

main()
{

	int num,i;
	printf("Quantidade de números da sequencia: ");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
		printf("%d ",fibonacci(i));

}

