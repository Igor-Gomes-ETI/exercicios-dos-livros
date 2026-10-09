/* Sua alternativa: alternativas/seu-nick/volume-1/capitulo-19/exercicio-05/
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
static unsigned long long fibRec(int n){return n<2?(unsigned long long)n:fibRec(n-1)+fibRec(n-2);}
static unsigned long long fibIter(int n){unsigned long long a=0,b=1;for(int i=0;i<n;i++){unsigned long long t=a+b;a=b;b=t;}return a;}

int main(void) {
    int n=30;clock_t t=clock();unsigned long long a=fibRec(n);double rec=(double)(clock()-t)/CLOCKS_PER_SEC;t=clock();unsigned long long b=fibIter(n);double it=(double)(clock()-t)/CLOCKS_PER_SEC;exigir(a==b,"Resultados diferentes");printf("Resultado: %llu\nRecursivo: %.6f s\nIterativo: %.6f s\n",a,rec,it);
    return 0;
}
