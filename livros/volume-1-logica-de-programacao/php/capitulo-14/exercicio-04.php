<?php
declare(strict_types=1);
/* Sua alternativa: alternativas/seu-nick/volume-1/capitulo-14/exercicio-04/
 * Crie sua propria pasta com codigo e README; preserve este exemplo.
 * Passo a passo no CONTRIBUTING.md da raiz do repositorio.
 */

// Exemplos de terminal: cada entrada ocupa uma linha.
function linha(): string {
    $s = fgets(STDIN);
    if ($s === false) { throw new RuntimeException('Entrada ausente'); }
    return trim($s);
}
function numero(): float {
    $s = linha();
    if (!is_numeric($s) || !is_finite((float)$s)) { throw new RuntimeException('Numero invalido'); }
    return (float)$s;
}
function inteiro(): int {
    $s = linha();
    $v = filter_var($s, FILTER_VALIDATE_INT);
    if ($v === false) { throw new RuntimeException('Inteiro invalido'); }
    return $v;
}
function exigir(bool $ok, string $mensagem): void {
    if (!$ok) { throw new RuntimeException($mensagem); }
}

$registro=gmdate("Y-m-d H:i:s")." UTC acesso
";$gravados=file_put_contents("acessos.log",$registro,FILE_APPEND|LOCK_EX);exigir($gravados!==false,"Falha ao gravar log");echo "Acesso registrado
";
