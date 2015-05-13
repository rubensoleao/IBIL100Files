
### Sumario

#### Por Aula

- [Aula 1 - 27/03/2015](#aula1)

- [Aula 2 - 10/04/2015](#aula2)

- [Aula 3 - 17/04/2015](#aula3)

- [Aula 4 - 24/04/2015](#aula4)

- Aula 5 Faltando

----

###<a name="aula1"></a> Aula 1 - 27/03/2015

----
##Linguagens de programação

É muito comum o questionamento sobre a real necessidade de se estudar **conceitos** de linguuagens de programação. Dessa maneira é importante elevar-se algumas justificativas.

### Capacidade aumentada para expressar idéias: 

Acredita-se que a profundidade com a qual as pessoas podem pensar é influenciada pelo poder de expressividade da linguagem que elas utilizam para comunicar os  seus pensamentos. Pessoas com limitações de conhecimento da linguagem natural tem dificuldade para aprofundar suas abstrações. Sob a ótica dos programadores reside o mesmo problema visto que se esses programdores não apresnetam conhecimentos sobre os tipos de **estruturas de controle**, **estrutura de dados** e **abstrações**. A produção dos algorimos e, consequentemente, dos paradigmas ficará completamente **comprometida**.
Um elemento importante a ser considerado é que mesmo que se aprendam sintaxes e estruturas específicas de uma linguagem em particular. isto é suficiente para se abstrair todos e implementá-los em uma outra linguagem.

###Embasamento para escolher linguagens adequadas:

Diversos programadores não possuem educação **formal** em ciência da computação, enquanto que outros recebem essa educaçcão há muito tempo, com linguagens obsoletas, resultando na necessidade de se adaptarem aos **conjuntos de evoluções propostas** dessa forma, se esses programadores conhecessem uma faixaa mais ampla de **linguagens** e **construções** estariam mas capacitados a escolher a linguagem que inclui os **melhores recursos adaptados** às características do problema em questão.
Frequentemente, e por questões de segurança, é sempre melhor usar um recurso que é nativo da linguagem em vez de simulá-lo.

###Habilidade Aumentada para aprender novas linguagens

Ferramentas de desenvolvimento de software encontram-se em constante evolução. Com isso. exige-se um aprendizado continuo, o que pode ser árduo para o profissional com um universo de conhecimento limitado uma vez que um entendimento preciso dos conceitos fundamentais das linguagens tenha sido adquirido, fica mais fácil ver como esses conceitos incorporados no projeto da lingugem aprendida.

###Melhor entendimento da importância da implementação

O entendimento de questões de implementação leva a compreender o **por quê** do projeto de determinadas linguagens. Isso permite um uso mais inteligente das linguagens, além de entender perfeitamente como o computador executa es diversas construções desta linguagens.

###Melhor uso de linguagem conhecidas

Muitas linguagens de programação contemporânea são grandes e complexas.  É **incomum** um programador conhecer e usar todos os recursos da linguagens que ele utiliza. Ao estudar conceitos de linguagem de programação, os programadores podem aprender sobre partes desconhecidas.

##Domínios de programação

Computadores tem sido aplicados a uma infinidade de áreas desde controlar usinas nucleares até disponilinizar jogos eletrônicos. Dessa forma, diversas linguagens de programação tem sido desenvolvidas.	

###Aplicações científicas

- Os primeiros computadores foram desenvolvidis para aplicações científicas.

- Aplicações que requerem estruturas de dados **não tão complexas**, mas realiza muitas operações em aritmética de pontos flutuantes.

- Produzidas inicialmente em **assembly**. A primeira linguagem de alto nível para esse fim foi o **Fortran** 

### Aplicações comerciais e empresariais
- Primeira linguagem foi o **Cobol**(1960).

- Objetivos: Produção de relatórios, armazenar números decimais e caracteres, entre outros. 

### Aplicações em inteligência artificial

- Caracterizada pelo uso de computações simólicas em vez de numéricas.

- Ampla interligação dos dados para se extrair informações

- Usa de linguagens funcionais como **LISP**

###Programação de sistemas

- Utilizadas para a programação de sistemas operacionais e suas ferramentas

- As linguagens devem oferecer recursos de baixo nível, de modo que aplicativos de software se comuniquem com dispositivos externos.

- Exemplos: **Unix** - escrito em **C**

###Aplicações para web
- Eclética com relação às linguagens de programação, partindo desde, **linguagens de marcação**, como o **XHTML**, até linguagens de propósito geral como **Java** e **C#**.

- Uso de linguagens de **scripting** como **Javascript** e **PHP** 

----

### <a name="aula2"></a> Aula 2 - 10/04/2015

----

##Criterios de Avaliação de Linguagens de Programação

Neste tópico serão examinados conceitos fundamentais das diversas Contruções e Capacidades das Linguagens de programção. esses recursos impactam diretamente no Desenvolvimento de Software, incluindo questões de manutenção.

A seguir são apresentados, em uma tabela o cruzamento dos principais criterios confrontados com características comuns em linguagens de programação.

<table>
 <tr>
 <td>CARACTERÍSTICA</td>
 <td>LEGIBILIDADE (READABILITY)</td>
 <td>FACILIDADE DE ESCRITA (WRITEABIITY)</td>
 <td>CONFIABILIDADE (TRUSTFULLNESS)</td>
 </tr>
 <tr>
 <td>SIMPLICIDADE</td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 </tr>
 <tr>
 <td>ORTOGONALIDADE</td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 </tr>
 <tr>
 <td>TIPOS DE DADOS</td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 </tr>
 <tr>
 <td>PROJETO DE SINTAXE</td>
 <td>X</td>
 <td>X</td>
 <td>X</td>
 </tr>
 <tr>
 <td>SUPORTE PARA ABSTRAÇÃO</td>
 <td></td>
 <td>X</td>
 <td>X</td>
 </tr>
 <tr>
 <td>EXPRESSIVIDADE</td>
 <td></td>
 <td>X</td>
 <td>X</td>
 </tr>
 <tr>
 <td>VERIFICAÇÃO</td>
 <td></td>
 <td></td>
 <td>X</td>
 </tr>
 <tr>
 <td>TRATAMENTO DE EXCEÇÕES</td>
 <td></td>
 <td></td>
 <td>X</td>
 </tr>
 <tr>
 <td>APELIDOS RESTRITOS</td>
 <td></td>
 <td></td>
 <td>X</td>
 </tr>
</table>


## Legibilidade

Um dos critérios mais importantes para julgar uma linguagem de programação é a facilidade com a qual os programas podem ser lidos e entendidos.

Até a década de 70 o desenvolvimento de software era amplamente pensado em termos de escrita de código. As principais características positivas das linguagens de programação eram eficiêcia e a legibilidade de máquina. Focava-se mais o computador do que os usuários.

A partir da década de 70, o conceito de ciclo de vida de um software foi desenvolvido. A codificação foi desenvolvido. A codificação foi relegada a um papel muito menor e a manutenção foi reconhecida como parte principal do ciclo, especialmente em termos de custos. a facilidade de manutenção  é determinada, em grande parte, pela legibilidade dos programas.

----

### <a name="aula3">Aula 3 - 17/04/2015 

---


## Simplicidade

A simplicidade geral de uma linguagem de programação *afeta fortemente*
sua legibilidade. Uma linguagem com muitas construções básicas é mais
difícil de aprender do que uma com *poucas*.

Problemas de legibilidade ocorrem sempre que o autor de um programa
*aprender um subconjunto diferente* daquele com o qual o leitor está
familiarizado.

Outra característica de uma linguagem de programação que poder ser um
complicador é a *multiplicidade de recursos*, ou seja, quando existe  *mais de uma*
possibilidade de realizar uma operação. Por exemplo, em C um
usuário pode incrementar uma variável inteira simples de quatro
maneiras:

```
(1)Count=Count+1
(2)Count+=1	
(3)Count++
(4)++Count
```

*Obs: Embora haja alguns problemas de significador entre elas dependendo do contexto.*
  
Um terceiro ponto a ser considerado é a *sobrecarga de operadores*, na
qual um operador tem, mais de um significado. Embora isto seja uma
estratégia útil, pode levar a uma redução da legibilidade se for
permitido aos usuários criar as suas próprias sobrecargas e estes não o
fizerem de maneira *sensata*. Como contra-exemplo, imagine que um usuário
defina que o operador `+` entre dois operados do tipo vetor seja a
*diferença* entre os primeiros elementos de cada vetor.

Em contrapartida, a simplicidade extrema também pode levar a problemas
de legibilidade, o que tornar, por exemplo, programas em *assembly* quase
que *ininteligíveis*.

### Ortogonalidade

Ortogonalidade em uma linguagem de programação significa que um *conjunto pequeno*
 de construções primitivas pode ser combinado a um número
relativamente pequeno de formas para construir as estruturas de controle
e de dados da linguagem.

Suponha que uma linguem tenha quatro tipos primitivos de dados (inteiro,
ponto flutuante, ponto flutuante de dupla precisão e caractere) e dois
operadores de tipo, de os dois operadores de tipo puderem ser aplicados
a eles mesmo e aos quatros tipos de dados primitivos, um grande número
de estruturas de dados pode ser definido.

A *Ortogonalidade* é fortemente relacionada à *Simplicidade*: quanto mais
ortogonal o projeto de uma Linguagem, menor é o número necessário de
*exceções* às regras da linguagem. Menos exceções significam maior grau de
regularidade no projeto o que torna a linguagem mais fácil de *aprender, ler e entender.*

Como um exemplo de falta de ortogonalidade em uma linguagem de alto
nível, vamos consideram algumas exceções em Linguagem *C*: Embora *C* tenha
dois tipos de dados estruturados, que são arranjos e os registros
(structs), *os registros podem ser retornados* por funções, mas *os vetores*
**não**.

## Tipos de Dados

A presença de mecanismos adequados para definir *tipos e estruturas* de
dados é o outro auxílio significativo à legibilidade. Por exemplo,
suponha que um tipo numérico seja usado como uma *flag* porque não existe
nenhum tipo Booleano.

`Timeout = 1` $\xrightarrow{Mais Legível}$ `Timeout=true`

## Projeto de Sintaxe

Este quesito tem um efeito significativo na legibilidade dos programas.
Elementos que podem distorcer a legibilidade:

-   *Formato dos identificadores:* Restringir os identificados a tamanhos
    muito curtos piora a legibilidade (pouco intuitivos).

-   *Palavras Especiais:* A aparência de um programa e sua legibilidade
    são fortemente influenciadas pela forma das palavras especiais da
    linguagem ( if, while, class). O método para formar sentenças
    compostas, ou grupo de sentenças, é especialmente importante em
    construções de controle. Outro ponto importante a ser elencado é se
    as palavras especiais de uma linguagem podem ser usadas como nome de
    variáveis. Se isso for verdade, os programas resultantes podem ser
    bem confuso.

-   *Forma e significado:* Projetar sentenças de maneira que sua aparência
    ao menos indique parcialmente seu propósito é uma ajuda óbvia à
    legibilidade.

Ex: Static em C

1.  Em uma variável dentro de uma função, indica que a variável é criada
    em tempo de compilação

2.  Em uma variável fora de todas as funções, significa que a variável é
    visível apenas no arquivo no qual sua definição aparece (não é
    exportada).

## Facilidade de Escrita (writeability)

A facilidade de escrita é a medida do quão facilmente a linguagem pode
ser usada para criar programas para um domínio. A maioria das
características que afetam a legibilidade também afeta a facilidade de
escrita.

A facilidade de escrita, assim como a legibilidade, deve ser considerada
no contexto do domínio do problema alvo de uma linguagem. Não é razoável
comparar a facilidade de escrita de uma linguagem de programação no
contexto de uma aplicação em particular. Quando uma delas já foi
projetada para tal aplicação e a outra não. Ex: C x Java.


----

### <a name="aula4"></a>Aula 4 - 24/04/2015

----

### B1) Simplicidade e ortoganilidade

Se uma linguagem tem um grande número de construções, alguns programadores não estão familiarizados com todas. Essa situação pode levar ao uso incorreto de recursos e a uma utilização escassa de  outros que podem ser mais elegantes ou mais eficientes. Logo, usar um número menor de construções primitivas e um conjunto de regras consistente para combiná-las é muito melhor do que diversas construções primitivas. Como consequência, permite-se projetar uma solução para um problema complexo após aprender apenas um conjunto simples de soluções primitivas.
Em contrapartida, muita ortogonalidade pode prejudicar a facilidade de escrita. Diversos erros em programas podem passar despercebidos quando praticamente quaisquer combinações primitivas são legais. Isso pode levar a certos absurdos no código que não podem ser descobertos pelo compilador.

### B2) Suporte à abstração

A abstração significa a habilidade de definir e usar estruturas ou operações complicadas de forma a permitir que muitos dos detalhes sejam ignorados.
O grau de abstração permitido por uma linguagem de programação e a naturalidade de sua expressão são importante para a sua facilidade de escrita. Basicamente, as linguagens de programação podem oferecer suporte a duas categorias de abstrações: **Processos** e **Dados**.

- Vamos considerar dois exemplos em relação à abstração de processos e à abstração de dados:
  - Processos: Considere um subprograma para implementar um algoritmo de ordenação. Sem o uso do subprograma, o código de ordenação teria de ser replicado em todos os lugares onde fosse preciso (Torna o programa muito mais longo).

  - Dados: Considere uma árvore binária que armazena dados inteiros em seus nós. Esta árvore poderia ser implementada em uma linguagem que não oferece suporte a ponteiros e gerenciamento de memória dinâmico, por exemplo, através de três vetores paralelos, em que dois dos inteiros são utilizados como índices para especificar nós filhos. Em linguagens orientadas a objeto, por exemplo, essas árvores podem ser implementadas utilizado uma abstração de um nó na forma de uma simples classe com dois ponteiros

### B3) Expressividade

A expressividade em uma linguagem pode se referir a diversas características. Em geral, uma linguagem expressiva especifica computações de uma forma conveniente, em vez de deselegante. Por exemplo, em C, a notação `cont++` é mais conveniente que `cont = cont + 1`. Esse tipo de construção facilita a escrita.
### C) Confiabilidade 

Um programa é dito confiável quando esta em acordo com suas especificações em todas as condições.

- **Verificação de tipos**

A verificação de tipos é a execução de testes para detectar erros de tipos em um programa, tanto por uma parte do compilador, quanto durante a execução de um programa.
Geralmente, é desejável realizar a verificação de tipo durante a fase de compilação, em vez da fase de execução. Além disso, quanto mais cedo um erro for detectado, menores serão os prejuízos.
Um exemplo que pode ser elevado, é a verificação de tipos na passagem de parâmetros, nos primórdios da linguagem C.

- **Tratamento de exceções**

Trata-se da habilidade de um programa interceptar erros em tempo de execução, tomar medidas corretivas e continuar a execução de maneira confiável.

- **Utilização de apelidos (Alias)**

Os apelidos são permitidos quando é possível ter um ou mais nomes para acessar a mesma célula de memória. Sabe-se que o uso de apelidos é um recurso perigoso em uma linguagem de programação. Como exemplo, podemos elencar dois ponteiros configurados para apontar para a mesma variável, o que é possível na maioria das linguagens. Uma ressalva, é que o programador deve-se lembrar que trocar o valor apontado por um ponteiro também afeta o outro

- **Influências da legibilidade e facilidade de escrita**

Tanto a legibilidade quanto a facilidade de escrita influenciam a confiabilidade. Imagine um programa escrito em uma linguagem que não oferece maneiras naturais para expressar os algoritmos.

### D) Custo

O custo de uma linguagem de programação é fator que deve ser considerado e obriga a avalia varias funções das linguagens de programação. Alguns itens a serem elencados:

- O custo de treinamento para o uso da linguagem:
 - Simplicidade
 - Ortogonalidade

- O custo para escrever programas na linguagem:
 - Isto é parte da facilidade de escrita
 - Os esforços estão voltados para reduzir o custo de produção de um software

