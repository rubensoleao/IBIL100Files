//Rafael Stefanini Carreira

//Considere o exercício 11 e defina um código para calcular a quantidade em bytes que cada struct necessita.
//Em seguida, o programa deve conter ponteiros para apontar para posições de memória que representam a soma entre o endereço do ponteiro de uma struct inicial e a quantidade em bytes requerida pela struct apontada.
//Imprima os endereços antes e após os incrementos.
//Por fim, é possível realizar esse programa usando typecasting? Se sim, demonstre como.

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
 	
 	pr *p,produto;
 	baixa *b,baix;
	p=&produto;
	b=&baix;

 	printf("\nQuantidade de bytes ocupados pela struct produto: %d",sizeof(pr));
 	printf("\nQuantidade de bytes ocupados pela struct baixa: %d",sizeof(baixa));
 	
 	puts("\n\nEndereco dos ponteiros que apontam para as structs:\n"); 
 	printf("Produto: %d",p);
 	printf("\nBaixa: %d",b);
 	puts("\nApos o incremento:\n");
 	printf("Produto: %d", p+sizeof(pr));
 	printf("\nBaixa: %d\n", b+sizeof(baixa));

 }
 
