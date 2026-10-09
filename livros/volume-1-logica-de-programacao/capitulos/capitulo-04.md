# Capítulo 04 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-04/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 34, página 46 do livro completo):

Declare três variáveis (idade, peso, altura) e mostre os valores na tela.

### Uma resolução possível

Use inteiro para idade e reais para peso e altura; valores de exemplo foram escolhidos porque o enunciado não os fixa.

[Ver programa completo (C)](../c/capitulo-04/exercicio-01.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
Idade: 25; Peso: 70.50; Altura: 1.75
```

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-04/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 34, página 46 do livro completo):

Escreva um programa que leia o nome e o ano de nascimento de uma pessoa e mostre sua idade.

### Uma resolução possível

Apenas o ano de nascimento permite calcular a idade aproximada: ano atual menos ano de nascimento. Leia também o ano de referência para tornar o exemplo reproduzível; o aniversário pode ainda não ter ocorrido.

[Ver programa completo (C)](../c/capitulo-04/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
Ana
2000
2026
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Ana: idade aproximada 26
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-04/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 34, página 46 do livro completo):

Crie uma constante chamada PI e use-a para calcular a área de um círculo.

### Uma resolução possível

Área é PI multiplicado pelo quadrado do raio; raio zero é aceito.

[Ver programa completo (C)](../c/capitulo-04/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
2
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Area: 12.5664
```

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-04/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 34, página 46 do livro completo):

Converta um valor em reais para dólares, usando uma constante TAXA_CAMBIO.

### Uma resolução possível

Defina a taxa em reais por dólar; dividir reais pela taxa produz dólares. A cotação 5 é fictícia, usada apenas para estudo.

[Ver programa completo (C)](../c/capitulo-04/exercicio-04.c)

Entrada de exemplo (uma informação por linha):

```text
100
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Dolares: 20.00
```

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-04/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 34, página 46 do livro completo):

Explique com suas palavras a diferença entre variável e constante.

### Uma resolução possível

Variável representa um valor que pode mudar durante a execução. Constante representa um valor definido que não deve ser alterado. Em C, const expressa essa restrição no código; em PHP, const ou define podem declarar constantes.

---

**Quer entender os conceitos deste capítulo desde o início?** Conheça o livro completo *Lógica de Programação e Algoritmo*, de Igor Gomes: **[compre na Amazon](https://a.co/d/gTA39Jr)** ou **[adquira o impresso no Clube de Autores](https://clubedeautores.com.br/livro/logica-de-programacao-e-algoritmo)**.
