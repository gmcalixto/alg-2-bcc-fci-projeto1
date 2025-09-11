
**ALGORITMOS E PROGRAMAÇÃO II**

*Tradutor de Código Morse*

**Projeto 1**

(Atividade em grupo: mínimo 2 e máximo 3 alunos)




  -----------------------------------------------------------------------
  **Membros do grupo**

  -----------------------------------------------------------------------

 - Nome, RA
 - Nome, RA
 - Nome, RA



  -----------------------------------------------------------------------
  **Contextualização**

  -----------------------------------------------------------------------

Devido ao seu conhecimento de programação, você foi chamado(a) para
ajudar em uma pesquisa sobre registros antigos de comunicação marítima.
O seu papel nessa pesquisa será desenvolver um programa para traduzir
mensagens em Código Morse, sendo que algumas letras das mensagens foram
corrompidas.

Para testar o seu programa, você recebeu algumas frases em código morse.
Essas frases não contêm números ou pontuações. As letras estão separadas
por um espaço e as palavras estão separadas por dois espaços. Além
disso, algumas letras, que estão corrompidas, serão terminadas por um
caractere \*.

As letras em Código Morse serão representadas pelos caracteres . e -
segundo a seguinte tabela:

| Letra | Código | Letra | Código | Letra | Código | Letra | Código |
|------|--------|------|--------|------|--------|------|--------|
| A | .- | H | .... | O | --- | V | ...- |
| B | -... | I | .. | P | .--. | W | .-- |
| C | -.-. | J | .--- | Q | --.- | X | -..- |
| D | -.. | K | -.- | R | .-. | Y | -.-- |
| E | . | L | .-.. | S | ... | Z | --.. |
| F | ..-. | M | -- | T | - |  |  |
| G | --. | N | -. | U | ..- |  |  |


O seu objetivo será imprimir a frase traduzida utilizando letras
maiúsculas no lugar dos símbolos do Código Morse.

-   Na sua tradução final, você deve remover os espaços entre as letras
    e deixar apenas um espaço entre as palavras.

-   Para as letras corrompidas, você deve adotar um tratamento especial.
    O problema dessas letras é que elas podem ter perdido parte do seu
    sufixo na transmissão, ou seja, alguns dos símbolos no final da
    representação em Código Morse podem estar faltando. Para traduzir essas letras você
    deve colocar entre colchetes todas as letras que podem representar o
    código indicado. Por exemplo, o código .-\* pode representar as
    letras A (.-), J (.\-\--), L (.-..), P (.\--.), R (.-.) ou W(.\--),
    portanto ele deve ser representado por [AJLPRW]. Dessa forma a
    palavra .- \-- \-\-- -.\* será traduzida como AMO[AJLPRW]. Para
    evitar múltiplas representações as letras entre colchetes devem
    estar em ordem alfabética.

  -----------------------------------------------------------------------
  **Exemplos de Entrada e Saída**

  -----------------------------------------------------------------------

Exemplos de entradas e saídas esperadas pelo seu programa:

**Teste 01**

Entrada

.- -... -.-. -.. . ..-. --. .... .. .--- -.- .-.. -- -. --- .--. --.- .-. ... - ..- ...- .-- -..- -.-- --..

Saída

ABCDEFGHIJKLMNOPQRSTUVWXYZ


**Teste 02**

Entrada

-.-. .- -.. .-*  -- .- -.-. .- -.-. ---  -. ---  ... . ..-  --. .- .-.. .... ---

Saída

CAD[AJLPRW] MACACO NO SEU GALHO

  -----------------------------------------------------------------------
  **O QUE DEVE SER ENTREGUE**

  -----------------------------------------------------------------------

> O código fonte do programa deve ser feito em linguagem C e os commits/pushes devem ser realizados no repositório do grupo. Será observada a colaboração de todos os integrantes. 
>
> Arquivo README.md contendo informações sobre o grupo com o nome e RA
> e turma. Além disso, mostrar um passo a passo como executar o programa
> dado a entrada.

  -----------------------------------------------------------------------
  **O QUE SERÁ AVALIADO**

  -----------------------------------------------------------------------

-   A corretude do programa (se o programa resolve o problema proposto).

-   A originalidade da solução.

-   Clareza do código que inclui indentação, comentários, nomes
    intuitivos para as variáveis.

-   Apresentação e execução do programa em laboratório conforme
    calendário das datas abaixo.

