# Capítulo 12 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Enunciado** (página impressa 98, página 110 do PDF):

Implemente o Bubble Sort para ordenar 10 números digitados pelo usuário.

### Uma resolução possível

Bubble Sort compara vizinhos e troca quando estão fora de ordem. O maior termina no fim de cada passagem.

[Ver programa completo (C)](../c/capitulo-12/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
10
9
8
7
6
5
4
3
2
1
```

Resultado esperado (trecho quando houver outras mensagens):

```text
1 2 3 4 5 6 7 8 9 10
```

## Exercício 2

**Enunciado** (página impressa 98, página 110 do PDF):

Faça um programa que leia 5 nomes e os exiba em ordem alfabética (C ou PHP).

### Uma resolução possível

Leia cinco nomes e ordene com comparação lexical. Sem configuração de locale, a ordem é por bytes; para este exemplo use nomes sem acentos e com capitalização consistente.

[Ver programa completo (PHP)](../php/capitulo-12/exercicio-02.php)

Entrada de exemplo (uma informação por linha):

```text
Eva
Ana
Davi
Caio
Bia
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Ana
Bia
Caio
Davi
Eva
```

## Exercício 3

**Enunciado** (página impressa 98, página 110 do PDF):

Crie um vetor com valores aleatórios e ordene usando o Selection Sort.

### Uma resolução possível

Selection Sort procura o menor restante e o coloca na próxima posição. A semente fixa torna a geração reproduzível numa mesma implementação de C; rand não serve para segurança.

[Ver programa completo (C)](../c/capitulo-12/exercicio-03.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
Ordenado
```

## Exercício 4

**Enunciado** (página impressa 98, página 110 do PDF):

Compare o número de trocas realizadas no Bubble Sort e no Selection Sort.

### Uma resolução possível

Compare cópias idênticas do vetor e conte apenas trocas efetivas. Para [5,4,3,2,1], Bubble faz 10 trocas e Selection faz 2. Isso não significa que Selection será sempre mais rápido: comparações e entradas também importam.

[Ver programa completo (C)](../c/capitulo-12/exercicio-04.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
Bubble: 10
Selection: 2
```

## Exercício 5

**Enunciado** (página impressa 98, página 110 do PDF):

Use o sort() do PHP e depois implemente manualmente o mesmo resultado com o Insertion Sort.

### Uma resolução possível

Compare sort numérico com Insertion Sort manual, que desloca valores maiores e insere o atual. Verifique igualdade das duas saídas.

[Ver programa completo (PHP)](../php/capitulo-12/exercicio-05.php)

Resultado esperado (trecho quando houver outras mensagens):

```text
-1 2 2 7 9
```
