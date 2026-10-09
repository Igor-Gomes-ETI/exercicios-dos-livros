# Capítulo 06 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Enunciado** (página impressa 50, página 62 do PDF):

Escreva um programa que leia a idade e diga se a pessoa é criança (≤12), adolescente (≤17), adulto (≤59) ou idoso (≥60).

### Uma resolução possível

Ordene as faixas da menor para a maior. Depois de excluir as anteriores, basta comparar o limite superior.

[Ver programa completo (C)](../c/capitulo-06/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
60
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Idoso
```

## Exercício 2

**Enunciado** (página impressa 50, página 62 do PDF):

Crie um algoritmo que leia uma nota e informe se o aluno foi aprovado (≥6), em recuperação (≥4) ou reprovado (<4).

### Uma resolução possível

Teste aprovação antes da recuperação, respeitando 6 e 4.

[Ver programa completo (C)](../c/capitulo-06/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
4
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Recuperacao
```

## Exercício 3

**Enunciado** (página impressa 50, página 62 do PDF):

Faça um programa com switch que exiba o dia da semana de acordo com o número digitado (1 = Domingo, 2 = Segunda...).

### Uma resolução possível

Use um case por dia e default para entrada fora de 1 a 7.

[Ver programa completo (C)](../c/capitulo-06/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
1
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Domingo
```

## Exercício 4

**Enunciado** (página impressa 50, página 62 do PDF):

Escreva um código que pergunte o valor da compra e exiba o desconto aplicado: • Até R$100 → 5% • Até R$500 → 10% • Acima de R$500 → 15%

### Uma resolução possível

As faixas inclusivas são até 100 e até 500. Mostre o percentual, o desconto e o total.

[Ver programa completo (C)](../c/capitulo-06/exercicio-04.c)

Entrada de exemplo (uma informação por linha):

```text
100
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Total: 95.00
```

## Exercício 5

**Enunciado** (página impressa 50, página 62 do PDF):

Em PHP, refaça o exercício 1 usando if... elseif... else.

### Uma resolução possível

Esta é a versão em PHP do exercício 1 usando explicitamente if, elseif e else.

[Ver programa completo (PHP)](../php/capitulo-06/exercicio-05.php)

Entrada de exemplo (uma informação por linha):

```text
17
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Adolescente
```
