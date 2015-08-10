// Rafael Stefanini Carreira

//Faça um programa em Linguagem C para criar um registro que permita armazenar os dados de um cheque bancário.
//O programa deve permitir entrada e saída dos dados.

#include<stdio.h>

main()
{
    struct cheque	//resgisto que guarda as informações de um cheque
    {
        char banco[50];
        int agencia;
        int conta;
        int numCheque;
        float valor;
        char favorecido[50];
        char data[30];
    }chq;

    //leitura dos dados

    printf("\nDigite o nome do Banco: ");
    scanf("%s", &chq.banco);

    printf("\nDigite o numero da Agencia: ");
    scanf("%d" , &chq.agencia);

    printf("\nDigite o numero da Conta: ");
    scanf("%d" , &chq.conta);

    printf("\nDigite o numero do cheque: ");
    scanf("%d" , &chq.numCheque);

    printf("\nDigite o valor do cheque: ");
    scanf("%f" , &chq.valor);

    printf("Digite o nome do favorecido: ");
    scanf("%s" , &chq.favorecido);

    printf("Digite o a data: ");
    scanf("%s" , &chq.data);

    //saida das informações

    printf("\n\nBanco: %s  -  Agencia %d -  Conta %d\nCheque num. %d - Valor: %.2f",chq.banco,chq.agencia,chq.conta,chq.numCheque,chq.valor);
    printf("\nFavorecido: %s - Data: %s",chq.favorecido,chq.data);
}
