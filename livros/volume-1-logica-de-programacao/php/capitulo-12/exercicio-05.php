<?php
declare(strict_types=1);
/* Sua alternativa: alternativas/seu-nick/volume-1/capitulo-12/exercicio-05/
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

$dados=[9,2,7,2,-1];$pronto=$dados;sort($pronto,SORT_NUMERIC);$manual=$dados;for($i=1;$i<count($manual);$i++){$valor=$manual[$i];$j=$i-1;while($j>=0 && $manual[$j]>$valor){$manual[$j+1]=$manual[$j];$j--;}$manual[$j+1]=$valor;}exigir($manual===$pronto,"Resultados diferentes");echo implode(" ",$manual)."
";
