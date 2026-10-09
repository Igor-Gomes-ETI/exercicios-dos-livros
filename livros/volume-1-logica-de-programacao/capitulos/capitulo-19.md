# Capítulo 19 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Enunciado** (página impressa 162, página 174 do livro completo):

Crie uma função recursiva que calcule a soma dos números de 1 a N.

### Uma resolução possível

Soma recursiva usa soma(0)=0 e soma(n)=n+soma(n-1). O limite 1000 evita profundidade excessiva.

[Ver programa completo (C)](../c/capitulo-19/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
10
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Soma: 55
```

## Exercício 2

**Enunciado** (página impressa 162, página 174 do livro completo):

Escreva uma função que exiba todos os números pares de N até 0.

### Uma resolução possível

Se N for ímpar, comece em N-1. Exiba e reduza de dois em dois até zero.

[Ver programa completo (C)](../c/capitulo-19/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
7
```

Resultado esperado (trecho quando houver outras mensagens):

```text
6
4
2
0
```

## Exercício 3

**Enunciado** (página impressa 162, página 174 do livro completo):

Desenvolva uma função recursiva que inverta uma string.

### Uma resolução possível

Troque as extremidades e chame a função no intervalo interno. Esta implementação inverte bytes; o exemplo usa ASCII, não caracteres multibyte UTF-8.

[Ver programa completo (C)](../c/capitulo-19/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
algoritmo
```

Resultado esperado (trecho quando houver outras mensagens):

```text
omtirogla
```

## Exercício 4

**Enunciado** (página impressa 162, página 174 do livro completo):

Implemente a sequência de Fibonacci até o 15º termo.

### Uma resolução possível

Convenção: os 15 termos são F(0) até F(14), começando em 0 e 1. O enunciado não fixa a indexação; começar em F(1) é outra opção se documentada.

[Ver programa completo (C)](../c/capitulo-19/exercicio-04.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
```

## Exercício 5

**Enunciado** (página impressa 162, página 174 do livro completo):

Compare o tempo de execução de Fibonacci recursivo e iterativo.

### Uma resolução possível

Use o mesmo N nas duas versões, confirme o resultado e compare tempo de CPU com clock. Tempos dependem da máquina e resolução do relógio; não são garantia de ranking em todos os casos. A versão recursiva ingênua repete muitos cálculos.

[Ver programa completo (C)](../c/capitulo-19/exercicio-05.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
Resultado: 832040
```
