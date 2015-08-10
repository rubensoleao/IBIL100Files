//Rafael Stefanini Carreira

/* Faça um programa leia um número para calcular o fatorial. O
programa deve ter uma função para calcular o fatorial do
número informado, que deve ser passado como valor. O
resultado deve ser apresentado na função principal.*/

#include <stdio.h>

double fatorial(int x)
{
	double sum = 1;
	int i;

	for(i = x; i>0; i--)
		sum *= i;
	return sum;
}

main()
{
	int n;

	printf("Digite um numero: ");
	scanf("%d",&n);
	printf("\nFatorial de %d = %.0lf\n",n, fatorial(n));

}
