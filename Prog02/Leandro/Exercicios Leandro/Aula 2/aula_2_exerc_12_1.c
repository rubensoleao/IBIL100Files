//Rafael Stefanini Carreira

//Exercício 12 utilizando typecasting


#include<stdio.h>
 
typedef struct DiasBaixa{
		int segunda;
		int terca;
		int quarta;
		int quinta;
		int sexta;
		int sabado;
}baixa;	
	
typedef struct produto{
		char nome[30];
		int codigo;
		float valor;
		baixa dias;
}pr;

main()
{
 	void *p1, *b1; //dois ponteiro declarados como void
 	pr *p; //ponteiro para produto
 	baixa *b; //ponteiro para baixas
 	b1 = (baixa*)b; //b1 recebe um ponteiro para baixas por typecasting
 	p1 = (pr*)p; //p1 recebe um ponteiro para produto por typecasting
 
 }
 
