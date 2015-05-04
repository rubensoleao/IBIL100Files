> 13 de Abril de 2015

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

---

> 27 de Abril de 2015

---

## Declaração dinâmica de matrizes

Do mesmo modo como declaramos vetores para os quais tamanho poderia vir a ser definido em termpo de execução, é possivel realizar o mesmo procedimento em duas dimensões. Desse modo, a declaração a seguir:

```c
int linhas=10;
int colunas=20;
int m[linhas][colunas]
```

É na maioria da vezes, possível de ser inclusa e aceita pelos compiladores, mas é **incorreta** para garantir alocação de memória. O procedimento indicado é na verdade o seguinte:

```c
int linhas=10;
int colunas=20;
int **m=new int*[linhas];
for(int i=0;i<linhas;i++)
    m[i]=new int[colunas]
```
Do mesmo modo, como fizemos em uma dimensão podemos tambem utilizar a estrutura de ponteiros para a passagem de parâmetros. Assim, considerando a matriz `m` do código acima podemos por exemplo passa-la como parâmetro da seguinte forma: `modifica(m,linhas,colunas);` Sendo que a construção da funcão modifica é tal que fazemos:

```c
void modifica(int** x,int l,int c)
{
..
..
..
}
```

Do mesmo modo como realizado em uma dimensão, podemos passar como parâmetro tambem a matriz a partir de uma linha específica da seguinte forma:` modifica(&m[0],linhas,colunas)` trocando o `0` por qualquer outro valor válido.
O exemplo a seguir exercita a prática com matrizes.

- **Exemplo 1**: Construa um programa que solicite e leia do teclado uma matriz `A` para a qual o número de linhas e de colunas é definido pelo usuário. Solicite e leia tambem um vetor `B`, de dimensão compatível, de tal forma que, a matriz e o vetor representem matricialmente um sistema linear `Ax=B` para o qual o número de equaçoes e o número de incognitas correspondam as dimensões da matriz conforme definido pelo usuario. Apos a leitura de A e B, chame uma função que receba como parametros a matriz o vetor e as dimensões e escreva de dentro da função a matriz na tela.

- **Exemplo 2**: Aproveitando o código anterior faça com que a função mencionada acima modifique `A` e `B` de tal forma que eles passem a representar um sistema linear equivalente na forma triangularizada, escrevendo no programa principal e apos a chamada da função o sistema escalonado na tela.

- **Exemplo 3** Aproveitando o código anterior faça com que a função referenciada acima, alem de triangularizar o sistema, resolva-o, sendo que deve ser escrito na tela, após a chamada da função e dentro do programa princial a soçução do sistema.

- **Solução**

```c

	
#include <iostream>
#include <stdio.h>
void mostraTudo(float**,float*,int,int);
void escalona(float**,float*,int,int);
void resolve(float**,float*,int,int);
 
int main()
{
    int l,c,i,j;
 
    puts("Digite o nΓΊmeros de equaΓ§Γµes: ");
    scanf("%d",&l);
    puts("\nDigite o nΓΊmeros de incΓ³gnitas: ");
    scanf("%d",&c);
 
    float **A=new float*[l];
     
    for(i=0;i<l;i++)
        A[i]=new float[c];
     
    float *B=new float[l];
 
    puts("\nDigite os elementos da matriz A");
 
    for(i=0;i<l;i++)
    {   for(j=0;j<c;j++)
        {
            printf("\nA[%d][%d]: ",i,j);
            scanf("%f",&A[i][j]);
        }
    }
 
    puts("\nDigite os elementos do vetor B");
     
    for(i=0;i<l;i++)
    {
        printf("\nB[%d]: ",i);
        scanf("%f",&B[i]);
    }
 
    puts("---------------Sistema Digitado -------------------");
    mostraTudo(A,B,l,c);
    escalona(A,B,l,c);
    puts("\n------------- Apos Escalonar --------------------");
    mostraTudo(A,B,l,c);
    puts("\n-----------------Solução -----------------------\n");
    resolve(A,B,l,c);
 
//  puts("teste ");
//  printf("%f",A[1][1]);
 
}
 
void mostraTudo(float** A,float* B,int l,int c)
{
    int i,j;
 
    for(i=0;i<l;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%.2f.X%d ",A[i][j],j);
            if(j!=c-1)
                if(A[i][j+1] >= 0)printf(" + ");
         
        }
         
        printf("= %.2f\n",B[i]);
 
    }
}
void escalona(float** A,float* B,int l,int c)
{
    int i,j,k,g;
 
    for(i=0,j=0;i<l && j<c;i++,j++)
    {
    //  printf("pivo: %.2f",A[i][j]);
 
        //verificar atΓ© o ultimo
        for(k=i+1;k < l;k++)
        {
        g=j;
         
            if(A[k][g] != 0) //verifica se ja esta escalonado
            {
                //definir op
                float num=A[k][g] / A[i][g];    
                for(;g<c;g++)
                {
                    A[k][g]=(A[i][g]*num) - A[k][g];    
 
                }
                B[k] = (B[i]*num) - B[k];
                 
            }
        }
 
    }
}
 
void resolve(float** A,float* B, int l,int c)
{
    int i,j,k,h;
 
    float* R=new float[l];
 
     
 
    for(i=l-1;i>=0;i--)
    {
        float soma=0;
 
        for(j=i+1;j<c;j++)soma+=A[i][j]*R[j];
                 
        R[i]= (B[i]-soma)/A[i][i];
     
 
    }
     
    for(i=0;i<l;i++)
        printf("X%d = %.2f\t   ",i,R[i]);
}




```


