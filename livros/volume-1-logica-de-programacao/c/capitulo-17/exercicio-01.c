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

int main(void) {
    long long estoque=0;while(1){puts("1 Entrada | 2 Saida | 0 Encerrar");int op=inteiro();if(op==0)break;exigir(op==1||op==2,"Opcao invalida");int qtd=inteiro();exigir(qtd>0,"Quantidade invalida");if(op==1){exigir(estoque<=LLONG_MAX-qtd,"Estoque fora do limite");estoque+=qtd;}else if(qtd<=estoque)estoque-=qtd;else puts("Estoque insuficiente");printf("Estoque: %lld\n",estoque);}
    return 0;
}
