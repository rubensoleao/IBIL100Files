//Rafael Stefanini Carreira

//Repita o exercício 2 para os tipos char, float e double.

#include<stdio.h>

main()
{
    int *pi;
    int i;
    char *pc;
    char c;
    float *pf;
    float f;
    double *pd;
    double d;

    int j;

    puts("Digite um num inteiro: ");
    scanf("%d",&i);
    pi=&i;
    for(j=0;j<5;j++)
    {
        printf("%p\n",pi);
        pi++;
    }


    puts("\nDigite um caractere: ");
    scanf("%s",&c);
    pc=&c;
    for(j=0;j<5;j++)
    {
        printf("%p\n",pc);
        pc++;
    }


    puts("\nDigite um float: ");
    scanf("%f",&f);
    pf=&f;
    for(j=0;j<5;j++)
    {
        printf("%p\n",pf);
        pf++;
    }

    
    puts("\nDigite um double: ");
    scanf("%lf",&d);
    pd=&d;
    for(j=0;j<5;j++)
    {
        printf("%p\n",pd);
        pd++;
    }
}
