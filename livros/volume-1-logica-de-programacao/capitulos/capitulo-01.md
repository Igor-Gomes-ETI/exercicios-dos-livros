# Capítulo 01 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-01/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 10, página 22 do livro completo):

Descreva em linguagem natural o algoritmo para preparar um café.

### Uma resolução possível

Uma sequência em linguagem natural pode ser: separar água, café, filtro e recipiente; aquecer a água; colocar o filtro; adicionar o pó; despejar a água aos poucos; aguardar a filtragem; servir. O método escolhido é café coado; outros métodos também atendem ao enunciado.

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-01/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 10, página 22 do livro completo):

Escreva o pseudocódigo para verificar se uma pessoa é maior de idade.

### Uma resolução possível

Leia uma idade válida e compare com 18. A igualdade pertence ao grupo de maiores de idade.

```text
INICIO
  LEIA idade
  SE idade < 0 ENTAO ESCREVA "Idade invalida"
  SENAO SE idade >= 18 ENTAO ESCREVA "Maior de idade"
  SENAO ESCREVA "Menor de idade"
FIM
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-01/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 10, página 22 do livro completo):

Explique, com suas palavras, a diferença entre lógica, algoritmo e programação.

### Uma resolução possível

Lógica organiza o raciocínio e as relações entre condições. Algoritmo é uma sequência finita e ordenada de passos para resolver um problema. Programação expressa esses passos em uma linguagem executável. Uma mesma lógica pode originar algoritmos e implementações diferentes.

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-01/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 10, página 22 do livro completo):

Converta o seguinte algoritmo em C: • Ler dois números. • Somar os números. • Mostrar o resultado.

### Uma resolução possível

Leia dois números reais, some e exiba o resultado. Cada número deve ser informado em uma linha.

[Ver programa completo (C)](../c/capitulo-01/exercicio-04.c)

Entrada de exemplo (uma informação por linha):

```text
2
3
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Soma: 5.00
```

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-01/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 10, página 22 do livro completo):

Pense em uma tarefa do dia a dia que possa ser descrita como um algoritmo e escreva-a passo a passo.

### Uma resolução possível

Exemplo: escovar os dentes. Separe escova e creme dental; aplique o creme; escove as superfícies dos dentes; enxágue a boca; lave a escova e guarde os materiais. A resposta é aberta: outras tarefas e sequências claras também são válidas.
