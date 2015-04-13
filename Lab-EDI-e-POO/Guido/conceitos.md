## Revisando conceitos de C/C++ e orientação a objetos

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

a
a
97


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

### Exercício:

- Construir uma função que receba como parâmetro uma string e o seu tamanho, e não retorne nenhum valor. A string deve ser modificada de modo que depois da chamada da função ela passe a conter todos os caracteres maiusculos

```c

#include <iostream>
#include <stdio.h>

using std::cin;
using std::cout;

void toUpper(char *s, int t);

int main()
{
//      char *s;
        int t;
        puts("Digite o números de caracteres na frase: ");
        cin>>t;
        char *s=new char[t+1];
        s[0]='a';
        cout<<"\nDigite a frase\n";

//      cin>>s;
        scanf("%[^\n]",s);

        cout<<"\n----------------------------------\n";
        cout<<"Antes: "<<s;
        toUpper(s,t);
        cout<<"\nDepois: "<<s<<"\n";
        cout<<"\n----------------------------------\n";

        return 0;
}

void toUpper(char *s,int t)
{
        int i;
        for(i=0;i<t || s[i]=='\0' ;i++)
                if( s[i] >= 97 && s[i] <= 122)
                        s[i]-=32;



}

```

> **Observação** :  No código acima notamos que muito embora a função contruida para manipular a string receba-a como parâmetro com base na sintaxe de ponteiros, é perfeitamente possivel e tambem muito usual minipular este paramentro dentro da função usando a notação de vetores.

> **Observação 2** : No momento da chamada da função no programa princial, a string pode ser passada como parâmetro, simplesmente mencionando o seu nome ou inserindo o `&` e o `[0]` respectivamente antes e depois de seu nome, isto é:`&s[0]` . Ambas as formas são equivalentes, sendo que a primeira é mais usual e a segunda é mais versátil, pois permite passar o vetor a partir de uma certa posição, de modo que é possivel por exemplo escrever` &s[15]`.

### Idem anterior sendo que a função possui como parâmetro somente a string
- **Solução** : procederiamos da mesma forma, mas dentro da função modifica encontrariamos o `\0` ou utilizariamos a função `strlen`

### Suponha que desejamos fazer uma busca em um vetor de inteiros de modo a verificar quantos valores negativos existem nele. Nossa tarefa é construir apenas a função que recebe como parametro o vetor e seu tamanho.
- **Solução** : Dentro da função fariamos a busta com um laço `for` controlado pelo tamanho do vetor, que foi recebido por parâmetro, retornando o valor desejado que é contabilizado com o auxilio de uma variavel inteira

### Idem anterior mais assumindo que a função somente receba por parametro o vetor e não o seu tamanho.
- **Solução** : 

```c

int analisa(int* v)
{
    int c=0;
    int t=(int)(sizeof(v)/sizeof(int))
    
    for(int i=0;i<t;i++)
        if(v[i] < 0)
            c++;
    return c;
}

```
- **Observação** : facilmente podemos determinar, conforme foi feito no código acima, o tamanho de um vetor utilizando a função `sizeof`. Devemos notar que a função retorna o numero de bytes do vetor, portanto, o numero de elementos desse vetor é a razão entre o seu tamanho em bytes e o tamanho de seu tipo, em bytes.

- **Observação 2** : Notamos no código acima a possibilidade assim como a necessidade da conversão explicita de tipo, pois qualquer divisão, tal como `sizeof v / sizeof int ` resuta em um numero real, ainda que os operadores sejão multiplos, por isso, se vamos atribuir a uma variavel inteira o resultado de uma divisão é necessario converter esse resultado, que é um numero real em um inteiro. Essa convesão, tambem chamada de **casting** é realizada indicando na frente da operação de divisão o tipo a ser convertido entre parenteses, conforme segue: ` variavel=(int)(divisão)`.








