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
    int v[]={2,4,6,8,10,12,14,16,18,20},alvo=inteiro(),cont=0;printf("Indice: %d\n",linear(v,10,alvo,&cont));
    return 0;
}
