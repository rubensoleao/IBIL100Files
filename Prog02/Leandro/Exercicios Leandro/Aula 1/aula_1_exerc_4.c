//Rafael Stefanini Carreira

//Modifique o programa anterior para comportar os dados de 20 produtos


#include<stdio.h>

main()
{
    struct produto
    {
        char nome[50];
        int codigo;
        float preco;
        int baixa[6];
    }pr[20];

    int total = 0;
    int i,j;

    for(j=0;j<20;j++) //mesma coisa, repetindo 20 vezes
    {
	puts("------------------------------------------");
    	printf("Digite o nome do produto: ");
    	scanf("%s",&pr[j].nome);

	printf("Digite o codigo do produto: ");
    	scanf("%d",&pr[j].codigo);

    	printf("Digite o preço do produto: ");
    	scanf("%f",&pr[j].preco);

    	printf("Digite o num de baixas na segunda: ");
    	scanf("%d",&pr[j].baixa[0]);

    	printf("Digite o num de baixas na terça: ");
    	scanf("%d",&pr[j].baixa[1]);
 
    	printf("Digite o num de baixas na quarta: ");
    	scanf("%d",&pr[j].baixa[2]);

    	printf("Digite o num de baixas na quinta: ");
    	scanf("%d",&pr[j].baixa[3]);

    	printf("Digite o num de baixas na sexta: ");
    	scanf("%d",&pr[j].baixa[4]);

    	printf("Digite o num de baixas na sabado: ");
    	scanf("%d",&pr[j].baixa[5]);

	total=0;

    	for(i=0;i<=5;i++)
    	{
		total = total + pr[j].baixa[i];
	}

	puts("-------------------------------------------------------");

	printf("\nProduto: %s\nCod: %d\nObteve um total de %d baixas na semana.", pr[j].nome,pr[j].codigo,total);

	printf("\nSegunda: %d",pr[j].baixa[0]);
	printf("\nTerca:   %d",pr[j].baixa[1]);
	printf("\nQuarta:  %d",pr[j].baixa[2]);
	printf("\nQuinta:  %d",pr[j].baixa[3]);
	printf("\nSexta:   %d",pr[j].baixa[4]);
	printf("\nSabado:  %d\n",pr[j].baixa[5]);

    }
}
