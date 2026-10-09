<?php
declare(strict_types=1);
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

$op=inteiro();if($op===1){$n=inteiro();exigir($n>=0&&$n<=20,"Use 0 a 20");$r=1.0;for($i=2;$i<=$n;$i++){$r*=$i;}}elseif($op===2){$base=numero();$exp=numero();exigir(!($base==0.0&&$exp<0),"Potencia invalida");$r=pow($base,$exp);}elseif($op===3){$n=numero();exigir($n>=0,"Raiz negativa");$r=sqrt($n);}else{throw new RuntimeException("Opcao invalida");}exigir(is_finite($r),"Resultado fora do limite");printf("Resultado: %g
",$r);
