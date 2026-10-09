# Capítulo 14 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Enunciado** (página impressa 115, página 127 do livro completo):

Crie um programa em C que grave o nome e a idade de 3 pessoas em um arquivo.

### Uma resolução possível

Abra pessoas.txt em modo w e grave três registros, nome e idade separados por tabulação. Execute numa pasta de trabalho: w substitui o arquivo existente.

[Ver programa completo (C)](../c/capitulo-14/exercicio-01.c)

Entrada de exemplo (uma informação por linha):

```text
Ana
20
Bia
30
Caio
40
```

Resultado esperado (trecho quando houver outras mensagens):

```text
3 pessoas gravadas
```

## Exercício 2

**Enunciado** (página impressa 115, página 127 do livro completo):

Faça um programa que leia o conteúdo de um arquivo e exiba na tela.

### Uma resolução possível

Abra o arquivo em modo r e copie seus caracteres para a saída. O teste cria um arquivo de exemplo antes de executar.

O teste automático prepara `pessoas.txt` com `Ana` e `Bia`. Ao executar manualmente, use o arquivo criado no exercício 1 ou crie seu próprio arquivo.

[Ver programa completo (C)](../c/capitulo-14/exercicio-02.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
Ana
```

## Exercício 3

**Enunciado** (página impressa 115, página 127 do livro completo):

Adapte o exercício anterior para adicionar mais nomes sem apagar os anteriores.

### Uma resolução possível

O enunciado referencia o programa de leitura, mas pede acrescentar nomes. A solução combina append (a) com uma leitura posterior: preserva o conteúdo anterior e mostra o resultado.

[Ver programa completo (C)](../c/capitulo-14/exercicio-03.c)

Entrada de exemplo (uma informação por linha):

```text
Caio
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Ana
Bia
Caio
```

## Exercício 4

**Enunciado** (página impressa 115, página 127 do livro completo):

Em PHP, crie um script que registre um log de acessos (data e hora) em um arquivo.

### Uma resolução possível

Acrescente um timestamp UTC por execução. FILE_APPEND preserva o histórico e LOCK_EX reduz conflitos entre escritores cooperativos.

[Ver programa completo (PHP)](../php/capitulo-14/exercicio-04.php)

Resultado esperado (trecho quando houver outras mensagens):

```text
Acesso registrado
```

## Exercício 5

**Enunciado** (página impressa 115, página 127 do livro completo):

Faça um programa que leia os dados de um arquivo e mostre quantas linhas ele possui.

### Uma resolução possível

Conte quebras de linha e acrescente uma linha se o último caractere não for quebra. Assim um arquivo sem newline final também é contado corretamente.

[Ver programa completo (C)](../c/capitulo-14/exercicio-05.c)

Resultado esperado (trecho quando houver outras mensagens):

```text
Linhas: 2
```
