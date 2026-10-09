<?php
declare(strict_types=1);
/* Adaptação adicional do exercício 1.4 para navegador e XAMPP.
 * Sua versão: alternativas/seu-nick/volume-1/capitulo-01/exercicio-04/
 * Inclua index.php e README. Consulte CONTRIBUTING.md na raiz.
 * Preserve as resoluções propostas em livros/ ao compartilhar.
 */
function escapar(string $valor): string {
    return htmlspecialchars($valor, ENT_QUOTES | ENT_SUBSTITUTE, 'UTF-8');
}
$a = ''; $b = ''; $erro = ''; $resultado = null;
if (($_SERVER['REQUEST_METHOD'] ?? 'GET') === 'POST') {
    // Formulários podem receber dados manipulados; valide também no servidor.
    $a = is_string($_POST['a'] ?? null) ? trim($_POST['a']) : '';
    $b = is_string($_POST['b'] ?? null) ? trim($_POST['b']) : '';
    if ($a === '' || $b === '' || !is_numeric($a) || !is_numeric($b)) {
        $erro = 'Informe dois números válidos. Use ponto para decimais.';
    } elseif (!is_finite((float)$a) || !is_finite((float)$b)) {
        $erro = 'Os números devem estar dentro do limite representável.';
    } else {
        $soma = (float)$a + (float)$b;
        if (!is_finite($soma)) {
            $erro = 'A soma ultrapassou o limite representável.';
        } else {
            $resultado = number_format($soma, 2, '.', '');
        }
    }
}
?>
<!doctype html>
<html lang="pt-BR">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<title>Soma de dois números — exercícios dos livros</title>
<style>
*{box-sizing:border-box}body{margin:0;background:#f5f7f9;color:#102d50;font:16px/1.6 system-ui,sans-serif}main{max-width:680px;margin:40px auto;padding:28px;background:#fff;border:1px solid #dce3e9;border-radius:12px}h1{line-height:1.2}label{display:block;margin:16px 0 6px;font-weight:600}input{width:100%;padding:12px;border:1px solid #526272;border-radius:5px;font:inherit}button{margin-top:20px;padding:12px 20px;background:#102d50;color:white;border:0;border-radius:5px;font:inherit;cursor:pointer}:focus-visible{outline:3px solid #497cac;outline-offset:3px}.resultado,.erro{padding:14px;border-radius:5px}.resultado{background:#eaf4ed;color:#174827}.erro{background:#fff1ec;color:#822600}small{display:block;margin-top:24px}@media(max-width:720px){main{margin:16px;padding:20px}}
</style>
</head>
<body><main>
<p>Volume 1 · Capítulo 1 · Exercício 4</p>
<h1>Soma de dois números</h1>
<p>Uma resolução proposta adaptada para o navegador. Digite dois números e observe o resultado. Use ponto para decimais, por exemplo 1.5.</p>
<form method="post">
<label for="a">Primeiro número</label>
<input type="number" step="any" id="a" name="a" value="<?= escapar($a) ?>" required>
<label for="b">Segundo número</label>
<input type="number" step="any" id="b" name="b" value="<?= escapar($b) ?>" required>
<button type="submit">Calcular soma</button>
</form>
<?php if ($erro !== ''): ?>
<p class="erro" role="alert"><?= escapar($erro) ?></p>
<?php elseif ($resultado !== null): ?>
<p class="resultado" role="status">Resultado: <strong><?= escapar($resultado) ?></strong></p>
<?php endif; ?>
<small>Esta não é a única forma de resolver. Você pode criar outra abordagem e compartilhá-la para comparação.</small>
<p><a href="https://github.com/Igor-Gomes-ETI/exercicios-dos-livros/blob/main/CONTRIBUTING.md">Compartilhe sua resolução em uma pasta com seu nick</a></p>
</main></body></html>
