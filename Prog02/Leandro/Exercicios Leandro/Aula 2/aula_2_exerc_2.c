//Rafael Stefanini Carreira

//Repita o programa anterior considerando que o ponteiro deve apontar (inicialmente) para uma variável num.
//A variável num armazena um valor informado pelo usuário.
//Os resultados (endereços) são diferentes dos obtidos no exercício 1? Explique.

#include<stdio.h>

main()
{
    int *p;
    int i,num;

    scanf("%d" , &num);
    p = &num;

    for(i=0;i<5;i++)
    {
        printf("%p\n",p);
        p++;
    }
}

//R: Sim, pois agora o ponteiro aponta inicialmente pra alguma posição da memória (!= NULL)
