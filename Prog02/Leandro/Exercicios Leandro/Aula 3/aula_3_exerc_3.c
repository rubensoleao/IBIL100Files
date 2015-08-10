//Rafael Stefanini Carreira

/*Faça uma função que receba um parâmetro inteiro, passado
por valor, correspondendo ao total de minutos passados ao
longo de um dia e receba também dois parâmetros inteiros,
passados por referência, nos quais deve preencher o valor da
hora e do minuto correntes. Faça um programa principal que
solicite ao usuário quantos minutos se passaram desde o início
do dia e imprima a hora corrente (em horas e minutos) fazendo
uso da função implementada.*/

#include <stdio.h>

void time(int mT, int *h, int *m)
{
	*h = mT/60; //divisão inteira dos minutos por 60 
	*m = mT%60;//resto da divisão inteira dos minutos por 60

}

main()
{

	int h, m, mT; //horas,min, e min trancorridos do dia

	printf("Minutos transcorridos do dia: ");
	scanf("%d", &mT);
	time(mT, &h, &m);
	if(m>9)
		printf("\nSão: %dh%d\n",h,m);
	else
		printf("\nSão: %dh0%d\n",h,m);

}
