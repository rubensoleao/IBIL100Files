//Rafael Stefanini Carreira

//Construir um programa em C para controlar o saldo bancário de 20 clientes. Os dados importantes são: numero da conta, nome, sexo e saldo.
//O nome é composto por uma estrutura individual (com os campos nome e sobrenome).
//Em seguida, o programa deve permitir ler os dados, inclusive o saldo.
//Calcular e imprimir o saldo médio das mulheres, o saldo médio dos homens, os maiores e menores saldos entre homens e mulheres.

#include<stdio.h>

main()
{
    struct cliente
    {
        int num;
        struct nomes
        {
            char nome[50];
            char sobrenome[50];
        }nom;
        char sexo;
        float saldo;
    }cli[20];

    int i,f=0,m=0;
    float total_m=0,total_f=0,maior_m=0,maior_f=0,menor_m=0,menor_f=0,media_m=0,media_f=0;

    for(i=0;i<3;i++)
    {
        printf("\nDigite o numero da conta: ");
        scanf("%d",&cli[i].num);
        printf("Digite o nome do cliente: ");
        scanf("%s",&cli[i].nom.nome);
        printf("Digite o sobrenome do cliente: ");
        scanf("%s",&cli[i].nom.sobrenome);
        printf("Digite o sexo do cliente (F ou M): ");
        scanf("%s",&cli[i].sexo);
        printf("Digite o saldo da conta: ");
        scanf("%f",&cli[i].saldo);

        if(cli[i].sexo == 'F')
        {
            total_f += cli[i].saldo;

            if(cli[i].saldo < menor_f || menor_f == 0)
            {
                menor_f = cli[i].saldo;
            }
            if(cli[i].saldo > maior_f || maior_f == 0)
            {
                maior_f = cli[i].saldo;
            }
            f++;
        }
        if(cli[i].sexo == 'M')
        {
            total_m += cli[i].saldo;
            if(cli[i].saldo < menor_m || menor_m == 0)
            {
                menor_m = cli[i].saldo;
            }
            if(cli[i].saldo > maior_m || maior_m == 0)
            {
                maior_m = cli[i].saldo;
            }
            m++;
        }
    }

    media_m = total_m/m;
    media_f = total_f/f;

    puts("--------------------------------------------------");
    printf("\nSaldo medio das mulheres: %.2f",media_f);
    printf("\nSaldo medio dos homens: %.2f",media_m);

    printf("\nMaior saldo das mulheres: %.2f",maior_f);
    printf("\nMaior saldo dos homens: %.2f",maior_m);

    printf("\nMenor saldo das mulheres: %.2f",menor_f);
    printf("\nMenor saldo dos homens: RS %.2f\n",menor_m);
}
