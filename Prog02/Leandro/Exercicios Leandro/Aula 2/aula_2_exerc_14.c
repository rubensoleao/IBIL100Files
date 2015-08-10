//Rafael Stefanini Carreira

//O que as linhas abaixo fazem?

int a=3, b=9; // declaração e atribuição de suas variaveis int
int *p;  // declaração de um ponteiro para int
int *q;  // declaração de um ponteiro para int
p = &a;  // o ponteiro p recebe o endereço de memória de a
q = &b;  // o ponteiro q recebe o endereço de memória de b
int c = *p + *q;  // declara uma variavel int com a soma dos valores apontados por p e q, no caso, 3 + 9
