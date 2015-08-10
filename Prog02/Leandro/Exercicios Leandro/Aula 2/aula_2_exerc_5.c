//Rafael Stefanini Carreira

//Considerando o exercício 2, converta os endereços para decimal e apresente a diferença em bytes entre os mesmos.
//Os resultados correspondem aos valores dos respectivos incrementos definidos no laço.
//Explique.

#include<stdio.h>

int main()
{
    int *p1,*p2;
    int num,i;

    puts("Digite um num: ");
    scanf("%d" , &num);
    p1=&num;
    p2=&num;

    for(i=0;i<5;i++)
    {
        printf("p1: %d\n",p1);
        p1++;
    }
    
    printf("\nDiferença após o faço: %ld ", (p1-p2) * sizeof(int));
}

//R: Sim, pois a cada incremento adiciona sizeof(int) na posição de memoria
// sizeof(int) = 4
// incrementos = 5
// diferença em bytes = 20

