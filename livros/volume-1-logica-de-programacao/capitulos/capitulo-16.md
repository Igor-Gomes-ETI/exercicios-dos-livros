# Capítulo 16 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-16/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 133, página 145 do livro completo):

Crie um programa com um menu de 4 opções: soma, subtração, multiplicação e divisão.

### Uma resolução possível

Menu de quatro operações, com 0 para sair (controle adicional). Leia dois números por operação e bloqueie divisão por zero.

[Ver programa completo (C)](../c/capitulo-16/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
1
2
3
0
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Resultado: 5.00
```

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-16/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 133, página 145 do livro completo):

Faça um sistema que leia o nome e 3 notas de vários alunos, mostrando a média de cada um.

### Uma resolução possível

Leia a quantidade de alunos e, para cada um, nome e três notas. O limite de 1000 é uma escolha do exemplo.

[Ver programa completo (C)](../c/capitulo-16/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
2
Ana
6
7
8
Bia
5
5
5
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Ana: 7.00
Bia: 5.00
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-16/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 133, página 145 do livro completo):

Crie um programa que exiba um menu de compras (produto e preço) e calcule o total.

### Uma resolução possível

Os produtos e preços são escolhas didáticas: caderno R$12,50 e caneta R$3,00. Acumule em centavos inteiros, para evitar erro de ponto flutuante. Menu 0 encerra.

[Ver programa completo (C)](../c/capitulo-16/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
1
2
2
1
0
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Total: 28.00
```

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-16/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 133, página 145 do livro completo):

Escreva um programa que exiba um contador regressivo de 10 a 0 e mostre “Fim!”.

### Uma resolução possível

Inclua os dois limites: 10 e 0.

[Ver programa completo (C)](../c/capitulo-16/exercicio-04.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
1
0
Fim!
```

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-16/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 133, página 145 do livro completo):

Em PHP, crie um menu que permita calcular fatorial, potência e raiz quadrada.

### Uma resolução possível

Menu de terminal com fatorial (0–20), potência e raiz quadrada. Fatorial usa float para evitar depender do tamanho do inteiro PHP; nesse limite cabe com folga, mas valores altos não têm precisão inteira exata.

[Ver programa completo (PHP)](../php/capitulo-16/exercicio-05.php)

Entrada de exemplo (uma informação por linha):

```text
1
5
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Resultado: 120
```
