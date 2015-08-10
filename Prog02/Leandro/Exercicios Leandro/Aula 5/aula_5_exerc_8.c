//Rafael Stefanini Carreira

/*O superfatorial de um número N é definida pelo produto dos N
primeiros fatoriais de N. Assim, o superfatorial de 4 é sf(4) = 1! * 2! * 3!
* 4! = 288. Faça uma função recursiva que receba um número inteiro
positivo N e retorne o superfatorial desse número.
*/

#include<stdio.h>
double fat(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return n*fat(n-1);
}

double sfat(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fat(n)*sfat(n-1);
}
main()
{
	int num;
	printf("Digite o num: ");
	scanf("%d", &num);
	printf("Resultado: %.0lf\n",sfat(num));
}
