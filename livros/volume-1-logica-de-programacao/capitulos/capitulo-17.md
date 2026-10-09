# Capítulo 17 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-17/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 145, página 157 do livro completo):

Crie um programa que gerencie o estoque de uma loja (entrada e saída de produtos).

### Uma resolução possível

Controle de um produto: entrada acrescenta unidades e saída só é aceita se houver estoque. A estrutura pode ser ampliada para vários produtos; isso é uma alternativa, não uma exigência omitida.

[Ver programa completo (C)](../c/capitulo-17/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
1
10
2
3
0
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Estoque: 7
```

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-17/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 145, página 157 do livro completo):

Desenvolva um programa que calcule o consumo médio de combustível de um carro.

### Uma resolução possível

Consumo médio é distância percorrida em km dividida pelo combustível gasto em litros. Litros precisa ser maior que zero.

[Ver programa completo (C)](../c/capitulo-17/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
300
20
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Consumo: 15.00 km/L
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-17/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 145, página 157 do livro completo):

Faça um simulador de login (usuário e senha pré-cadastrados).

### Uma resolução possível

Simulação local com credenciais fictícias aluno/estudo123. Compare ambas as strings. Não é um sistema de autenticação para produção.

[Ver programa completo (C)](../c/capitulo-17/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
aluno
estudo123
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Login aceito
```

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-17/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 145, página 157 do livro completo):

Crie um programa que leia 10 números e mostre o maior e o menor.

### Uma resolução possível

Inicialize extremos com o primeiro dos dez valores; isso também funciona com números todos negativos.

[Ver programa completo (C)](../c/capitulo-17/exercicio-04.c)

Entrada de exemplo (uma informação por linha):

```text
-1
-2
-3
-4
-5
-6
-7
-8
-9
-10
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Maior: -1.00
Menor: -10.00
```

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-17/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 145, página 157 do livro completo):

Monte um jogo simples de adivinhação de número entre 1 e 50.

### Uma resolução possível

Sorteie um número de 1 a 50 e repita palpites até acertar. Para teste, um argumento opcional define o alvo; no uso normal há sorteio.

A variável de ambiente `ALVO_TESTE=25` permite repetir o teste. Sem ela o alvo é sorteado. `rand` é suficiente para este jogo didático, mas não para operações de segurança.

[Ver programa completo (C)](../c/capitulo-17/exercicio-05.c)

Entrada de exemplo (uma informação por linha):

```text
20
30
25
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Acertou!
```

---

**Quer entender os conceitos deste capítulo desde o início?** Conheça o livro completo *Lógica de Programação e Algoritmo*, de Igor Gomes: **[compre na Amazon](https://a.co/d/gTA39Jr)** ou **[adquira o impresso no Clube de Autores](https://clubedeautores.com.br/livro/logica-de-programacao-e-algoritmo)**.
