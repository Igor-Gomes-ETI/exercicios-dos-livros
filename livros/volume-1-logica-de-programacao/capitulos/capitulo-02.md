# Capítulo 02 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-02/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 17, página 29 do livro completo):

Crie um algoritmo que leia o nome e a idade de uma pessoa e exiba: “Olá, [nome]! Você tem [idade] anos.”

### Uma resolução possível

Leia o nome completo e a idade. A leitura por linha evita cortar o nome no primeiro espaço.

[Ver programa completo (C)](../c/capitulo-02/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
Ana Silva
20
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Ola, Ana Silva! Voce tem 20 anos.
```

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-02/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 17, página 29 do livro completo):

Desenvolva um algoritmo para calcular o IMC (Índice de Massa Corporal), considerando: • IMC = peso / (altura × altura)

### Uma resolução possível

Divida o peso em quilogramas pelo quadrado da altura em metros. Peso e altura precisam ser positivos. O exemplo calcula o valor, sem fazer interpretação clínica.

[Ver programa completo (C)](../c/capitulo-02/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
72
1.8
```

Resultado esperado (trecho quando houver outras mensagens):

```text
IMC: 22.22
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-02/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 17, página 29 do livro completo):

Escreva o pseudocódigo para determinar se um número é par ou ímpar.

### Uma resolução possível

O resto da divisão por 2 é zero para números pares, inclusive zero e inteiros negativos pares.

```text
INICIO
  LEIA numero inteiro
  SE numero MOD 2 = 0 ENTAO ESCREVA "Par"
  SENAO ESCREVA "Impar"
FIM
```

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-02/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 17, página 29 do livro completo):

Faça um teste de mesa para o algoritmo de cálculo da média de notas apresentado no capítulo.

### Uma resolução possível

O algoritmo do capítulo usa QUATRO notas (P1, P2, P3, P4), não três. Some as quatro e divida por 4. Siga a atualização das variáveis antes de calcular a média.

| P1 | P2 | P3 | P4 | Soma | Média |
|---|---|---|---|---|---|
|6|7|8|9|30|7,5|
|5|6|5|6|22|5,5|
|8|9|10|7|34|8,5|

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-02/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 17, página 29 do livro completo):

Crie um algoritmo que leia o valor de uma compra e exiba o valor com 10% de desconto.

### Uma resolução possível

Dez por cento de desconto corresponde a multiplicar o valor original por 0,90.

[Ver programa completo (C)](../c/capitulo-02/exercicio-05.c)

Entrada de exemplo (uma informação por linha):

```text
100
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Total: 90.00
```
