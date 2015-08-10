//Rafael Stefanini Carreira

//Considere o exercício 11. Apresente os endereços de memória de cada struct e dos ponteiros correspondentes. 
//É possível executar incrementos simples, como somar +1, +2 e +3 a cada ponteiro, a partir dos endereços das structs. 
//Se sim, quais os respectivos endereços e diferenças em bytes entre os mesmos. 
//Ainda em caso de positivo, o que cada incremento representa? Explique utilizando um modelo esquemático de memória. Caso não seja possível, justifique sua resposta.

//Sim, é possivel. A cada incremento pulamos para a "proxima estrutura do mesmo tipo" e assim depende do tamanho que o struct ocupa na memoria.
//EX: Se a estrutura ocupar 4 bytes, a cada incremento estaremos pulando 4 bytes na memória.


