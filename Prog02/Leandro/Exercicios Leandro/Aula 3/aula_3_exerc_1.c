//Rafael Stefanini Carreira

/*Construa um programa com uma função para definida para
trocar o valor de dois números inteiros, ambos passados por
referência. Os valores trocados devem ser apresentados na
função principal. */

#include <stdio.h>

void troca( int *n1, int *n2 ){
	
	int aux;
	
	aux = *n1;
	*n1 = *n2;
	*n2 = aux;
}

main(){

	int num1, num2;

	printf("\nDigite o primeiro numero: ");
	scanf("%d", &num1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &num2);
	puts("----- Após a troca --------");
	troca(&num1, &num2);

	printf("\nPrimeiro número: %d",num1);
	printf("\nSegundo número: %d\n",num2);
	
}
