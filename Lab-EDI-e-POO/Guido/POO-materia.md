## LAB POO

-------------

- Exemplo:

Defina o tipo abstrato de dados "Estudante", implementando-o em seguida e testando os metodos.

- Solução:

### ----------  estudante.h -----------------

```c
  class estudante
  {
  	private:
  		char* nome=new char[50];
  		int idade;
  		char* cpf=new char[15];
  	public:
  		estudante();
  		~estudante();
  		void insere(char*,int,char*);
  		int informaIdade(char*);
  		void escreveCpf(char*);
  };
```


### ------------ estudante.c -------------------

```c  
  #include "estudante.h"
  #include "string.h"
  
  
  estudante::estudante()
  {
  }
  
  estudante::~estudante()
  {
  }
  
  void estudante::insere(char* n,int i,char* c)
  {
  	strcpy(nome,n);
  	idade=i;
  	strcpy(cpf,c);
  }
  
  int estudante::informaIdade(char* n)
  {
  	if (strcmp(nome,n)==0)
  		return(idade);
  	return(-1);
  }
  
  void estudante::escreveCpf(char* n)
  {
  	if (strcmp(nome,n)==0)
  		cout<<cpf;
  	else
  		cout<<"\nErro";
  }
```
### --------------- estudante.cpp ----------------

```c
#include "estudante.c"
main()
{
  estudante e;
}

```

------------

#### Ex: Usando a classe estudante, solicite e leia do teclado 5 estudantes e em seguida solicite e leia um nome informando a idade e cpf caso o nome existe, caso contrario emita msg de erro.

- Adicionar a definição `int ok(char*)` ao arquivo `.h` e a implementação a seguir no arquivo `.c`

###  -------------estudante.c ----------

```c
int estudante::ok(char* n)
{
	if(strcmp(nome,n)==0)return 1;
	return 0;
}
```

--------------

### --------------- estudante.cpp ----------------

```c

#include "estudante.c"
#include <iostream>
#include <stdio.h>
#define NUM 2
main()
{
	estudante e[NUM];
	char n[50];
	int i,idade;
	char cpf[15];
	int ok;

	for(i=0;i<NUM;i++)
	{
		puts("Digite o Nome: ");
		std::cin>>n;
		puts("Digite a idada: ");
		scanf("%d",&idade);
		puts("Digite o CPF: ");
		scanf("%s",cpf);
		e[i].insere(n,idade,cpf);
	}

	puts("Digite um dos carinhas aee: ");
	std::cin>>n;
	puts("-----------------------------------------");
	ok=0;
	
	for(i=0;i<NUM;i++)
	{
		if(e[i].ok(n))
		{
			ok=1;
			printf("Idade: %d\nCPF: ",e[i].informaIdade(n));
			e[i].escreveCpf(n);
		}
	}

	
	ok?:puts("não encontrado");
	puts("\n----------------------------");

}

```
- Obs: O uso de classes em c++ permite a aplicação de templates, pelos quais passamos como parâmetros os tipos de determinadas variaveis. Utilizaremos em seguida esse conceito na construção de tipos abstratos de dados que definam e implementam estruturas de dados.

-------

#### Repetir o exercicio do analizador de expreções matemátias com a implementação corrente da pilha
```c
//Rafael Stefanini Carreira
//Mini Prova 5

#include "pilha.c"
#include <stdio.h>
main()
{
char* ex=new char[50];
puts("Digite a Expressão: ");
scanf("%s",ex);
pilha<char> p;
while(*ex)
{
	if(*ex=='(' ||*ex=='{' ||*ex=='[')
		p.push(*ex);
	else if(*ex==')' && p.top()=='(' || *ex=='}' && p.top()=='{' || *ex==']' && p.top()=='[')
		p.pop();
	ex++;
}
if(p.lenght())puts("expressão inválida");
else puts("ok");
}	

```

-------
### Aula 08/06/2015

### Tipo abstrato de dados - Fila

Do mesmo modo como utilizamos classes para implementar o TAD Pilha, definiremos( .h), implementaremos(.c) e experimentaremos (.cpp) o TAD Fila utilizando classes e os conceitos de orientação a objetos.

- Ex: Defina o TAD Fila utilizando classes
- Solução:

### ------------ Fila.h ------------------

```cpp

template <class type> class nofila
{
private:
	type info;
	nofila<type>* prox;
public:
	nofila(type,nofila<type>*);
friend class fila<type>;
};

template <class type> class fila
{
private:
	int tam;
	nofila<type>* inicio;
	nofila<type>* fim;
public:
	void insert(type);
	void remove();
	type front();
	int empty();
	int lenght();
	fila();
	~fila();
};

```

