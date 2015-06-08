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

```c

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



