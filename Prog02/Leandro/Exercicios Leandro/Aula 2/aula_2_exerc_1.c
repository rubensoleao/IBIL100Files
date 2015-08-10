//Rafael Stefanini Carreira

//Utilizando um laço (de 0 até 4), apresente o endereço de um ponteiro inteiro incrementado de 1.

#include<stdio.h>

main()
{
    int *p;
    int i;

    for(i=0; i<5;i++)
    {
        printf("%p\n ", p);
        p++;
    }
}
