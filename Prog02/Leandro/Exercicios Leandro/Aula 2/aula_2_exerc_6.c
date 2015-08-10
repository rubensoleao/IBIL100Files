//Rafael Stefanini Carreira

// Repita o exercício 5 para os tipos char, float e double.

#include<stdio.h>


main()
{
    int *pi,*pi2;
    int i;
    char *pc,*pc2;
    char c;
    float *pf,*pf2;
    float f;
    double *pd,*pd2;
    double d;

    int j;

    puts("Digite um num inteiro: ");
    scanf("%d",&i);
    pi=pi2=&i;
    for(j=0;j<5;j++)
    {
        printf("%d\n",pi);
        pi++;
    }
    printf("\nDiferença: %ld",(pi-pi2)*sizeof(int));


    puts("\n\nDigite um caractere: ");
    scanf("%s",&c);
    pc=pc2=&c;
    for(j=0;j<5;j++)
    {
        printf("%d\n",pc);
        pc++;
    }
    printf("\nDiferença: %ld",(pc-pc2)*sizeof(char));


    puts("\n\nDigite um float: ");
    scanf("%f",&f);
    pf=pf2=&f;
    for(j=0;j<5;j++)
    {
        printf("%d\n",pf);
        pf++;
    }
    printf("\nDiferença: %ld",(pf-pf2)*sizeof(float));

    
    puts("\n\nDigite um double: ");
    scanf("%lf",&d);
    pd=pd2=&d;
    for(j=0;j<5;j++)
    {
        printf("%d\n",pd);
        pd++;
    }
    printf("\nDiferença: %ld\n",(pd-pd2)*sizeof(double));
}
