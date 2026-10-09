# Exemplos em PHP — começando com XAMPP

![Logo do XAMPP](../../../assets/xampp-logo.svg)

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

## O que instalar

O **XAMPP** reúne o interpretador PHP e o servidor Apache em uma instalação. Vamos utilizá-lo para estudar no computador. Este passo a passo usa **Windows** e a pasta `C:\xampp`; ajuste os caminhos se instalar em outro local.

1. Acesse o [download oficial do XAMPP](https://www.apachefriends.org/pt_br/download.html).
2. Escolha o instalador para Windows com **PHP 8.1 ou superior**. A versão do PHP aparece na página de download.
3. Execute o instalador e mantenha os componentes **PHP** e **Apache**. Escolha `C:\xampp` como pasta de instalação e conclua o assistente.
4. Abra o **XAMPP Control Panel** pelo menu Iniciar. Ele permite iniciar e parar os serviços quando você estudar páginas web.
5. Para conferir o PHP, abra o **PowerShell** pelo menu Iniciar e execute:

```powershell
& "C:\xampp\php\php.exe" -v
```

O símbolo `&` manda o PowerShell executar o programa indicado. A resposta deve mostrar a versão do PHP. Usar o caminho completo dispensa configurar a variável PATH.

## Baixar os exercícios

1. Na [página do repositório](https://github.com/Igor-Gomes-ETI/exercicios-dos-livros), clique em **Code → Download ZIP**.
2. Extraia o ZIP. Neste guia, coloque a pasta extraída em `C:\estudos\exercicios-dos-livros-main`.
3. Abra os arquivos `.php` em um editor, como o Bloco de Notas ou seu editor de código. Leia também o enunciado e a resolução na pasta `capitulos`.

## Executar os exemplos do livro no terminal

Os programas desta coleção recebem entradas pelo **terminal**, usando `STDIN`. Por isso, execute-os com o PHP do XAMPP no PowerShell. Apenas abrir estes arquivos pelo navegador não oferece a entrada de dados esperada. **Não é preciso iniciar Apache nem o serviço de banco de dados para este modo.**

Como primeiro teste, execute o exercício 5 do capítulo 6:

```powershell
cd "C:\estudos\exercicios-dos-livros-main\livros\volume-1-logica-de-programacao\php\capitulo-06"
& "C:\xampp\php\php.exe" .\exercicio-05.php
```

Neste exemplo, digite `20` e pressione Enter. O programa deve exibir `Adulto`.

O comando `cd` entra na pasta do capítulo. O segundo comando executa o arquivo. Se o terminal ficar aguardando, digite os dados solicitados, **um valor por linha**, pressionando Enter após cada um. Consulte a entrada de exemplo no [capítulo 6](../capitulos/capitulo-06.md). Use ponto como separador decimal, por exemplo `7.5`.

Para outro exercício, troque a pasta do capítulo e o nome do arquivo. Exemplos que gravam arquivos criam dados na pasta de execução; use uma pasta de estudo. Ao terminar, você pode fechar o terminal.

## Entender o navegador e o Apache

Para experimentar uma **página web** separada dos exemplos de terminal:

1. Crie a pasta `C:\xampp\htdocs\meu-primeiro-php`.
2. Dentro dela, salve um arquivo chamado `ola.php` com este conteúdo. Confira que o nome não ficou `ola.php.txt`:

```php
<?php
echo '<h1>Meu primeiro PHP com XAMPP!</h1>';
```

3. No **XAMPP Control Panel**, clique em **Start** na linha **Apache**. Aguarde o serviço indicar que está em execução.
4. Abra `http://localhost/meu-primeiro-php/ola.php` no navegador. A mensagem será exibida na página.
5. Quando terminar, clique em **Stop** na linha Apache.

`htdocs` é a pasta das páginas atendidas pelo Apache; `localhost` aponta para o seu próprio computador. Não abra `ola.php` com duplo clique: acesse o endereço acima para o PHP ser executado. O serviço de banco de dados não é necessário para esse teste. Para transformar exercícios de terminal em páginas interativas, será preciso criar formulários e adaptar a leitura para `$_POST` ou `$_GET`.

## Executar um exercício com formulário no navegador

A pasta [navegador](navegador/) contém uma adaptação adicional do **exercício 1.4 — soma de dois números** em PHP, com campos para digitar os valores. O programa original permanece preservado. Aqui as entradas são enviadas por formulário (`POST`), em vez de `STDIN`.

1. Após baixar e extrair o repositório, localize `livros/volume-1-logica-de-programacao/php/navegador` no Explorador de Arquivos.
2. Copie essa pasta para `C:\xampp\htdocs` e renomeie a cópia para `exercicios-livros`. Confira que `index.php` ficou diretamente em `C:\xampp\htdocs\exercicios-livros`.
3. Abra o **XAMPP Control Panel** e clique em **Start** na linha Apache. Não é necessário iniciar o banco de dados.
4. No navegador, acesse `http://localhost/exercicios-livros/`. Não use o caminho `C:\...` na barra de endereços.
5. Digite `2` no primeiro campo e `3` no segundo. Clique em **Calcular soma**: o resultado esperado é `5.00`.
6. Teste também `-2` e `3` (resultado `1.00`), `1.5` e `2.5` (resultado `4.00`) e um campo vazio (o formulário deve solicitar o preenchimento). Para decimais, use ponto.
7. Para estudar o código, abra o `index.php` copiado em um editor. Salve as alterações e atualize a página para executar novamente. Faça suas experiências nessa cópia local; para compartilhar, use a pasta com seu nick conforme o guia abaixo.
8. Ao terminar, clique em **Stop** na linha Apache.

Para enviar sua própria versão, coloque-a em `alternativas/seu-nick/volume-1/capitulo-01/exercicio-04/index.php` com um README. Siga o [guia de contribuição](../../../CONTRIBUTING.md). Para executar outra solução feita para navegador, copie a pasta desse exercício para `htdocs`, escolha um nome sem espaços e acesse `http://localhost/nome-da-pasta/`.

Se você apenas copiar um exemplo de terminal para `htdocs`, ele continuará esperando entradas de terminal. Use o formulário desta adaptação como referência para entender o envio e a validação de `$_POST` ao criar sua própria versão web.

## Se algo não funcionar

| Situação | Como conferir |
|---|---|
| O caminho do PHP não foi encontrado | Verifique a pasta de instalação e ajuste `C:\xampp\php\php.exe`. |
| `Could not open input file` | Confira a pasta atual com `pwd` e os arquivos com `dir`; entre na pasta correta com `cd`. |
| O programa fica esperando | Informe a próxima entrada e pressione Enter; veja quantas entradas o exercício utiliza. |
| O navegador mostra erro envolvendo `STDIN` | Esse exemplo usa terminal. Execute pelo PowerShell conforme o guia. |
| Apache não inicia | Leia **Logs** no painel. Outra aplicação pode estar usando a porta; consulte a documentação oficial antes de alterar configurações. Os exemplos de terminal continuam independentes do Apache. |
| `localhost` não abre ou mostra 404 | Confirme que Apache está iniciado, que o arquivo está em `htdocs` e que o endereço corresponde ao nome da pasta e do arquivo. |

## Outras instalações

Se você já possui **PHP 8.1 ou superior** instalado e disponível no PATH, pode entrar na pasta do exercício e executar `php exercicio-01.php`. No Linux e macOS, também é possível usar PHP CLI instalado conforme a documentação da sua distribuição ou do seu gerenciador de pacotes. Os códigos são os mesmos; este guia prioriza XAMPP no Windows.

## Referências

- [Download oficial do XAMPP](https://www.apachefriends.org/pt_br/download.html)
- [Perguntas frequentes oficiais para Windows](https://www.apachefriends.org/pt_br/faq_windows.html)
- [PHP: uso pela linha de comando](https://www.php.net/manual/pt_BR/features.commandline.php)
- Logo do XAMPP: [Apache Friends](https://www.apachefriends.org/images/xampp-logo-ac950edf.svg), utilizada para identificar a ferramenta.
