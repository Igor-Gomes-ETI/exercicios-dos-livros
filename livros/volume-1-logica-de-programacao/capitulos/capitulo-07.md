# Capítulo 07 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Enunciado** (página impressa 58, página 70 do PDF):

Escreva um programa que mostre os números de 1 a 100.

### Uma resolução possível

Um for com limites inclusivos percorre de 1 a 100.

[Ver programa completo (C)](../c/capitulo-07/exercicio-01.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
99
100
```

## Exercício 2

**Enunciado** (página impressa 58, página 70 do PDF):

Faça um programa que leia 10 números e calcule a média deles.

### Uma resolução possível

Acumule dez valores e divida a soma por dez.

[Ver programa completo (C)](../c/capitulo-07/exercicio-02.c)

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
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Media: 5.50
```

## Exercício 3

**Enunciado** (página impressa 58, página 70 do PDF):

Crie um programa que peça uma senha numérica e continue pedindo até o usuário digitar a senha correta.

### Uma resolução possível

Para a simulação, a senha numérica escolhida é 1234. Repita até acertar. Não use senha fixa nem este mecanismo em autenticação real.

[Ver programa completo (C)](../c/capitulo-07/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
1
1234
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Acesso autorizado
```

## Exercício 4

**Enunciado** (página impressa 58, página 70 do PDF):

Faça um programa que mostre todos os números pares entre 1 e 50.

### Uma resolução possível

Começar em 2 e avançar de dois em dois evita testar os números ímpares.

[Ver programa completo (C)](../c/capitulo-07/exercicio-04.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
48
50
```

## Exercício 5

**Enunciado** (página impressa 58, página 70 do PDF):

Em PHP, crie um loop que mostre a tabuada de um número informado pelo usuário.

### Uma resolução possível

Leia o número e multiplique pelos valores de 1 a 10. Os limites da tabuada foram escolhidos como convenção didática.

[Ver programa completo (PHP)](../php/capitulo-07/exercicio-05.php)

Entrada de exemplo (uma informação por linha):

```text
3
```

Resultado esperado (trecho quando houver outras mensagens):

```text
3 x 10 = 30
```