--------
- Implementação do TAD Fila
### ----------------- Fila.c -------------------
```cpp

#include "Fila.h"

template<class type> nofila<type>::nofila(type item,nofila<type>* lig)
{
	info=item;
	prox=lig;
}

template<class type> fila <type>::fila()
{
	inicio=0; //NULL
	fim=0;	  //NULL
	tam=0;
}

template<class type> void fila<type>::insert(type item)
{
	nofila<type>* f=new nofila<type>(item,0);
	if(tam==0)
	{
		inicio=f;
		fim=f;
	}
	else
	{
		fim->prox = f;
		fim=f;
	}
	tam++;
}

template<class type> void fila<type>::remove()
{
	if(tam>0)
	{
		nofila<type>* f=inicio;
		inicio=inicio->prox;
		delete(f);
		tam--;
	}
}

template<class type> type fila<type>::front()
{
	if(tam>0)
		return(inicio->info);
	return(0);
}

template<class type> int fila<type>::empty()
{
	return( (tam==0)?1:0 );
}

template<class type> int fila<type>::lenght()
{
	return(tam);
}

template<class type> fila<type>::~fila()
{
	while(!empty())
		remove();
}

```

--------
- Teste do TAD Fila
### ----------------- Fila.cpp -------------------
```cpp

#include "Fila.c"
#include <stdio.h>

main()
{
	fila<int> f;
	f.insert(32);
	f.insert(5);
	f.remove();
	printf("\n o valor é %d \n",f.front());
}

```

-----

- Ex usando o TAD Fila, simule uma fila bancária com caixa único fazendo com que ocora chegada de clientes e tambem atendimentos. O sistema deve fazer com que os clientes cheguem e sejam atendidos automaticamente com base em valorem ramdomicos sorteados pelo próprio programa. A sugestão é que valores positivos provoquem uma inserção enquanto que os negativos ocoram atendimentos. Permita que o programe execute por 1 minuto verificando ao final qual é o numero de clientes na fila. Execute o algoritmo 10 vezes e calcule o número médio de clientes na fila. Repita o processo para 30 execuções.


-----------

### aula 15/06


### Arvores de Busca Binaria

são estruturas de dados não lineares para as quais a partir de um determinado nó podemos ter referencia para até 2 outros nós. A inserção de elementos deve ser realizada conforme já foi discutido na teoria, procurando, a partir do primeiro nó, chamado raiz, a posição ideal para que o novo elemento seja inserido, posicionado-o à esquerda ou à direita de cada nó caso o seu valor seja menos ou mais respectivamente.
Com relação à busca das informações na arvore, temos 3 modos diferentes de realiza-la:

- Busca em Ordem
- Busca em Pré-Ordem
- Busca em Pós-Ordem

#### Exemplo:

- Realize a inserção dos seguintes valores em uma arvore de busca binaria: 5, 8, 7, 2, 10, 1, 0 e 20. Em seguida recupere as informações inseridas pelas 3 técnicas de busca.

- Implementação do TAD arvore binaria em C++

### ----------- arvore.h ---------------------

```cpp
template<class type> class nobintree
{
private:
	type info;
	nobintree<type>* pleft;
	nobintree<type>* pright;
public:
	nobintree(type,nobintree<type>*,nobintree<type>*);
	nobintree<type>* left(); //retorna a referencia do elemento à esquerda do nó corrente  
	nobintree<type>* right(); //retorna a referencia do elemento à direita do nó corrente 
	void left(type); // inserção a esquerda
	void right(type); //inserção a direita
	type content(); //retorna o conteudo do nó corrente
friend class bintree<type>;
};

template<class type> class bintree
{
private:
	nobintree<type>* raiz;
	int tam;
public:
	bintree();
	void insert(type);
	nobintree<type>* root();
	void posordem(nobintree<type>*);
	void emordem(nobintree<type>*);
	void preordem(nobintree<type>*);
};

```

### ------------------------- arvore.c ----------------------

