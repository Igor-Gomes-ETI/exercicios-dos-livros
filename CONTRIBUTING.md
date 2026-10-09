# Compartilhe sua solução

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

## Sua pasta, seus arquivos

Para compartilhar uma resolução, **crie arquivos na pasta do seu nick**, sem editar ou substituir os exemplos de `livros/`. Use seu nick do GitHub, sem espaços. Organize cada exercício assim:

```text
alternativas/seu-nick/volume-1/capitulo-01/exercicio-04/
```

Nessa pasta, coloque sua resolução (`solucao.c`, `solucao.php`, `index.php` para navegador ou `resolucao.md` para resposta conceitual) e um `README.md`. Por exemplo, para o nick `ana-dev`:

| Arquivo | Conteúdo |
|---|---|
| `alternativas/ana-dev/volume-1/capitulo-01/exercicio-04/solucao.c` | Código da própria resolução |
| `alternativas/ana-dev/volume-1/capitulo-01/exercicio-04/README.md` | Raciocínio, instruções e testes |

Troque `ana-dev` pelo seu nick, e os números pelo capítulo e exercício escolhidos. Cada resolução fica em sua própria pasta. Você pode usar outra linguagem ou uma abordagem mais simples ou eficiente. Para comparar, identifique qual exemplo consultou e explique suas decisões.

## Passo a passo pelo site do GitHub

1. Entre na sua conta do GitHub e abra [este repositório](https://github.com/Igor-Gomes-ETI/exercicios-dos-livros).
2. Clique em **Fork** e depois em **Create fork**. Isso cria uma cópia na sua conta; o repositório original permanece preservado.
3. No seu fork, use o seletor de branch, digite `minha-solucao` e escolha a opção para criar essa branch a partir de `main`.
4. Clique em **Add file → Create new file**. No nome, digite o caminho completo, por exemplo `alternativas/seu-nick/volume-1/capitulo-01/exercicio-04/README.md`. As barras criam as pastas automaticamente; substitua `seu-nick` pelo seu nick.
5. Copie o [modelo para solução do leitor](modelos/solucao-do-leitor.md), preencha e clique em **Commit changes** para salvar na branch `minha-solucao`.
6. Crie outro arquivo no mesmo caminho para o seu código, por exemplo `solucao.c`, e salve com **Commit changes**. Para vários arquivos já prontos, também pode usar **Add file → Upload files** dentro da pasta correspondente.
7. Execute sua solução no computador e anote as entradas e saídas no README. Para PHP no navegador, siga o [guia XAMPP](livros/volume-1-logica-de-programacao/php/README.md#executar-um-exercicio-com-formulario-no-navegador).
8. No fork, clique em **Contribute → Open pull request**. Confira a base `Igor-Gomes-ETI/exercicios-dos-livros`, branch `main`, e a sua branch de comparação `minha-solucao`.
9. Em **Files changed**, confira que sua alternativa apenas adiciona arquivos dentro de `alternativas/seu-nick/`. Não deve alterar os programas ou respostas de `livros/`.
10. Dê um título como `Solução de seu-nick: capítulo 01, exercício 04`, descreva a abordagem e os testes, e clique em **Create pull request**.

Um pull request é um pedido de inclusão: o mantenedor revisará antes de adicionar ao repositório. Depois de aprovado, outros leitores poderão abrir sua pasta e comparar as soluções. Adicionar apenas ao seu fork não envia a proposta; conclua o pull request.

## O que explicar no README

- Livro, capítulo e exercício, com link para o enunciado.
- Seu nick, linguagem e versão utilizada.
- Como o algoritmo funciona e o que muda em relação ao exemplo.
- Como executar: comando do terminal ou endereço local e passos do XAMPP.
- Entradas, saídas esperadas e testes realizados, incluindo limites e entradas inválidas quando aplicável.
- Referências e ferramentas utilizadas.

Para respostas conceituais, use `resolucao.md` e explique o raciocínio; não é necessário inventar um programa.

## Compartilhar sem criar um pull request

Abra uma [Issue de solução alternativa](https://github.com/Igor-Gomes-ETI/exercicios-dos-livros/issues/new?template=solucao-alternativa.md) e inclua um link para a pasta com seu nick em seu fork, o raciocínio e os testes. Essa opção permite discutir a abordagem; a Issue sozinha não adiciona arquivos ao repositório.

Não envie dados pessoais, credenciais, livros completos ou conteúdos de livros ainda não publicados. Se encontrar um erro no exemplo original, abra uma Issue descrevendo-o; propostas de correção devem ser enviadas em um pull request separado das alternativas.
