# Capítulo 15 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Enunciado** (página impressa 124, página 136 do PDF):

Escreva um algoritmo que leia dois números e mostre o maior.

### Uma resolução possível

Compare os dois valores; se iguais, informe o empate.

[Ver programa completo (C)](../c/capitulo-15/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
3
8
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Maior: 8.00
```

## Exercício 2

**Enunciado** (página impressa 124, página 136 do PDF):

Faça um programa que calcule o salário líquido com base no salário bruto e um desconto de 8%.

### Uma resolução possível

Desconto de 8% deixa 92% do salário bruto. O percentual é o do exercício, não uma regra de folha de pagamento real.

[Ver programa completo (C)](../c/capitulo-15/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
1000
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Liquido: 920.00
```

## Exercício 3

**Enunciado** (página impressa 124, página 136 do PDF):

Crie um programa que leia o nome e três notas de um aluno e mostre a média e o resultado.

### Uma resolução possível

Calcule a média de três notas. Como o exercício não repete o limite de aprovação, adota-se 6, conforme os exemplos anteriores do livro.

[Ver programa completo (C)](../c/capitulo-15/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
Ana
6
6
6
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Ana: 6.00 - Aprovado
```

## Exercício 4

**Enunciado** (página impressa 124, página 136 do PDF):

Desenvolva um programa que mostre os números de 1 a 100 e indique quais são pares.

### Uma resolução possível

Percorra 1 a 100 e marque os números divisíveis por 2.

[Ver programa completo (C)](../c/capitulo-15/exercicio-04.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
99
100 par
```

## Exercício 5

**Enunciado** (página impressa 124, página 136 do PDF):

Em PHP, crie um algoritmo que receba um valor e informe se ele é positivo, negativo ou zero.

### Uma resolução possível

Compare com zero antes de escolher uma das três mensagens.

[Ver programa completo (PHP)](../php/capitulo-15/exercicio-05.php)

Entrada de exemplo (uma informação por linha):

```text
0
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Zero
```
