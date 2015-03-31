#include <iostream>

//Alguns compiladores reclamam de usar cin e cout para não dar
//o erro use os namespace:
//using std::cin;
//using std::cout;

void main(){
	
	/*Alguns compiladores rejeitam usar só o struct, precis-se
	do typedef*/

	struct lista 
	{
		int num;
		lista *prox;
	};

	//Primeiro elemento da Lista

	lista *inicio = NULL 

	// Ultimo elemento da Lista

	lista *fim = NULL;

	//Ponta de beck auxiliar
	lista *aux;

	//Ponta de beck anterior
	
	lista *anterior;

	int op, numero, achou;
	
	do
	{
		//Imprime o menu

		cout<<"Menu \n";
		cout<<"1 - Insere no inicio\n";
		cout<<"2 - Isnere no fim\n";
		cout<<"3 - Consultar toda Lista\n";
		cout<<"4 - Remover da lista\n";
		cout<<"5 - Esvaziar a Lista \n";
		cout<<"6 - Sair\n";
		cout<<"Digite Opcao"
	
		cin>>op;

		//Caso op invalido
		if (op < 1 || op > 6)
			cout<<"opcao invalida\n";

		//Insere no inicio
		if(op==1){
			cout<< "Digite um numero a ser inserido no inicio\n"
			
			//Insere elemento na listaa
			lista *novo = new lista();
			if(inicio == NULL) { 	//LISTA VAZIA
				inicio = novo;
				fim = novo;
				fim->prox = NULL;
			} else {				//Lista n vazia
				novo->prox = inicio;
				inicio = novo
			}
		}

		//Insere no fim
		if (op == 2) {
			cout<<"Insere elemento no fim\n";
			lista *novo = new lista();
			cin>>novo->num;

			if (incio==NULL) {	// Lista vazia
				inicio = novo;
				fim = novo;
				fim->prox=NULL;
			} 
			else {			// Lista N vazia
				fim->prox=novo;
				fim=novo;
				fim->prox=NULL;
			}
		}

		//Consultar Lista
		if (op ==3) {
			if(inicio==NULL) { 	//Lista vazia
				cout<<"Lista vazia\n";
			}	else {
				aux = inicio;
				while(aux != NULL) {
					cout<<aux->num<<"\n";
					aux = aux->prox;
				}
			}
		}

	} while();
}