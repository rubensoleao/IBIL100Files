#ORGANIZAÇÃO DE COMPUTADORES
_____________________________


## 1. Caracterização do Hardware Computacional: Componentes e Circuitos.

A caracterização dos diversos componentes que são utilizados em um sistema de computadores deve ser feita, antes de mais nada, com base nos grupos elétrico existentes: **condutores de eletricidade**, **isolantes de eletricidade** e **semi-condutores de eletricidade**. Destacamos ainda que todo condutor de eletricidade, isto é, todo material que possui muitos elétrons livres, tal como o cobre, é também um bom condutor térmico. Por outro lado, bons condutores térmicos não são necessariamente bons condutores elétricos, tal como ocorre com um plástico especial chamado de mica que por essa característica é amplamente empregado em computadores e outros aparelhos eletro eletrônicos, visando conectar mecanicamente um componente eletrônico com a sua chapa metálica dissipadora de calor, isolando-os eletricamente.
Além da caracterização elétrica básica mencionamos nesse curso questões físicas um pouco mais atuais que podem ajudar a explicar o funcionamento de determinados componentes e fenomenos, que ao longo das próximas décadas, devem começar a viabilizar na prática o que se conhece por **computação quântica**, que deve ser tratado com um paradigma distinto do atual. Neste aspecto, a anti-matéria ja possui papel importante, a exemplo, do que utilizamos na medicina avançada, exemplificado por um exame para diagnóstico preciso de tumores chamado de **PET-SCAN**(tecnoglogia de emissão de pósitrons). Neste exame a anti-matéria do elétron(pósitron), isto é, elétron com carga positiva, é a base do funcionamento.
Além dos conceitos mencionados devemos também dar particular atenção aos processos que envolvem a matéria física e seu quarto estado que é plasmático. Quando temos um sólido perfeitamente caracterizado, tal como um bloco de gelo, podemos aquece-lo de forma que as moléculas de água que estavam mais fortemente conectadas ficam um pouco mais soltas conduzindo ao estado líquido. Prosseguindo no aquecimento, as moléculas de água ficam ainda mais desunidas, obtendo-se então o estado gasoso. Se prosseguirmos aquecendo o material, até atingir temperaturas extremamente altas, chegamos a um estado, chamado **plasmático**, em que não somente as moléculas estão muito dissosiadas, mas os próprios átomos se descaracterizam. Esse conjunto de partículas dissosiadas, que formam o plasma, é consideravelmente instável e normalmente **condutor de eletricidade**, ja que existe consideravel quantidade de elétrons livres. Importante ainda é resaltar que não somente o aquecimento extremo conduz ao plasma pois um campo elétrico também pode ter potencial para dissosiar partículas de um gás fazendo com que ele atinga o quarto estado da matéria(plasmático), tal como ocorre em alguns tipos de lâmpadas por exemplo. Neste curso, consideramos o estado plasmático para fins de projeto e frabricação de componentes eletrônicos tais como os circuitos integrados, conforme veremos adiante.
Destacamos ainda o conceito de **litografia**, que constitui um tipo de arte, isto é desenho, em uma superfície sólida, de modo a depositar partículas em um determinado material para que ele passe a possuir as características elétricas desejadas. Normalmente a litografia é utilizada na construção de componentes e circuitos integrados em escala micro ou nanoscópica, utilizando-se um feixe de elétrons para realizar a deposição de materiais químicos. Sendo assim, é comum utilizarmos o termo litografia por feixe de elétrons. 

Passamos agora a recordar e caracterizar eletricamente os principais componentes que constituem os circuitos eletronicos digitais e em seguida reuniremos os conceitos para compreender processos de fabricação.

 - **Resistência ohmica**: caracterizada nos resistores eletrônicos, constitue um comportamento não reativo, isto é independente da duração ou da frequência do sinal elétrico que atravessa o componente. Utilizaremos, seguindo o padrão a letra `R` para menciona-la.

 - **Indutância elétrica**: caracterizada por meio dos indutores, popularmente conhecidos como bubinas, caracteriza-se por um elemento reativo, isto é um elemento que oferece oposição a passagem da corrente elétrica, sendo que esta oposição muda de acordo com a duração ou a frequência do sinal elétrico que o atravessa. Simbolizando por `L` o valor de uma indutância, que é medida em Henry, quantificamos a oposição que um indutor oferece a passagem da corrente elétrica por `ω.L` sendo omega `ω` a frequência do sinal elétrico que atravessa a indutância.

 - **Capacitância**: caracterizada nos componentes conhecidos como capacitores, oferece resistência, ou seja, oposição a passagem da corrente elétrica também de modo reativo, sendo essa oposição quantificada por `1/ ω.C` em que `C` é o valor do capacitor em Farads.

De acordo com os três elementos definidos acima, caracterizamos o termo conhecido como **impedância**, medida em ohms, como a soma de três forças contrárias à passagem da corrente elétrica: **resistência**, **indutância** e **capacitância**. A primeira, normalmente obtida utilizando-se pistas de carvão litografadas em um sólido, a segunda espiras de fio condutor em torno de um núcleo em que gera um campo magnético na tentativa de impedir variações da corrente elétrica e a terceira operando de modo semelhante por meio de duas placas condutoras separadas por um material isolante que forma um campo elétrico entre suas placas. Concluindo, denotamos por `Z` a impedância total, com suas partes resistiva, indutiva e capacitiva.


<p align="center"> Z = Zr + Zl + Zc </p>

-------------------------------------------

# Exemplos:

### 1. Caracterize a impedância resistiva de um resistor de 100ohms quando ele é atravessado por um sinal senoidal de amplitude +-1V com frequência de 10Hz.

### Solução:

>	Z = 100ohms, pois resistencia não é reativa e assim frequencias e amplitudes dos sinais que atravessam em nada alteram a oposição que o componente oferece.

### 2. Caracterize a impedância indutiva de uma bubina de ½ Henry, quando percorrida por um sinal elétrico de 100Hz, senoidal, com amplitudes +-5V.

### Solução:

>		Zl = ω.L
>		Zl = 2.pi.f.L
>		Zl = 2.3,1415.100.0,5 = 314 ohms

>Obs: a amplitude do sinal que atravessa o indutor não,de +-5V no caso, não é utilizada nos calculos, pois o que interessa é a frequência deste sinal.

### 3. Idem exemplo anterior assumindo que o componente é agora um capacitor de 2 Farads

### Solução:

>			Zc = 1/ ω.C
>			Zc = ½.3,14.100.2
>			Zc = 1/1256
>
>			Zc = 0,000796 ohms

---------------------------------------------------------


Além das caracterizações das impedância realizadas acima, os conceitos fisicos pertinentes explicam que `Zl` e `Zc` atuam de modos opostos um ao outro. Desta forma, qualquer circuito elétrico básico, isto é, contendo `R`, `L` e `C` deve ser estudado de modo vetorial utilizando-se a seguinte representação gráfica:
