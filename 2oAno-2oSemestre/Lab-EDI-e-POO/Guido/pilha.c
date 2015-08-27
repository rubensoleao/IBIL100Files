#include "pilha.h"

template <class type> nopilha<type>::nopilha(type e,nopilha<type>* p)
{
	info=e;
	prox=p;
}

template<class type> pilha<type>::pilha()
{
	tam=0;
	topo=0;
}

template<class type> pilha<type>::~pilha()
{
	while(!empty())
		pop();
}


template<class type> void pilha<type>::push(type i)
{
	nopilha<type>* p=new nopilha<type>(i,0);
	p->prox=topo;
	topo=p;
	tam++;

}

template<class type> void pilha<type>::pop()
{
	if(!empty())
	{
		nopilha<type>* p=topo;
		topo=topo->prox;
		delete(p);
		tam--;
	}
}


template<class type> type pilha<type>::top()
{
	if(!empty())
		return topo->info;
	return 0;
}


template<class type> int pilha<type>::empty()
{
	if(tam==0)
		return 1;
	return 0;
}


template<class type> int pilha<type>::lenght()
{
	return tam;
}


