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
static int selection(int *v,int n){int trocas=0;for(int i=0;i<n-1;i++){int m=i;for(int j=i+1;j<n;j++)if(v[j]<v[m])m=j;if(m!=i){int t=v[i];v[i]=v[m];v[m]=t;trocas++;}}return trocas;}

int main(void) {
    int v[10];srand(42);for(int i=0;i<10;i++)v[i]=rand()%100;selection(v,10);for(int i=0;i<10;i++){if(i>0)exigir(v[i-1]<=v[i],"Ordem incorreta");printf("%d ",v[i]);}puts("\nOrdenado");
    return 0;
}
