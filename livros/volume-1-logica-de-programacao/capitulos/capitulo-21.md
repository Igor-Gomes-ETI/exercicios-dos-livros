# Capítulo 21 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-21/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 178, página 190 do livro completo):

Descreva em pseudocódigo o processo de preparar um sanduíche.

### Uma resolução possível

O pseudocódigo representa etapas essenciais; a receita e os ingredientes podem ser diferentes.

```text
INICIO
  SEPARAR pao, recheio e utensilios
  ABRIR o pao
  COLOCAR recheio
  FECHAR o sanduiche
  SERVIR
FIM
```

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-21/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 178, página 190 do livro completo):

Crie um algoritmo que leia 3 notas e mostre se o aluno foi aprovado.

### Uma resolução possível

Leia três notas e calcule a média. Adota-se aprovação a partir de 6, como nos capítulos anteriores, pois o enunciado não repete esse limite.

[Ver programa completo (C)](../c/capitulo-21/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
5
6
7
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Aprovado
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-21/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 178, página 190 do livro completo):

Explique com suas palavras o que é abstração e dê um exemplo.

### Uma resolução possível

Abstração seleciona o que importa para o problema e omite detalhes irrelevantes. Para calcular a média escolar, importam as notas e o critério de aprovação; a cor da mochila do aluno não altera o cálculo.

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-21/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 178, página 190 do livro completo):

Liste 5 situações do dia a dia onde você usaria decomposição.

### Uma resolução possível

Cinco exemplos: organizar uma viagem (transporte, hospedagem, roteiro); preparar uma refeição (ingredientes, preparo, serviço); planejar estudos (temas, horários, revisão); fazer mudança (separar, embalar, transportar); organizar um evento (local, convidados, materiais). Cada situação pode ser dividida em tarefas menores.

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-21/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 178, página 190 do livro completo):

Refaça um exercício anterior pensando nos 4 pilares do pensamento computacional.

### Uma resolução possível

Retomando o exercício 1.4 (soma de dois números): decomposição separa leitura, soma e exibição; reconhecimento de padrões identifica entrada-processamento-saída; abstração mantém apenas os dois valores e sua soma; algoritmo ordena os passos. O programa é uma implementação possível.

[Ver programa completo (C)](../c/capitulo-21/exercicio-05.c)

Entrada de exemplo (uma informação por linha):

```text
2
3
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Soma: 5.00
```

---

**Quer entender os conceitos deste capítulo desde o início?** Conheça o livro completo *Lógica de Programação e Algoritmo*, de Igor Gomes: **[compre na Amazon](https://a.co/d/gTA39Jr)** ou **[adquira o impresso no Clube de Autores](https://clubedeautores.com.br/livro/logica-de-programacao-e-algoritmo)**.
