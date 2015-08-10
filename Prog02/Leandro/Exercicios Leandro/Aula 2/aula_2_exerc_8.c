//Rafael Stefanini Carreira

//Considerando o exercício anterior, é possível realizar as comparações envolvendo variáveis e ponteiros correspondentes com tipos de dados diferentes. Por exemplo, int num; float num 1; double num 2.
//Quais são os resultados? Justifique sua resposta.

#include<stdio.h>

main()
{
    int num, *p;
    float num1,*p1;
    double num2,*p2;

    puts("Digite int, float, double: ");
    scanf("%d %f %lf", &num,&num1,&num2);

    p = &num;
    p1=&num1;
    p2=&num2;

    printf("\n\nnum: %d\np: %p\n\nnum1: %f\np1: %p\n\nnum2: %lf\np2: %p",num,p,num1,p1,num2,p2);

    puts("\n-----------------------------------\n");
    if(p < p1 && p1 < p2 )
	puts("O modelo está correto!");
    else
	puts("O modelo está incorreto!");

}

//R: Sim, os dados são armazenados na memória da mesma maneira, mudando somente o seu tamanho ocupado.
