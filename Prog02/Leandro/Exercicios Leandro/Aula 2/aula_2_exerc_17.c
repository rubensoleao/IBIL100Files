//Rafael Stefanini Carreira

// Explique o que acontece nas atribuicoes abaixo. Considere que p e q sao ponteiros e item um atributo de um registro:


p->item = q->item;   //o campo item da struct apontada por p recebe o valor do campo item da struct apontada por q
p = p->prox;    // p recebe o endereço de memória apontado pelo ponteiro prox.
p = q;          // p passa a apontar para a mesma struct que q.
p->prox = q;    // o campo prox da struct apontada por p recebe o endereço de memoria de q
q->ant = p;     // o campo ant da struct apontada por q recebe o endereço de memoria de p
p->prox = NULL;  // o campo prox da struct apontada por p recebe NULL(não aponta pra nada) 
p=p->prox->prox;  // o ponteiro p recebe o endereço de memória do campo prox da struct que o campo prox aponta
p->prox = q->prox; // o campo prox da struct apontada por p recebe o campo prox da struct apontada por q
