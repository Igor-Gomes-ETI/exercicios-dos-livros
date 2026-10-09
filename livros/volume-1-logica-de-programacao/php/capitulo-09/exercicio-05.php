<?php
declare(strict_types=1);
/* Sua alternativa: alternativas/seu-nick/volume-1/capitulo-09/exercicio-05/
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

$m=[[1,2,3],[4,5,6],[7,8,9]];echo "<table><caption>Matriz 3 x 3</caption>
";foreach($m as $linha){echo "<tr>";foreach($linha as $v){echo "<td>".htmlspecialchars((string)$v,ENT_QUOTES,"UTF-8")."</td>";}echo "</tr>
";}echo "</table>
";