-   Nome e RA dos integrantes do grupo deve constar no arquivo README.md
    e nos cabeçalhos do código-fonte.

-   Data da entrega e entrevista sobre o projeto: 25/09/2025

  -----------------------------------------------------------------------
  **OBSERVAÇÕES**

  -----------------------------------------------------------------------

-   A ausência da apresentação do projeto em laboratório resulta em uma
    redução de 3,0 (três) pontos na nota final do projeto. Esta redução
    de nota é individual para cada integrante do grupo que não
    comparecer no dia da apresentação do trabalho no laboratório.

  -----------------------------------------------------------------------
  **Avaliação**

  -----------------------------------------------------------------------

A nota da atividade é calculada de acordo com os critérios da tabela a
seguir.

| Item avaliado | Pontuação máxima |
|---------------|-----------------|
| Carregar dados para validação da entrada. | até 1,0 ponto |
| Função recursiva devidamente implementada | até 2,5 ponto |
| Funções auxiliares para facilitar a legibilidade do código. | até 2,0 ponto |
| Saída em Tela. | até 1,5 ponto |
| Clareza do código-fonte (identação, nomenclatura adequada de variáveis e funções bem distribuídas, comentários pertinentes, etc.). | até 1,0 ponto |
| Vídeo com a explicação sobre a solução do problema, apresentação do código e sua execução (de 3 a 5 min). | até 2,0 pontos |


Contudo, existem critérios de avaliação que podem **reduzir** a
nota final da atividade.

| Item indesejável | Redução de nota |
|------------------|----------------|
| O projeto é cópia de outro projeto. | Projeto é zerado |
| O programa não compila e não gera o executável | Projeto é zerado |
| O programa exige algum arquivo adicional que não está presente. | -2,5 pontos |
| Há erros de compilação e/ou o programa trava durante a execução. | -1,0 ponto |
| Não há identificação do grupo no código-fonte. | -1,0 ponto |
| Arquivo README.txt com dados incorretos. | -1,0 ponto |
| Arquivos enviados em formatos incorretos. | -1,0 ponto |
| Arquivos e/ou pastas intermediárias que são criadas no processo de compilação foram enviadas junto com o código-fonte. | -1,0 ponto |



O código-fonte será compilado com o compilador **gcc** da seguinte
forma:

```bash
> gcc projeto1.c -o projeto1.o
```


O código compilado será executado da seguinte forma (utilizando bash):

```bash
> ./projeto1.o [entrada_do_programa]
```

Por exemplo, para realizar o Teste 1

```bash
> ./projeto1.o .- -... -.-. -.. . ..-. --. .... .. .--- -.- .-.. -- -. --- .--. --.- .-. ... - ..- ...- .-- -..- -.-- --..
```

Saída esperada

```bash
ABCDEFGHIJKLMNOPQRSTUVWXYZ
```

  -----------------------------------------------------------------------
  **Entrada e saída do programa**

  -----------------------------------------------------------------------
- A entrada de dados do programa não deve alterado. Sempre deve feita como parâmetro da execução.
- A saída de dados deve ser exclusivamente a palavra traduzida.
- Os programas passarão por teste automatizado. Portanto, qualquer alteração no formato de entrada e saída resultará em falha nos testes e desconto de nota.

  -----------------------------------------------------------------------
  **Erros de Compilação**

  -----------------------------------------------------------------------

- Sobre erros de compilação: considere apenas erros. Não há problema se o projeto tiver *warnings* (embora *warnings* podem avisar sobre possíveis travamentos em tempo de execução, como loop infinito, divisão por zero, etc.).

-----------------------------------------------------------------------
**Desonestidade acadêmica**
-----------------------------------------------------------------------

Este trabalho deve ser feito em duplas ou em trios. Evidentemente você pode "discutir" o material dado em classe, inclusive sobre os problemas e "dicas" para chegar às soluções, mas você deve ser responsável pela solução final e pelo desenvolvimento de seus programas. Portanto, cópias totais/parciais dos programas terão nota zero. Além disso, não serão aceitos projetos atrasados. Os casos de desonestidade serão tratados com rigor.

  -----------------------------------------------------------------------
  **Erros de Compilação**

  -----------------------------------------------------------------------

Sobre erros de compilação: considere apenas erros. Não há problemase o projeto tiver *warnings* (embora *warnings* podem avisar sobre
possíveis travamentos em tempo de execução, como loop infinito, divisão por zero, etc.).
