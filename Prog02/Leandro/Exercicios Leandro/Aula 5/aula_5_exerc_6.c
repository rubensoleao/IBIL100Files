//Rafael Stefanini Carreira

//Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.

#include <stdio.h>

double somatorio(int n)
{
	if(n==0)
		return 0;
	else	
		return n+somatorio(n-1);
}

main()
{
	int num;
	printf("Digite um número: ");
	scanf("%d", &num);
	printf("Somatório de %d = %.0lf\n",num,somatorio(num));
}