> 4 de maio de 2015

### Alocação dinâmica de matrizes e solução de sistemas

Nos exercícios anteriores contruimos um algorítmo para soluçao de sistemas lineares utilizando alocação dinâmica de memória seguida dos procedimentos de escalonamento e retrosubstituição de variaveis. Os sistemas resolvidos eram determinados, ou seja, a quantidade de equações e de variáveis era a mesma. Caso a quantidade de equações seja superior a de icoógnitas, sabemos que o sistema não possui solução exata pois não é possível atender a todas as equações. De qualquer forma, inúmeras situações existem em computação, principalmente envolvendo IA, redes neurais e análise de sinais e imagens, nas quais os problemas são modelados tendo por base sistemas lineares com mais equações do que icógnitas e para os quais necessitamoes pelo menos de soluções aproximadas. Desse modo, não encontraremos uma solução que atenda exatamente a todas as equações, mas é possivel encontrar soluções que atendam aproximadamente a todas as equações, normalmente objetivando minimizar o erro quadrático médio. A diciplina de calculo numérico fornecerá a base teórica para tal procedimento, entretanto é de nosso interesse apresentar a tecnica em questão do ponto de vista prático pois alem de envolver **alocação dinâmica** para fins de implementação, nos permite implementar algoritmos mais avançados que atuem em combinação com outras implementações baseadas em objetos e associadas com estruturas de dados particulares. Com relação ao aspecto teorico, o metodo recebe o nome de **minimos quadrados**.

#### Exemplo prático para compreenção

Suponha que desejamos a solução do seguinte sistema: 

```
1x + 2y + 3z = 2
2x + 3y + 5z = 8
3x + 1y + 1z = 10
1x + 4y + 2z = 12
```

Conforme comentamos não há solução exata, mas, procederemos com uma solução aproximada utilizando minimos quadrados. Para isso expressamos o sistema incompativel matricialmente, isto é:

```
( 1 2 3 ) (x)   ( 2 )
( 2 3 5 ) (y)   ( 8 )
( 3 1 1 ) (z) = ( 10)
( 1 4 2 )       ( 12)
   ^              ^
   A              B

```

Sendo que a matriz 4x3 é chamada de A, e o vetor com os termos independentes é chamado de B. Na prática a teoria de minimos quadrados consiste simplesmente em multiplicar ambos os lados do sistema incompatível expresso matricialmente pela transposta da matriz A, isto é:

```

(1 2 3 1 )  ( 1 2 3 ) (x)    (1 2 3 1 )  ( 2 ) 
(2 3 1 4 )  ( 2 3 5 ) (y)    (2 3 1 4 )  ( 8 )
(3 5 1 2 )  ( 3 1 1 ) (z) =  (3 5 1 2 )  ( 10) 
    ^       ( 1 4 2 )            ^       ( 12)
    At          ^                At
                A
               
               = 
                
                
(15 15 18) (x)   (60)           
(15 30 30) (y) = (86)
(18 30 39) (z)   (80) 
```

O ultimo sistema obtido é possivel e determinado, ou seja, o numero de equações é igual ao de icognitas. Desse modo, ele possui solução exata. A solução exata desse sistema é a solução que melhor aproxima o sistema incompatível original. Isso resume o método dos mínimos quadrados.

-----

- **Exercício** Construa um programa que solicite e leia do teclado o número de equações e o número de incognitas de um sistema linear. Se o sistema for possível e determinado, leia-o na forma de 2 matrizes e obtenha a solução, chamando a função elaborada na aula anterior(MINI PROVA 1). Se o sistema for incompativel, leia-o matricialmente, encontre a transposta da matriz dos coeficientes dinâmicamente, faz as multiplicações que implementam o metodo dos minimos quadrados e resolva usando a função da aula passada, o novo sistema possivel e determinado obtido, apresentando na tela a sua solução, que corresponde a melhor aproximação para o sistema incompatível anterior.




