//Rafael Stefanini Carreira

//Defina um registro para armazenar os dados (nome, sobrenome, data de nascimento, RG, data de admissão, salário) de um empregado em uma empresa.
//Use um ponteiro para acessar cada atributo. Apresente os dados armazenados.

#include<stdio.h>
#include<strings.h>

main()
{
    typedef struct dados
    {
        char nome[50];
        char sobrenome[50];
        char nascimento[11];
        char rg[20];
        char data[11];
        float salario;
    }dados;

    dados func, *p;
    p = &func;

    printf("\nDigite o nome: ");
    scanf("%s",p->nome);
    printf("Digite o sobrenome: ");
    scanf("%s",p->sobrenome);
    printf("Digite a data de nascimento: ");
    scanf("%s",p->nascimento);
    printf("Digite o rg: ");
    scanf("%s",p->rg);
    printf("Digite a data de admissao: ");
    scanf("%s",p->data);
    printf("Digite o salario: ");
    scanf("%f",&p->salario);

    puts("\n-----------------------------------------\n");

    printf("Nome: %s", p->nome);
    printf("\nSobrenome: %s", p->sobrenome);
    printf("\nData de nasc: %s", p->nascimento);
    printf("\nRG: %s", p->rg);
    printf("\nAdmissao: %s", p->data);
    printf("\nSalario: %.2f\n\n", p->salario);
}


//R: Sim, pois ao utilizar o typedef nós definimos um tipo de dado
