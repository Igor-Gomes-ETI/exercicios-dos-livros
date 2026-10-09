# Capítulo 09 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-09/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 72, página 84 do livro completo):

Leia uma matriz 3×3 e exiba a soma dos elementos.

### Uma resolução possível

Dois laços percorrem as três linhas e as três colunas.

[Ver programa completo (C)](../c/capitulo-09/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
1
2
3
4
5
6
7
8
9
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Soma: 45.00
```

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-09/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 72, página 84 do livro completo):

Crie um programa que leia uma matriz 3×3 e mostre a diagonal principal.

### Uma resolução possível

A diagonal principal possui os índices iguais, m[i][i].

[Ver programa completo (C)](../c/capitulo-09/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
1
2
3
4
5
6
7
8
9
```

Resultado esperado (trecho quando houver outras mensagens):

```text
1 5 9
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-09/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 72, página 84 do livro completo):

Desenvolva um código que leia duas matrizes 2×2 e exiba a soma entre elas.

### Uma resolução possível

Leia primeiro os quatro elementos de A e depois os quatro de B; some posições correspondentes.

[Ver programa completo (C)](../c/capitulo-09/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
1
2
3
4
4
3
2
1
```

Resultado esperado (trecho quando houver outras mensagens):

```text
5 5
5 5
```

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-09/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 72, página 84 do livro completo):

Faça um programa que leia uma matriz 4×4 e conte quantos valores são maiores que 10.

### Uma resolução possível

Conte somente valores estritamente maiores que 10.

[Ver programa completo (C)](../c/capitulo-09/exercicio-04.c)

Entrada de exemplo (uma informação por linha):

```text
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Maiores que 10: 6
```

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-09/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 72, página 84 do livro completo):

Em PHP, monte uma matriz 3×3 e exiba os elementos em formato de tabela HTML.

### Uma resolução possível

Use um array de linhas e gere uma célula para cada valor. A saída é HTML e pode ser salva em um arquivo e aberta no navegador.

[Ver programa completo (PHP)](../php/capitulo-09/exercicio-05.php)

Resultado esperado (trecho quando houver outras mensagens):

```text
<td>9</td>
```
