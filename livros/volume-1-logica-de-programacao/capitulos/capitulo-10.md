# Capítulo 10 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Enunciado** (página impressa 80, página 92 do PDF):

Crie uma função soma() que receba dois números e retorne o resultado.

### Uma resolução possível

A função recebe dois argumentos e devolve sua soma.

[Ver programa completo (C)](../c/capitulo-10/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
2
3
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Soma: 5.00
```

## Exercício 2

**Enunciado** (página impressa 80, página 92 do PDF):

Crie uma função maior() que receba três números e retorne o maior deles.

### Uma resolução possível

Compare o terceiro valor com o maior dos dois primeiros.

[Ver programa completo (C)](../c/capitulo-10/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
7
7
2
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Maior: 7.00
```

## Exercício 3

**Enunciado** (página impressa 80, página 92 do PDF):

Desenvolva uma função mediaAluno() que receba 3 notas e retorne a média.

### Uma resolução possível

Encapsule a média aritmética das três notas.

[Ver programa completo (C)](../c/capitulo-10/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
4
6
8
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Media: 6.00
```

## Exercício 4

**Enunciado** (página impressa 80, página 92 do PDF):

Crie uma função recursiva para calcular o fatorial de um número.

### Uma resolução possível

O caso-base é 0! = 1. Limite a 20 para evitar estouro de unsigned long long.

[Ver programa completo (C)](../c/capitulo-10/exercicio-04.c)

Entrada de exemplo (uma informação por linha):

```text
5
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Fatorial: 120
```

## Exercício 5

**Enunciado** (página impressa 80, página 92 do PDF):

Em PHP, crie uma função que receba o nome de uma pessoa e retorne uma saudação personalizada.

### Uma resolução possível

A função retorna a mensagem, deixando a exibição para quem a chama.

[Ver programa completo (PHP)](../php/capitulo-10/exercicio-05.php)

Entrada de exemplo (uma informação por linha):

```text
Ana
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Ola, Ana!
```
