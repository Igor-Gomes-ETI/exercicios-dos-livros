# Capítulo 20 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-20/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 171, página 183 do livro completo):

Calcule o tempo de execução teórico de um loop duplo (for dentro de for).

### Uma resolução possível

Se os dois laços executam n iterações independentes, o corpo executa n² vezes: tempo Θ(n²) e espaço auxiliar Θ(1) se usa apenas contadores. Para limites n e m diferentes, são n×m iterações. Laços com limites dependentes precisam de outra soma.

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-20/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 171, página 183 do livro completo):

Compare a busca linear e a binária em um vetor de 1000 elementos.

### Uma resolução possível

No vetor ordenado 0..999, busque o valor ausente 1000 e conte inspeções. A busca linear examina 1000 itens; a binária examina 10 posições. A ordenação prévia não está incluída porque os dados já são ordenados.

[Ver programa completo (C)](../c/capitulo-20/exercicio-02.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
Linear: 1000
Binaria: 10
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-20/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 171, página 183 do livro completo):

Escreva uma função que conte quantas vezes o número 1 aparece em uma matriz 100×100.

### Uma resolução possível

Uma função percorre exatamente 100×100 posições. No exemplo, a diagonal contém 1 e as demais posições zero, portanto o resultado é 100.

[Ver programa completo (C)](../c/capitulo-20/exercicio-03.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
Ocorrencias: 100
```

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-20/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 171, página 183 do livro completo):

Implemente Fibonacci iterativo e compare com o recursivo.

### Uma resolução possível

Implemente iterativamente, compare com a recursiva e verifique valores de 0 a 20. A iterativa usa tempo O(n) e espaço O(1); a recursiva ingênua usa tempo exponencial e pilha O(n).

[Ver programa completo (C)](../c/capitulo-20/exercicio-04.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
F(20): 6765
Resultados iguais de 0 a 20
```

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-20/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 171, página 183 do livro completo):

Em PHP, crie um programa que meça o tempo de execução de um for de 1 até 1 milhão.

### Uma resolução possível

Use hrtime monotônico e acumule um resultado para tornar o trabalho observável. O tempo medido varia por execução e ambiente.

[Ver programa completo (PHP)](../php/capitulo-20/exercicio-05.php)

Resultado esperado (trecho quando houver outras mensagens):

```text
Soma: 500000500000
```

---

**Quer entender os conceitos deste capítulo desde o início?** Conheça o livro completo *Lógica de Programação e Algoritmo*, de Igor Gomes: **[compre na Amazon](https://a.co/d/gTA39Jr)** ou **[adquira o impresso no Clube de Autores](https://clubedeautores.com.br/livro/logica-de-programacao-e-algoritmo)**.
