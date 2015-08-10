//Rafael Stefanini Carreira

//Construir um programa em C para controlar um registro de estoque de um produto.
//Um de seus campos permite armazenar um valor numérico que representa baixas do produto por dia da semana.
//Temos, então, um valor de seis posições, onde cada posição indica um dia útil da semana (incluindo o sábado).
//O programa deve permitir leitura e escrita dos dados.

#include<stdio.h>

main()
{
    struct produto	//registro com as info. do produto
    {
        char nome[50];
        int codigo;
        float preco;
        int baixa[6];
    }pr;

    int total = 0;
    int i;

   //leitura

    printf("Digite o nome do produto: ");
    scanf("%s",&pr.nome);

    printf("Digite o codigo do produto: ");
    scanf("%d",&pr.codigo);

    printf("Digite o preço do produto: ");
    scanf("%f",&pr.preco);

    printf("Digite o num de baixas na segunda: ");
    scanf("%d",&pr.baixa[0]);

    printf("Digite o num de baixas na terça: ");
    scanf("%d",&pr.baixa[1]);
 
    printf("Digite o num de baixas na quarta: ");
    scanf("%d",&pr.baixa[2]);

    printf("Digite o num de baixas na quinta: ");
    scanf("%d",&pr.baixa[3]);

    printf("Digite o num de baixas na sexta: ");
    scanf("%d",&pr.baixa[4]);

    printf("Digite o num de baixas na sabado: ");
    scanf("%d",&pr.baixa[5]);

    //soma das baixas

    for(i=0;i<=5;i++)
    {
        total = total + pr.baixa[i];
    }

    //saidas

    puts("-------------------------------------------------------");

    printf("\nProduto: %s\nCod: %d\nObteve um total de %d baixas na semana.", pr.nome,pr.codigo,total);

    printf("\nSegunda: %d",pr.baixa[0]);
    printf("\nTerca:   %d",pr.baixa[1]);
    printf("\nQuarta:  %d",pr.baixa[2]);
    printf("\nQuinta:  %d",pr.baixa[3]);
    printf("\nSexta:   %d",pr.baixa[4]);
    printf("\nSabado:  %d\n",pr.baixa[5]);

}