```cpp
#include "arvore.h"
#include <iostream>

template<class type> nobintree<type>* nobintree<type>::left()
{
	return(pleft);
}

template<class type> void nobintree<type>::left(type item)
{
	if(pleft == NULL)
		pleft=new nobintree<type>(item,NULL,NULL);
}

template<class type> nobintree<type>::nobintree(type i,nobintree<type>* e,nobintree<type>* d)
{
	info=i;
	pleft=e;
	pright=d;
}


template<class type> nobintree<type>* nobintree<type>::right()
{
	return(pright);
}

template<class type> void nobintree<type>::right(type item)
{
	if(pright == NULL)
		pright=new nobintree<type>(item,NULL,NULL);
}

template<class type> type nobintree<type>::content()
{
	return(info);
}

template<class type> bintree<type>::bintree()
{
	raiz=NULL;
	tam=0;
}

template<class type> void bintree<type>::insert(type item)
{
	if(raiz==NULL)
		raiz=new nobintree<type>(item,NULL,NULL);
	else
	{
		nobintree<type>* p;
		nobintree<type>* q;
		p=q=raiz;
		while(q != NULL)
		{
			p=q;
			if(item < q->content())
				q=q->left();
			else
				q=q->right();
		}
		if(item < p->content())
			p->left(item);
		else
			p->right(item);
	}
	
	tam++;
}

template <class type> void bintree<type>::preordem(nobintree<type>* p)
{
	if(p!= NULL)
	{
		std::cout<<"\n"<<p->content();
		preordem(p->left());
		preordem(p->right());
	}
}

template <class type> void bintree<type>::emordem(nobintree<type>* p)
{
	if(p!= NULL)
	{
		emordem(p->left());
		std::cout<<"\n"<<p->content();
		emordem(p->right());
	}
}

template <class type> void bintree<type>::posordem(nobintree<type>* p)
{
	if(p!= NULL)
	{
		posordem(p->left());
		posordem(p->right());
		std::cout<<"\n"<<p->content();
	}
}

template<class type> nobintree<type>* bintree<type>::root()
{
	return(raiz);
}

```


### ---------------------- arvore.cpp ---------------------

```cpp
#include "arvore.c"

main()
{
	bintree<int> p;
	p.insert(5);
	//...
	//...
	p.posordem(p.root());
}


```

-----------------------------

### Exercicios:
- Crie métodos e/ou modifique os existentes para:
   - Apagar uma arvore
   - Contar o número de nos de uma arvore que são folhas
   - Comparar se 2 sub arvores origirárias de um mesmo nó são ou não identicas
   - Encontrar o nível de uma arvore
 
--------------




### TAD Lista

### -------------------   .h   ----------------------

```cpp
template<class type> class nolista
{
	private:
			type info;
			nolista<type> *prox;
	private:
			nolista(type, nolista<type>*);
	friend class lista<type>;
};

template<class type>class lista
{
	private:
			nolista<type>* inicio;
			nolista<type>* corrente;
			int tamanho;
	public:
			void insert(type);
			void remove();
			type front();
			type current();
			int empty();
			int lenght();
			lista();
			~lista();
			int find(type);
};

```

### ----------------  .c ------------------

```cpp
#include"lista.h"
template<class type> nolista<type>::nolista(type item,nolista<type>* p)
{
	info=item;
	prox=p;
}

template<class type> lista<type>::lista()
{
	inicio=corrente=NULL;
	tamanho=0;
}

template<class type> void lista<type>::insert(type item)
{
	nolista<type> *p=new nolista<type>(item,NULL);
	if(inicio==NULL)
		inicio=corrente=p;
	else
	{
		p->prox=corrente->prox;
		corrente->prox=p;
	}
	tamanho++;
}

template<class type> type lista<type>::front()
{
	if(!empty())
		return(inicio->info);
	return(NULL);
}

template<class type> void lista<type>::remove()
{
	if(!empty())
	{
		nolista<type> *p=inicio;
		if(tamanho==1)
		{
			delete(p);
			inicio=corrente=NULL;
		}
		else if(corrente==inicio)
		{
			inicio=inicio->prox;
			delete(corrente);
			corrente=inicio;
		}
		else
		{
			while(p->prox!=corrente)
				p=p->prox;
			p->prox=corrente->prox;
			delete(corrente);
			corrente=p->prox;
		}
		tamanho--;
	}
}

template<class type> int lista<type>::empty()
{
	return((tamanho==0)?1:0);
}

template<class type> type lista<type>::current()
{
	if(corrente!=NULL)
		return(corrente->info);
	return(NULL);
}

template<class type> int lista<type>::lenght()
{
	return(tamanho);
}

template<class type> lista<type>::~lista()
{
	while(!empty())
	remove();
}

template<class type> int lista<type>::find(type item)
{
	if(!empty())
	{
		nolista<type> *p=inicio;
		while(p!=NULL && p->info!=item)
			p=p->prox;
		if(p->info==item)
		{
			corrente=p;
			return(1);
		}
	}
	return(0);
	
}
```

### ------------------------ .cpp -------------------
```cpp
#include"lista.c"
main()
{
	lista<int> l;
	l.insert(5);
	l.insert(6);
	
}
```

-----

- Ex: Definir e implementar um metodo para imprimir a lista







