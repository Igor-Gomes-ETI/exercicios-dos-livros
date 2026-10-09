"""Compila e executa os exemplos; cada execução usa uma pasta temporária."""
import argparse,json,os,re,shutil,subprocess,tempfile
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
p=argparse.ArgumentParser();p.add_argument('--somente-c',action='store_true');args=p.parse_args()
cases=json.loads((ROOT/'tests/casos.json').read_text());count=0
assert len(list((ROOT/'livros/volume-1-logica-de-programacao/capitulos').glob('*.md')))==21
for case in cases:
 if args.somente_c and case['language']=='php':continue
 src=ROOT/case['path']
 with tempfile.TemporaryDirectory() as d:
  work=Path(d);(work/'pessoas.txt').write_text('Ana\nBia\n')
  if case['language']=='c':
   cmd=[str(work/'exemplo')]
   result=subprocess.run(['gcc','-std=c11','-Wall','-Wextra','-pedantic',str(src),'-lm','-o',cmd[0]],capture_output=True,text=True)
   assert result.returncode==0,(str(src),result.stderr)
  else:
   result=subprocess.run(['php','-l',str(src)],capture_output=True,text=True)
   assert result.returncode==0,(str(src),result.stderr)
   cmd=['php',str(src)]
  env=dict(os.environ,ALVO_TESTE='25')
  result=subprocess.run(cmd,input=case['input'],capture_output=True,text=True,cwd=work,env=env,timeout=10)
  assert result.returncode==0,(case['path'],result.stderr,result.stdout)
  assert case['expected'] in result.stdout,(case['path'],case['expected'],result.stdout)
  if 'php/capitulo-18/exercicio-03' in case['path']:
   assert re.fullmatch(r'[A-Za-z0-9]{12}\n',result.stdout),result.stdout
  if 'capitulo-14/exercicio-04' in case['path']:
   assert (work/'acessos.log').stat().st_size>0
  if 'php/capitulo-18/exercicio-05' in case['path']:
   assert isinstance(json.loads((work/'tarefas.json').read_text()),list)
  count+=1
print(f'{count} programas compilados/validados e executados com sucesso.')
