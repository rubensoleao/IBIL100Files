template<class type>class nopilha
{
private:
public:
	type info;
	nopilha<type>* prox;
	nopilha(type,nopilha<type>*);
//friend class pilha<type>;
};

template <class type>class pilha
{
private:
	nopilha<type>* topo;
	int tam;
public:
	pilha();
	~pilha();
	void push(type);
	void pop();
	type top();
	int empty();
	int lenght();
};
