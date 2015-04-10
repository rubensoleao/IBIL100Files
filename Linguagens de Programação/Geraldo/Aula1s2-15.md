
----

----

> Aula de paradigmas 27/03/2015

##Linguagens de programação

É muito comum o questionamento sobre a real necessidade de se estudar *conceitos* de linguuagens de programação. Dessa maneira é importante elevar-se algumas justificativas.

### Capacidade aumentada para expressar idéias: 

Acredita-se que a profundidade com a qual as pessoas podem pensar é influenciada pelo poder de expressividade da linguagem que elas utilizam para comunicar os  seus pensamentos. Pessoas com limitações de conhecimento da linguagem natural tem dificuldade para aprofundar suas abstrações. Sob a ótica dos programadores reside o mesmo problema visto que se esses programdores não apresnetam conhecimentos sobre os tipos de *estruturas de controle*, *estrutura de dados* e *abstrações*. A produção dos algorimos e, consequentemente, dos paradigmas ficará completamente *comprometida*.
Um elemento importante a ser considerado é que mesmo que se aprendam sintaxes e estruturas específicas de uma linguagem em particular. isto é suficiemte para se abstrair todos e implementá-los em uma outra linguagem.

###Embasamento para escolher linguagens adequadas:

Diversos programadores não possuem educação *formal* em ciência da computação, enquanto que outros recebem essa educaçcão há muito tempo, com linguagens obsoletas, resultando na necessidade de se adaptarem aos *conjintos de evoluções propostas* dessa forma, se esses programadores conhecessem uma faixaa mais ampla de *linguagens* e *construções* estariam mas capacitados a escolher a linguagem que inclui os *melhores recursos adaptados* às características do problema em questão.
Freqüentemente, e por questões de seguraçca, é sempre melhor usar um recurso que é nativo da linguagem em vez de simulá-lo.

###Habilidade Aumentada para aprender novas linguagens

Ferramentas de desenvolvimento de software encontram-se em constante evolução. Com isso. exige-se um aprendizado continuo, o que pode ser árduo para o profissional com um universo de conhecimento limitado uma vez que um entendimento preciso dos conceitos fundamentais das linguagens tenha sido adquirido, fica mais fácil ver como esses conceitos incorporados no projeto da lingugem aprendida.

###Melhor entendimento da importância da implementação

O entendimento de questões de implementação leva a compreender o *por quê* do projeto de determinadas linguagens. Isso permite um uso mais inteligente das linguagens, além de entender perfeitamente como o computador executa es diversas construções desta linguagens.

###Melhor uso de linguagem conhecidas

Muitas linguagens de programação contemporânea são grandes e complexas.  É *incomum* um programador conhecer e usar todos os recursos da linguagens que ele utiliza. Ao estudar conceitos de linguagem de programação, os programadores podem aprender sobre partes desconhecidas.

##Domínios de programação
COmputadores tem sido aplicados a uma infinidade de áreas desde controlar usinas nucleares até disponilinizar jogos eletrônicos. Dessa forma, diversas linguagens de programação tem sido desenvolvidas.	
###Aplicações científicas

- Os primeiros computadores foram desenvolvidis para aplicações científicas.

- Aplicações que requerem estruturas de dados *não* tão complexas, mas realiza muitas operações em aritmética de pontos flutuantes .

- Produzidas inicialmente em *assembly*. A primeira linguagem de alto nível para esse fim foi o *Fortran* 

### Aplicações comerciais e empresariais
- Primeira linguagem foi o *Cobol*(1960).

- Objetivos: Produção de relatórios, armazenar números decimais e caracteres, entre outros. 

### Aplicações em inteligência artificial

- Caracterizada pelo uso de computações simólicas em vez de numéricas.

- Ampla interligaçcão dos dados para se extrair informações

- Usa de linguagens funcionais como *LISP*

###Programação de sistemas

- Utilizadas para a programação de sistemas operacionais e suas ferramentas

- As linguagens devem oferecer recursos de baixo nível, de modo que aplicativos de software se comuniquem com dispositivos externos.

- Exemplos: *Unix* - escrito em *C*

###Aplicações para web
- Eclética com relacçõ àas linguagens de programaçcão, partindo desde, *linguagens de marcação*, como o *XHTML* , até linguagens de prpósito gera lcomo *Java* e *C#*.

- Uso de linguagens de *scripting* como *Javascript* e *PHP* 

----

----

>Aula de paradígmas 10/04/2015

**Criterios de Avaliação de Linguagens de Programação**

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


**LEGIBILIDADE **

Um dos critérios mais importantes para julgar uma linguagem de programação é a facilidade com a qual os programas podem ser lidos e entendidos.

Até a década de 70 o desenvolvimento de software era amplamente pensado em termos de escrita de código. As principais características positivas das linguagens de programação eram eficiêcia e a legibilidade de máquina. Focava-se mais o computador do que os usuários.

A partir da década de 70, o conceito de ciclo de vida de um software foi desenvolvido. A codificação foi desenvolvido. A codificação foi relegada a um papel muito menor e a manutenção foi reconhecida como parte principal do ciclo, especialmente em termos de custos. a facilidade de manutenção  é determinada, em grande parte, pela legibilidade dos programas.