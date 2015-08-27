#include "pilha.c"
#include <stdio.h>
main()
{

	pilha<int> p;
	p.push(6);
	p.push(7);
	printf("%d",p.top());
}
