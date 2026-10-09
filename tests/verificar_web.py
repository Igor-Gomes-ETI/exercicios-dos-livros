"""Verifica o formulário com PHP e HTTP locais, sem depender de Apache."""
import socket,subprocess,time,urllib.request,urllib.parse
from pathlib import Path
ROOT=Path(__file__).resolve().parents[1]
WEB=ROOT/'livros/volume-1-logica-de-programacao/php/navegador'
subprocess.run(['php','-l',str(WEB/'index.php')],check=True)
with socket.socket() as sock:
    sock.bind(('127.0.0.1',0));port=sock.getsockname()[1]
url=f'http://127.0.0.1:{port}/'
server=subprocess.Popen(['php','-S',f'127.0.0.1:{port}','-t',str(WEB)],stdout=subprocess.DEVNULL,stderr=subprocess.DEVNULL)
def request(data=None):
    payload=None if data is None else urllib.parse.urlencode(data).encode()
    with urllib.request.urlopen(url,data=payload,timeout=3) as r:
        assert r.status==200
        return r.read().decode()
try:
    for attempt in range(50):
        try:
            page=request();break
        except (OSError,urllib.error.URLError):
            if server.poll() is not None:raise RuntimeError('Servidor PHP terminou antes do teste')
            time.sleep(0.1)
    else:raise RuntimeError('Servidor PHP não iniciou')
    assert '<form method="post">' in page and 'Resultado:' not in page
    for data,expected in [({'a':'2','b':'3'},'5.00'),({'a':'-2','b':'3'},'1.00'),({'a':'1.5','b':'2.5'},'4.00'),({'a':'0','b':'0'},'0.00')]:
        page=request(data);assert f'<strong>{expected}</strong>' in page,(data,page)
    for data in [{'a':'','b':'2'},{'a':'abc','b':'2'},{'a[]':'2','b':'3'},{'a':'1e309','b':'2'},{'a':'1e308','b':'1e308'}]:
        page=request(data);assert 'role="alert"' in page and 'Resultado:' not in page,data
    page=request({'a':'\"><script>alert(1)</script>','b':'2'})
    assert '<script>' not in page and '&lt;script&gt;' in page
    print('Formulário PHP: GET, somas, entradas inválidas, limites e escape HTML conferidos.')
finally:
    server.terminate()
    try:server.wait(timeout=5)
    except subprocess.TimeoutExpired:server.kill();server.wait()
