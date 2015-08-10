//Rafael Stefanini Carreira

//O que as linhas abaixo fazem?


int i=4, j=6;  // Declaração e atribuição de duas variáveis int
int *p;    // declaração de um ponteiro para int
int **r;  // declaração de um ponteiro para um ponteiro de int 
p = &i;   // p recebe o endereço de memória de i
r = &p;   // r recebe o endereço de memória do ponteiro p
c = **r + j;   // c recebe a soma do de j e do valor apontado por pelo ponteiro que r aponta, r aponta para p, e p aponta para i, então **r = i

