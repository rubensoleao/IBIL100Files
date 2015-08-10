// Rafael Stefanini Carreira

//Faça um programa em Linguagem C para criar uma estrutura cujos campos são: notaprova, notatrabalho, média e nome.
//Ler o nome, as notas do aluno e calcular a média do bimestre, armazenando o valor no campo média.
//Imprimir os dados iniciais e a média calculada.

#include<stdio.h>

main()
{
    struct notas	//registro que guarda as informações do aluno
    {
        float notaprova;
        float notatrabalho;
        float media;
        char nome[50];
    }not;

    //leitura das informações

    printf("Digite o nome do aluno: ");
    scanf("%s",&not.nome);

    printf("Digite a nota da prova: ");
    scanf("%f",&not.notaprova);

    printf("Digite a nota do trabalho: ");
    scanf("%f",&not.notatrabalho);

    //calculo da média e saidas

    not.media = (not.notaprova + not.notatrabalho)/2;

    printf("\n-------- Dados do Aluno -----------");
    printf("\nNome: %s",not.nome);
    printf("\nNota da prova: %.2f",not.notaprova);
    printf("\nNota do Trabalho: %.2f",not.notatrabalho);
    printf("\nMedia: %.2f\n",not.media);
}
