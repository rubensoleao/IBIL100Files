//Rafael Stefanini Carreira

//Considere três variáveis int (de nomes num, num1 e num2) em que os valores foram informados pelo usuário.
//Defina três ponteiros e aponte para cada uma das variáveis definidas previamente.
//Faça um modelo esquemático da memória RAM e posicione cada variável de acordo com os endereços obtidos com a execução do programa, via os ponteiros.
//Após essa etapa, complemente o programa com comparações (==, >, <, !=) entre os ponteiros, visando verificar se as posições (áreas) definidas no modelo esquemático foram corretas.

#include <stdio.h>
main()
{

	int num,num1,num2;
	int *p,*p1,*p2;

	scanf("%d %d %d",&num,&num1,&num2);

	p=&num;
	p1=&num1;
	p2=&num2;

	printf("num: %d, posição: %p\nnum1: %d, posição: %p\nnum2: %d, posição: %p\n",num,p,num1,p1,num2,p2);

	if(p < p1 && p1 < p2 )
		puts("O modelo está correto!");
	else
		puts("O modelo está incorreto!");

}

/* modelo esquematico da memoria RAM (utilizando gdb)	

&num = 0x7fffffffdedc
&num1 = 0x7fffffffdee0
&num2 = 0x7fffffffdee4

&p = 0x7fffffffdee8
&p1 = 0x7fffffffdef0
&p2 = 0x7fffffffdef8

p = 0x7fffffffdedc -> num
p1 = 0x7fffffffdee0 -> num1
p2 = 0x7fffffffdee4 ->num2

*/
