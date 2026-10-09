/* Sua alternativa: alternativas/seu-nick/volume-1/capitulo-13/exercicio-05/
 * Crie sua propria pasta com codigo e README; preserve este exemplo.
 * Passo a passo no CONTRIBUTING.md da raiz do repositorio.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <time.h>

/* Leitura por linha: rejeita valores malformados e permite nomes com espaços. */
static double real(void) {
    char s[256], extra; double v;
    if (!fgets(s, sizeof s, stdin) || sscanf(s, " %lf %c", &v, &extra) != 1 || !isfinite(v)) {
        fputs("Entrada invalida\n", stderr); exit(1);
    }
    return v;
}
static int inteiro(void) {
    double v = real();
    if (v < INT_MIN || v > INT_MAX || trunc(v) != v) {
        fputs("Inteiro invalido\n", stderr); exit(1);
    }
    return (int)v;
}
static void texto(char *s, size_t n) {
    if (!fgets(s, (int)n, stdin)) { fputs("Texto ausente\n", stderr); exit(1); }
    if (!strchr(s, '\n') && !feof(stdin)) { fputs("Texto longo demais\n", stderr); exit(1); }
    s[strcspn(s, "\r\n")] = 0;
}
static void exigir(int ok, const char *msg) {
    if (!ok) { fprintf(stderr, "%s\n", msg); exit(1); }
}
static int linear(const int *v,int n,int alvo,int *comparacoes){for(int i=0;i<n;i++){(*comparacoes)++;if(v[i]==alvo)return i;}return -1;}
static int binaria(const int *v,int n,int alvo,int *comparacoes){int ini=0,fim=n-1;while(ini<=fim){int meio=ini+(fim-ini)/2;(*comparacoes)++;if(v[meio]==alvo)return meio;if(v[meio]<alvo)ini=meio+1;else fim=meio-1;}return -1;}

int main(void) {
    int tamanhos[]={10,100,1000};for(int k=0;k<3;k++){int n=tamanhos[k],*v=malloc((size_t)n*sizeof *v);exigir(v!=NULL,"Sem memoria");for(int i=0;i<n;i++)v[i]=i;int a=0,b=0;linear(v,n,n,&a);binaria(v,n,n,&b);printf("n=%d linear=%d binaria=%d\n",n,a,b);free(v);}
    return 0;
}
