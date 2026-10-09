# Exercícios dos livros — Igor Gomes ETI

Estas são resoluções propostas e exemplos de caminhos possíveis. Não são a única forma de resolver, nem necessariamente a melhor. Você pode criar sua própria solução, inclusive uma melhor, e compartilhá-la para que outros leitores comparem as abordagens.

## Livro publicado

[Volume 1 — Lógica de Programação e Algoritmos](livros/volume-1-logica-de-programacao/README.md): **105 exercícios resolvidos**, com respostas conceituais, pseudocódigo, fluxogramas e programas em C e PHP.

## Ainda não leu o livro?

Os exercícios deste repositório acompanham **Lógica de Programação e Algoritmo — Do raciocínio lógico ao código em C e PHP**, de **Igor Gomes**. No livro completo, você encontra a explicação dos conceitos e a sequência de aprendizado que dá contexto às atividades. Leia, pratique e depois compare sua solução com as resoluções propostas aqui.

**[Compre na Amazon](https://a.co/d/gTA39Jr)** · **[Compre o impresso no Clube de Autores](https://clubedeautores.com.br/livro/logica-de-programacao-e-algoritmo)**

[Conheça o livro e sua proposta](https://igorgomes.eti.br/logica-de-programacao/). Ao adquirir um exemplar, você também apoia o trabalho do autor.

## Compartilhe sua forma de resolver

Crie uma pasta com seu nick em `alternativas/seu-nick/volume-1/capitulo-NN/exercicio-NN/`. Coloque sua resolução e um `README.md` explicando como executar e os testes realizados. **Preserve os arquivos originais de `livros/`.**

Siga o [passo a passo para criar sua pasta e enviar um pull request](CONTRIBUTING.md), use o [modelo do leitor](modelos/solucao-do-leitor.md) e consulte as [resoluções dos leitores](alternativas/README.md). Se preferir discutir uma abordagem antes de enviá-la, [abra uma sugestão](https://github.com/Igor-Gomes-ETI/exercicios-dos-livros/issues/new?template=solucao-alternativa.md).

Outros volumes poderão ser adicionados usando [o modelo de exercício](modelos/exercicio.md), após sua publicação.

## Verificação

### PHP com XAMPP, no navegador

![Logo do XAMPP](assets/xampp-logo.svg)

1. Baixe o [XAMPP oficial](https://www.apachefriends.org/pt_br/download.html) para Windows com PHP 8.1 ou superior e instale em `C:\xampp`, incluindo Apache e PHP.
2. Baixe este repositório em **Code → Download ZIP** e extraia-o.
3. Copie a pasta `livros/volume-1-logica-de-programacao/php/navegador` para `C:\xampp\htdocs\exercicios-livros`.
4. Abra o **XAMPP Control Panel** e clique em **Start** na linha Apache.
5. Acesse `http://localhost/exercicios-livros/` no navegador. Preencha os dois números e clique em **Calcular soma**. Teste `2` e `3`: resultado `5.00`.
6. Ao terminar, clique em **Stop** na linha Apache. O serviço de banco de dados não é necessário para esse exemplo.

Veja o [guia completo do XAMPP](livros/volume-1-logica-de-programacao/php/README.md), com instalação, caminhos, execução pelo navegador e terminal, e erros comuns. O exemplo com formulário é uma adaptação adicional do exercício 1.4; os demais programas PHP existentes usam entrada pelo terminal e têm suas instruções no mesmo guia.

### Testes automáticos para colaboradores

Na raiz do repositório, execute `python3 tests/verificar.py`, com Python 3, GCC e PHP 8.1 ou superior disponíveis no PATH. Os testes compilam C, validam a sintaxe PHP e executam exemplos em pastas temporárias. Execute também `python3 tests/verificar_web.py` para verificar o formulário por requisições HTTP locais.

No Windows, usando PHP do XAMPP, abra PowerShell na raiz do repositório e execute:

```powershell
$env:Path = "C:\xampp\php;" + $env:Path
python tests/verificar.py
python tests/verificar_web.py
```

Python 3 e GCC devem estar instalados para o primeiro comando; XAMPP fornece PHP, não esses dois programas. Para o teste web basta Python 3 e PHP. O teste web inicia e encerra seu próprio servidor PHP local: Apache não precisa estar ligado para os testes automáticos. No Windows, o comando do Python pode ser `py -3` conforme a instalação.

Casos de exemplo ajudam a conferir o comportamento, mas não provam ausência de erros em todas as entradas. Os testes automáticos cobrem os exemplos publicados e o formulário de demonstração; as alternativas dos leitores devem documentar seus próprios testes.
