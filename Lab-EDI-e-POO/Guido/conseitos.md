### Revisando conceitos de c/c++ e orientação a objetos

Sabemos que a declaração `int x[10]` aloca estáticamente 10 posições inteiras para as quais a região de memória correspondente fica pré alocada, sem o risco de ser alocada por outra variavel.
é possivel encontrarmos declarações tais como:

``` c
int c=10;
int x[c];
```
que quando compiladas, serão aceitas e executadas, entretanto, em pricipio, existe um erro conceitual nesse procedimento pois em sendo `c` um variável, o seu valor pode ser alterado, oque causaria reflexão na dimenção do vetor. Desse modo, é indicada a utilização da palavra reservada `const` da seguinte forma:

```c
const int c=10;
int x[c];
```

Podemos ainda utilizar a alocação dinâmica de memória escrevendo, ao invés de `int x[10];`, `int *x;`. **Na prática** ambas as formas podem ser encaradas como vetores, entretanto, `int *x;` não pré-aloca um determinado número de unidades de memoria. Assim sendo, embora possamos utilizar `x` como vetor, corremos o risco de atingir posições de memoria que estão sendo ou podem ser utilizadas para outros fins, o que causará consideravel problema. Podemos aprimorar esse modo de declarar o vetor `x` utilizando o operador `new` do C++, pelo qual declaramos `x` como um ponteiro, isto é, um vetor sem indicação da quantidade de memória a ser coberto e simultaneamente pré-alocar uma determinada região da memória da seguinte forma.

```c
int *x=new int[10];
```

Procedendo desse modo, temos a versatilidade de utilizar, sem maiores proplemas o seguinte bloco de código:

```c
int c=10;
int *x=new int[10]
``` 

Sem que `c` tenha que ser caracterizada como `const`.
