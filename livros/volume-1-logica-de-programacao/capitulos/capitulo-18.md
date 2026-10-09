# Capítulo 18 — exercícios resolvidos

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

[Como compartilhar outra solução](../../../CONTRIBUTING.md) · [Índice](../README.md)

## Exercício 1

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-18/exercicio-01/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 155, página 167 do livro completo):

Crie um programa PHP que receba 3 números e diga qual é o maior.

### Uma resolução possível

Compare os três números e exiba o maior; max aceita valores iguais.

[Ver programa completo (PHP)](../php/capitulo-18/exercicio-01.php)

Entrada de exemplo (uma informação por linha):

```text
3
8
8
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Maior: 8
```

## Exercício 2

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-18/exercicio-02/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 155, página 167 do livro completo):

Faça um sistema de login com até 3 tentativas antes de bloquear.

### Uma resolução possível

Simulação de terminal: após três erros, encerra e informa bloqueio. Credenciais fictícias aluno/estudo123. O bloqueio dura só esta execução; aplicação web real exigiria persistência, hashes de senha e controle de sessão.

[Ver programa completo (PHP)](../php/capitulo-18/exercicio-02.php)

Entrada de exemplo (uma informação por linha):

```text
x
x
x
x
aluno
estudo123
```

Resultado esperado (trecho quando houver outras mensagens):

```text
Login aceito
```

## Exercício 3

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-18/exercicio-03/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 155, página 167 do livro completo):

Desenvolva um gerador de senhas aleatórias com letras e números.

### Uma resolução possível

Sorteie cada caractere com random_int entre letras e números. Comprimento didático de 12 caracteres; cada execução pode produzir uma senha diferente.

O teste verifica comprimento 12 e uso exclusivo de letras e números. Isso não garante que todas as classes apareçam em cada resultado.

[Ver programa completo (PHP)](../php/capitulo-18/exercicio-03.php)

O resultado varia; consulte a explicação e os testes para os critérios de verificação.

## Exercício 4

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-18/exercicio-04/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 155, página 167 do livro completo):

Crie um conversor de moedas (Real, Dólar, Euro).

### Uma resolução possível

Converta a moeda de origem para reais e depois para a moeda de destino. As taxas fixas são fictícias (USD=5 BRL e EUR=6 BRL), não cotações atuais.

[Ver programa completo (PHP)](../php/capitulo-18/exercicio-04.php)

Entrada de exemplo (uma informação por linha):

```text
BRL
USD
100
```

Resultado esperado (trecho quando houver outras mensagens):

```text
USD 20.00
```

## Exercício 5

**Compartilhe sua resolução:** crie `alternativas/seu-nick/volume-1/capitulo-18/exercicio-05/`, coloque sua resposta ou código e um `README.md` com explicação e testes. Não altere esta resolução proposta. [Veja como criar a pasta e enviar](../../../CONTRIBUTING.md).

**Enunciado** (página impressa 155, página 167 do livro completo):

Implemente um controle de tarefas (To-Do List) gravando cada item em arquivo.

### Uma resolução possível

Menu de terminal: adicionar, listar e remover pelo índice. Cada mudança é gravada em JSON. O exemplo é de uso local por um processo; escrita atômica/concorrência seriam melhorias para aplicações multiusuário.

Menu: `1` + texto adiciona; `2` lista; `3` + índice remove; `0` encerra. Requer PHP 8.1 ou superior por usar `array_is_list`. Execute em uma pasta de trabalho; o arquivo fica nessa pasta.

[Ver programa completo (PHP)](../php/capitulo-18/exercicio-05.php)

Entrada de exemplo (uma informação por linha):

```text
1
Estudar
2
0
```

Resultado esperado (trecho quando houver outras mensagens):

```text
0: Estudar
```

---

**Quer entender os conceitos deste capítulo desde o início?** Conheça o livro completo *Lógica de Programação e Algoritmo*, de Igor Gomes: **[compre na Amazon](https://a.co/d/gTA39Jr)** ou **[adquira o impresso no Clube de Autores](https://clubedeautores.com.br/livro/logica-de-programacao-e-algoritmo)**.
