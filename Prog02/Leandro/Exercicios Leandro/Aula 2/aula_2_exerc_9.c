//Rafael Stefanini Carreira

//Defina um programa para realizar a troca dos valores apontados por dois ponteiros do tipo float.
//Use apenas um ponteiro auxiliar e typecasting.

#include<stdio.h>

main()
{
   // int *p, *p1, *pa;
    float n1, n2;
    void *p1,*p2,*pa;

    puts("Digite o valor de n1: ");
    scanf("%f", &n1);
    p1 = &n1;

    puts("Digite o valor de n2: ");
    scanf("%f", &n2);
    p2 = &n2;

    printf("\nn1 = %.2f\nn2 = %.2f", *(float *)p1 ,*(float *)p2);

    pa = p1;
    p1 = p2;
    p2 = pa;

    printf("\n\nApós a troca:\n\nn1 = %.2f\nn2 = %.2f\n",*(float *)p1,*(float *)p2);

}


