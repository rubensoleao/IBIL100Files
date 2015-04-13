### Revisando conceitos de C/C++ e orientação a objetos

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

>**OBS:** Os compiladores que reconhecem C++ ao invés de somente C, oferecem a possibilidade de utilizarmos um comando particular, um para entrada e um para saida de dados. Esses comandos, chamados `cout` e `cin`, não possuem, em princípio, uma ligação com conceitos de POO, tratando-se apenas de possibilidades adicionais que podem ser utilizadas.  A seguir, alguns exemplos da sintaxe para utiliza-los.
>```c
>cout<<"\nOi\t Boi\r Boa tarde";
>```

Qual é a saída de tela produzida pelo treixo de código a seguir:

```c
char c='a';
cout<<"\n\n"<<c<<"\n\n";
printf("%c\n\n",c);
printf("\n\n%d\n\n",c);
```

> a
> a
> 97


Lembramos que `printf` assim como `scanf` é mais versátil para controlar a formatação da saída de tela. Adicionalmente, lembramos que a linguagem C/C++ é **tipada**, o que significa que distingue entre os tipos `char`,`int`, mas não é **fortemente tipada** pois, se assim fosse, não aceitaria declarações do tipo`char c=70`, que é perfeitamente válido em C/C++.



### Trexo de código que converta maiuscalas em minusculas, solicitando e lendo do teclado a string original, com no maximo 30 caracteres.

``` c

char string[31];
int i=0;
cout<<"Digite uma palavra(max 30 caracteres)\n";
cin>>string;

while(string[i] != '\0' && i<32)
{
    if(string[i] >= 65 && string[i] <= 90 )
      string[i]+=32;
    i++;
}
cout<<string;

```

### Operador condicional ternário em C e java

Trata-se de um modo abreviado de escrever um comando `if` .. `else` que atribua valores diferentes a uma única variável. Exemplificando, os trechos a seguir são equivalentes:

```c
if(a>0)
  x=5;
else
  x=10;
  
  // é equivalente a:
  
x=(a>0)?5:10  

```




