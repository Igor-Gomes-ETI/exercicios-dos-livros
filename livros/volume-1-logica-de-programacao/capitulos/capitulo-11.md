# Capítulo 11 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-11/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 89, página 101 do livro completo):

Crie uma lista encadeada simples com três elementos e mostre os valores.

### Uma resolução possível

Cada nó contém um valor e um ponteiro para o próximo. A lista é percorrida até NULL e toda memória alocada é liberada.

[Ver programa completo (C)](../c/capitulo-11/exercicio-01.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
10
20
30
```

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-11/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 89, página 101 do livro completo):

Faça um programa que simule uma fila de atendimento, onde novos nomes são adicionados e o primeiro é removido.

### Uma resolução possível

O primeiro nome inserido é o primeiro atendido: FIFO. Este exemplo aceita de 1 a 10 nomes, remove o primeiro e mostra os restantes.

[Ver programa completo (C)](../c/capitulo-11/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
3
Ana
Bia
Caio
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Atendido: Ana
Bia
Caio
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-11/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 89, página 101 do livro completo):

Desenvolva um código que utilize malloc() para criar um vetor de tamanho informado pelo usuário.

### Uma resolução possível

Valide o tamanho antes de malloc, leia os valores e libere com free. O limite de 10000 é uma escolha didática.

[Ver programa completo (C)](../c/capitulo-11/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
3
8
4
2
```

Resultado esperado (trecho quando houver outras mensagens):

```text
8
4
2
```

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-11/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 89, página 101 do livro completo):

Explique, com suas palavras, a diferença entre pilha e fila.

### Uma resolução possível

Pilha usa LIFO: o último a entrar é o primeiro a sair, como uma pilha de pratos. Fila usa FIFO: o primeiro a entrar é o primeiro a sair, como uma fila de atendimento. As operações típicas são empilhar/desempilhar e enfileirar/desenfileirar.

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-11/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 89, página 101 do livro completo):

Em PHP, crie uma lista de tarefas e mostre como inserir e remover itens dela.

### Uma resolução possível

Insira com [] e remova por índice; array_values reorganiza os índices após unset.

[Ver programa completo (PHP)](../php/capitulo-11/exercicio-05.php)

Resultado esperado (trecho quando houver outras mensagens):

```text
Ler o livro
Praticar PHP
```
