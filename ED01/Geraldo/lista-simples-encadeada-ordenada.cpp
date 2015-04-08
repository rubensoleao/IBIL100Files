/*
Aula Geraldo 07/04/2015
Listas
*/

#include <iostream>

//Alguns compiladores reclamam de usar cin e cout para não dar
//o erro use os namespace:
using std::cin;
using std::cout;

int main(){
	
	/*Alguns compiladores rejeitam usar só o struct, precisa-se
	do typedef*/

	typedef	struct lista 
	{
		int num;
		lista *prox;
	}lista;

	//Ponteiro para o primeiro elemento

	lista *inicio = NULL; 

	// Ponteiro para o ultimo elemento

	lista *fim = NULL;

	//Ponteiro auxiliar
	
	lista *aux;

	//Ponteiro auxiliar(do elemento anterior)
	
	lista *anterior;

	int op, numero, achou;
	
	do
	{
		//Imprime o menu

		cout<<"Menu \n";
		cout<<"1 - Inserir elemento\n";
		cout<<"2 - Consultar toda a lista\n";
		cout<<"3 - Remover da lista\n";
		cout<<"4 - Esvaziar a Lista \n";
		cout<<"5 - Sair\n";
		cout<<"Digite Opcao: ";
	
		cin>>op;

		//Caso op invalido
		if (op < 1 || op > 5)
			cout<<"\nopcao invalida\n";

		if (op == 1) //inserir elemento
		{
			cout<<"\nDigite o número a ser inserido: ";
			lista *novo = new lista();
			cin>>novo->num;

			if(inicio == NULL) //lista vazia
			{
				inicio = novo;
				inicio -> prox = NULL;
				fim = novo;
			}
			else // lista com elementos
			{
				anterior = NULL;
				aux = inicio;
				while( aux != NULL && novo -> num > aux -> num)
				{
					anterior = aux;
					aux = aux -> prox;
				}
				if(anterior == NULL)  //menor numero
				{
					novo -> prox = inicio;
					inicio = novo;
				}
				else if(aux == NULL) //maior numero
				{
					fim -> prox = novo;
					fim = novo;
					fim -> prox = NULL;
				}
				else // entre 2 elementos
				{
					anterior -> prox = novo;
					novo -> prox = aux;
				}
			}
		} //fim op == 1

		if(op == 2) //consultar lista
		{
			if(inicio == NULL)
				cout<<"\nLista vazia!\n";
			else // com elementos
			{
				aux = inicio;
				while(aux != NULL)
				{
					cout<< aux -> num << "\n";
					aux = aux -> prox;
				}
			}
		} // fim op == 2
		
		if(op == 3) // remover da lista
		{
			if(inicio == NULL)
				cout<<"\nLista vazia!\n";
			else // com elementos
			{
				cout<<"\nDigite o elemento a ser removido: ";
				cin>>numero;
				aux = inicio;
				anterior = NULL;
				achou = 0;
				while(aux != NULL)
				{
					if(numero == aux -> num) // encontrou elemento
					{
						achou=achou+1;

						if(anterior == NULL) //primeiro elemento
						{
							inicio = aux -> prox;
							delete(aux);
							aux = inicio;
						}
						else if(aux -> prox == NULL) // ultimo elemento
						{
							
							fim = anterior;
							delete(aux);
							aux = NULL;
						}
						else // entre 2 elementos
						{
							anterior -> prox = aux -> prox;
							delete(aux);
							aux = anterior -> prox;
						}
					}
					else // não encontrou
					{
						anterior = aux;						
						aux = aux -> prox;
					}
				} //fim while
				
				if(achou==0)
					cout<<"\nNumero nao encontrado\n";
				else if (achou == 1)
					cout<<"Numero removido 1 vez\n";
				else
					cout<<"Numero removido "<<achou<<" vezes\n";
			}
		} //fim op == 3
		
		if(op == 4) //esvaziar lista
		{
			if(inicio == NULL)
				cout<<"\nLista vazia!\n";
			else //com elementos
			{
				aux = inicio;
				while(aux != NULL)
				{
					inicio = inicio -> prox;
					delete(aux);
					aux = inicio;
				}
			}
		} //fim op == 4
	} while(op != 5);
} //fim main

