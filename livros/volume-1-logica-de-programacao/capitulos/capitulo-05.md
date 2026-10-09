# Capítulo 05 — exercícios resolvidos

Estas resoluções foram elaboradas com auxílio do ChatGPT e são exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Enunciado** (página impressa 43, página 55 do PDF):

Escreva um programa em C que leia dois números e mostre: • A soma • A subtração • A multiplicação • O quociente • O resto da divisão

### Uma resolução possível

O resto pede operandos inteiros. Aqui o quociente é real, enquanto o resto usa %. Evite divisão por zero e o caso INT_MIN/-1.

[Ver programa completo (C)](../c/capitulo-05/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
7
2
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Quociente: 3.50
Resto: 1
```

## Exercício 2

**Enunciado** (página impressa 43, página 55 do PDF):

Crie um programa que leia a idade e diga se o usuário é maior de idade.

### Uma resolução possível

Compare idade com 18, incluindo o limite.

[Ver programa completo (C)](../c/capitulo-05/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
18
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Maior de idade
```

## Exercício 3

**Enunciado** (página impressa 43, página 55 do PDF):

Desenvolva um código que receba três notas e diga se o aluno foi aprovado (média ≥ 6).

### Uma resolução possível

Valide notas de 0 a 10 e compare a média com 6.

[Ver programa completo (C)](../c/capitulo-05/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
6
6
6
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Aprovado
```

## Exercício 4

**Enunciado** (página impressa 43, página 55 do PDF):

Teste a diferença entre x++ e ++x e anote os resultados.

### Uma resolução possível

Pós-incremento fornece o valor anterior; pré-incremento fornece o valor atualizado. As operações estão em instruções separadas para evitar comportamento indefinido em C.

[Ver programa completo (C)](../c/capitulo-05/exercicio-04.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
x++: retorno=5, x=6
++x: retorno=6, x=6
```

## Exercício 5

**Enunciado** (página impressa 43, página 55 do PDF):

Em PHP, crie uma expressão que verifique se um número é positivo e par ao mesmo tempo.

### Uma resolução possível

As duas condições precisam ser verdadeiras: maior que zero e resto zero ao dividir por 2.

[Ver programa completo (PHP)](../php/capitulo-05/exercicio-05.php)

Entrada de exemplo (uma informação por linha):

```text
4
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Positivo e par
```
