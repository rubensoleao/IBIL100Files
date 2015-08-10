//Rafael Stefanini Carreira


#include <stdio.h>
#include <stdlib.h>

typedef struct Prop{
	
	int codprop;	
	char nome[100];
}prop;



typedef struct Nasc{
	
	char mes[30];
	int ano;
}nasc;

	
typedef struct Cadastro{

	int codigo;
	float leite;
	float alim;
	nasc *data;
	char abate;
	prop *proprietario;
}cadastro;


void cadastrar( int codigo, float leite, float alim, Nasc*data, char mes, int ano, int codprop, char nome){



	for( int i=0; i<2000; i++ ){

		printf("Digite o codigo do animal:\n");
		scanf("%d", &cadastro.codigo);
		printf("Digite a quantidade de leite produzida por semana:\n");
		scanf("%f", &cadastro.leite);
		printf("Digite o mês do nascimento do animal:\n");
		scanf("%[^/n]s", cadastro.data->mes);
			

	}
}

main()
{






}
