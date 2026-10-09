# Capítulo 13 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-13/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 106, página 118 do livro completo):

Crie um vetor com 10 números e implemente uma busca linear para localizar um valor informado pelo usuário.

### Uma resolução possível

Busque da primeira posição à última. Retorne -1 se não encontrar. O vetor escolhido é fixo porque o enunciado só exige ler o alvo.

[Ver programa completo (C)](../c/capitulo-13/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
8
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Indice: 3
```

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-13/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 106, página 118 do livro completo):

Crie um programa que leia 10 números, os ordene e depois aplique uma busca binária.

### Uma resolução possível

Busca binária exige ordem. Ordene os dez números antes de buscar e informe o índice no vetor ordenado, não no original.

[Ver programa completo (C)](../c/capitulo-13/exercicio-02.c)

Entrada de exemplo (uma informação por linha):

```text
10
9
8
7
6
5
4
3
2
1
7
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Indice ordenado: 6
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-13/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 106, página 118 do livro completo):

Em PHP, crie uma busca em um array de nomes e exiba se o nome foi encontrado.

### Uma resolução possível

Faça busca estrita pelo nome. A comparação é sensível a maiúsculas e minúsculas.

[Ver programa completo (PHP)](../php/capitulo-13/exercicio-03.php)

Entrada de exemplo (uma informação por linha):

```text
Ana
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Encontrado
```

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-13/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 106, página 118 do livro completo):

Explique, em suas palavras, a diferença entre busca linear e busca binária.

### Uma resolução possível

Busca linear examina elementos sucessivamente e funciona em dados desordenados; no pior caso é O(n). Busca binária elimina metade do intervalo a cada passo e exige dados ordenados; é O(log n). Ordenar antes também tem custo e deve ser considerado.

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-13/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 106, página 118 do livro completo):

Teste o desempenho das duas buscas com vetores de tamanhos diferentes (ex: 10, 100, 1000 elementos).

### Uma resolução possível

Para comparar de modo reproduzível, conte as inspeções ao buscar um valor ausente em vetores ordenados de 10, 100 e 1000 itens. Isso mede trabalho lógico, não tempo real.

[Ver programa completo (C)](../c/capitulo-13/exercicio-05.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
n=1000 linear=1000 binaria=10
```

---

**Quer entender os conceitos deste capítulo desde o início?** Conheça o livro completo *Lógica de Programação e Algoritmo*, de Igor Gomes: **[compre na Amazon](https://a.co/d/gTA39Jr)** ou **[adquira o impresso no Clube de Autores](https://clubedeautores.com.br/livro/logica-de-programacao-e-algoritmo)**.
