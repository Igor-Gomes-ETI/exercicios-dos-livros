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

$arquivo="tarefas.json";$tarefas=[];if(is_file($arquivo)){$lido=file_get_contents($arquivo);exigir($lido!==false,"Falha ao ler");$tarefas=json_decode($lido,true,512,JSON_THROW_ON_ERROR);exigir(is_array($tarefas)&&array_is_list($tarefas),"Arquivo invalido");foreach($tarefas as $t){exigir(is_string($t),"Tarefa invalida");}}while(true){$op=inteiro();if($op===0){break;}if($op===1){$t=linha();exigir($t!=="","Tarefa vazia");$tarefas[]=$t;}elseif($op===2){foreach($tarefas as $i=>$t){echo "$i: $t
";}continue;}elseif($op===3){$i=inteiro();exigir(isset($tarefas[$i]),"Indice invalido");array_splice($tarefas,$i,1);}else{throw new RuntimeException("Opcao invalida");}$json=json_encode($tarefas,JSON_PRETTY_PRINT|JSON_UNESCAPED_UNICODE|JSON_THROW_ON_ERROR);exigir(file_put_contents($arquivo,$json,LOCK_EX)!==false,"Falha ao gravar");}
