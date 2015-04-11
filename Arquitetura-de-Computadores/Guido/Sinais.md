# Arquitetura de Computadores

----
### Sumário

#### Por Matéria

- Sinais
  - [Noções de Sinais e Processamento por Computadores](#Noções de Sinais e Processamento por Computadores)
  - [Questões relativas a propagação das ondas](#Questões relativas a propagação das ondas)

----
#### Por Aula

- [Aula 1 - 20/03/2015](#Aula-1---20/03/2015)
- [Aula 2 - 27/03/2015](#Aula 2 - 27/03/2015)
- [Aula 3 - 10/04/2015](#Aula-3---10/04/2015)



----
### Aula 1 - 20/03/2015
----

### Noções de Sinais e Processamento por Computadores 

Sinal é uma entidade física que descreve matematicamente a emissão de algum tipo de energia e como ela varia ao longo do tempo.
> **Ex:** Sinal de áudio, sinal de voz, sinal de rádio, entre outros.

Os sinais estão divididos basicamente em dois grupos:
- Unidimensionais (1D)
- Bidimensionais (2D)

No primeiro caso existe uma variação de energia em função de uma variável, que normalmente é o tempo. No segundo caso, por outro lado, a quantidade de energia é função de 2 variáveis, tais como coordenada horizontal e coordenada vertical. Na prática, sinais 1D contemplam áudio, voz, emissão de rádio, emissões biomédicas e neuronais, entre outros. Já sinais 2D correspondem imagens.

Importante também é definir o termo **processamento**, que constitui qualquer tipo de manipulação, análise, modificação e até mesmo síntese, isto é, fabricação de algo. Desse modo, o processamento de sinal consiste em analisá-lo, modifica-lo, etc.

Existe basicamente duas formas para realizar processamento de sinais:

- Processamento Analógico
- Processamento Digital

Na primeira modalidade são empregados circuitos eletrônicos que utilizam resistores, capacitores, transistores, indutores, entre outros, **mas não há processador**.

Na segunda modalidade, circuitos eletrônicos também são utilizados, mas **o componente base é o processador**.

Isso faz com que ambas as modalidades possuam características distintas. No primeiro caso, isto é, analógico, todo sinal é processado continuamente, sem perdas. Enquanto no segundo caso, isto é, digital, somente pontos específicos são processados, pois o processador trabalha somente com valores pontuais, e não tem capacidade para processar infinitos valores.

Lembramos ainda que circuitos eletrônicos analógicos, são construídos com finalidade específica, como por ex. amplificar a voz, robotizar a voz, e assim por diante. Qualquer modificação no propósito do processamento implica na construção de um novo circuito eletrônico, demandando tempo e custo. Por outro lado, a modificação de propósito no processamento digital implica simplesmente em alterar o software correspondente. 

#### Em suma, temos a seguinte situação:
**Processamento Analógico**
- Vantagem: Trabalha com todo o sinal.
- Desvantagem: Mudança de objetivo significa construir um novo circuito.

**Processamento Digital**
- Vantagem: Mudança de propósito = mudança no software
- Desvantagem: Não é possível tratar os infinitos pontos do sinal

Certamente temos uma motivação maior para realizar processamento digital ao invés do analógico. Para isso precisamos definir qual é a quantidade de pontos, isto é, valores, que temos de processar em meio aos infinitos valores existentes em um sinal qualquer. Para isso utilizamos uma teoria de fundamental importância, e que possibilitou o processamento digital de sinais não textuais, que é conhecida como Teorema da Amostragem, ou **Teorema de Nyquist**.

---

### Aula 2 - 27/03/2015 

O teorema da amostragem, ou o teorema de Nyquist, é um resultado do qual podemos fazer uso para realizar um processamento digital de sinais, sendo que de acordo com ele, é necessário entregar ao processador, um número de pontos, isto é, amostras, que é pelo menos igual ao dobro da máxima frequência presente no sinal analógico respectivo.

Em se tratando de sinais de áudio, por exemplo, que constituem os sinais multimídia mais elementares, existe outro resultado experimental garantindo que o ouvido humano não é capaz de perceber frequências acima de 22050 Hz. Desse modo, com base em ambos os resultados é possível concluir que a taxa de amostragem de 22050 x 2 = 44100 am/seg é suficiente para manipular de modo digital os sinais de áudio, lembrando ainda que as amostras devem ser igualmente espaçadas. O processo de amostragem, faz com que o sinal originalmente contínuo seja caracterizado como sinal discreto.

A questão da discretização realizada no eixo horizontal também é necessária no eixo vertical. Este procedimento, que é chamado **quantização** implica em dividir o eixo das amplitudes (vertical) em uma quantidade finita de pontos e utilizar apenas um deles para cada amostra capturada. Assim, por exemplo, se temos amplitudes, no modo contínuo, variando de -5 até 5 e optamos por uma quantização de 1 em 1, então o valor da amostra que no mundo real é "2.74512" será armazenado na versão discreta como o número 3, pois é o valor de amplitude mais próximo existente no mundo digital.

A quantização, diferentemente da amostragem que é regulada genericamente para qualquer sinal, não é expressa para sinais quaisquer de um modo único. Ao contrário, cada tipo de sinal possui uma quantização ideal. De qualquer forma dizemos que a quantização é de ‘X’ bits, sendo ‘X’ obtido experimentalmente de acordo com o tipo de sinal. Quantizações tradicionais são, por exemplo, 8 bits para voz, 16 bits para áudio e música em geral, 24 bits para sinais biomédicos, o que equivale respectivamente a 2^8 = 256, 2^16 = 65.536, 2^24 = 16.777.216

Normalmente, a não ser em casos específicos, os valores são os inteiros correspondentes, admitindo-se que um dos bits seja utilizado para representar o sinal positivo ou negativo. Desse modo, utilizando 8 bits temos valores inteiros que estão na faixa `-128 ~ 127`, utilizando 16 bits `-32.768 ~ 32.767`, e utilizando 24 bits `-8.388.608 ~ 8.388.607`.
Assim sendo, um sinal musical armazenado no computador, por exemplo, é na verdade um vetor de 44.100 pontos a cada segundo, para o qual cada posição do vetor é um valor inteiro na faixa de `-32.768 ~ 32.767`.

Quando convertemos o sinal contínuo em sinal discreto, com base no teorema da amostragem, dizemos que o sinal foi **discretizado**. Por outro lado, quando aplicamos os arredondamentos necessários no eixo das amplitudes, dizemos que o sinal foi **quantizado**. Após a aplicação de ambos os processos, dizemos que o sinal, que era originalmente analógico, passou a ser **digital**.

>**Demonstração**: Existe um fenômeno natural que, embora não constitua uma demonstração teórica é suficiente para exemplificar na prática o teorema da amostragem, trata-se do fenômeno que nos dá a falsa impressão de que as rodas de um veículo em movimento estão girando em sentido contrário ao do veículo. Tendo em vista que o olho humano não é um sistema contínuo de detecção de movimento, assume-se uma situação na qual ocorre amostragem, isto é, somos somente capazes de ver e de codificar um número finito de quadros ao longo do tempo, normalmente cerca de 15 ou 20 imagens por segundo. Assim sendo, quando as rodas do veículo giram em uma taxa baixa as amostras capturadas pelo olho na sequência bastam para perceber o movimento no sentido correto. Por outro lado, quando a velocidade é tal que entre cada amostra as rodas giram mais do que meia volta passamos a ter a percepção errada, que volta a ficar correta caso, entre cada amostra elas girem pouco mais de uma volta e assim por diante. Notamos ainda o caso no qual a taxa de amostragem no olho coincide com exatamente ‘N’ voltas da roda, sendo N = 1,2, 3, ..., ∞; que implica em perceber erroneamente a roda parada. A solução que conduz a percepção correta requer que entre cada ciclo seja possível amostrar pelo menos mais uma vez, o que implica que a taxa de amostragem, para percepção correta, deve ser pelo menos o dobro do número de ciclos, isto é, da máxima frequência.

A percepção errônea corresponde a uma frequência fantasma que, formalmente recebe o nome de **Aliasing**. É muito importante notar que o circuito eletrônico responsável por amostrar e quantizar sinais do meio externo deve ter uma precisão extrema. Isso significa que no momento exato de capturar cada amostra o circuito não pode falhar, ou demorar, pois caso contrário outro valor de amplitude será capturado, confundindo o momento ideal com outro produzindo a distorção do sinal, possível aliasing entre outros efeitos danosos que inviabilizam por completo o processamento digital do sinal. Desse modo, é necessário que exista um dispositivo, que normalmente é um **processador dedicado**, para realizar a amostragem. Este processador está, no caso de um sinal de áudio por exemplo, na placa de áudio. No caso de uma câmera digital este dispositivo está na respectiva placa de captura de imagens, e assim por diante. De qualquer forma não devemos tentar utilizar o processador principal da máquina para controlar a amostragem, pois certamente o sistema operacional suspenderia o processo que cuida da amostragem para atender, de tempos em tempos, outros processos, tais como os que cuidam da rede, de entrada e saída no teclado e mouse, entre outros.

Notamos que independentemente do processador que controla a amostragem, ele só pode trabalhar com os dados já digitalizados, e portanto a amostragem e a quantização necessitam adicionalmente ao processador um circuito eletrônico conhecido como **Conversor Analógico-Digital (AD)**. No caso de desejarmos algum processamento ou modificação dos dados digitalizados, o respectivo software será executado no processador principal da máquina de modo que a comunicação entre os componentes eletrônicos envolvidos é dada por um conjuntos de vias de comunicação elétrica chamada de **barramento**, conforme estudaremos a diante.

#### MINI PROVA 1 (PRÓXIMA AULA) 
- ELABORAR UM TEXTO COM 2/3 PARÁGRAFOS CURTOS DISCUTINDO AS IMPLICAÇÕES, AS VANTAGENS E AS DESVANTAGENS DE REALIZAR PROCESSAMENTO DIGITAL DE SINAIS FRENTE A ABORDAGEM ANALÓGICA. 

----

### Aula 3 - 10/04/2015

----

### Questões relativas a propagação das ondas 
