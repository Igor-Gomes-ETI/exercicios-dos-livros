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
    int alvo;const char *teste=getenv("ALVO_TESTE");if(teste){char *fim;long v=strtol(teste,&fim,10);exigir(*fim==0&&v>=1&&v<=50,"Alvo de teste invalido");alvo=(int)v;}else{srand((unsigned)time(NULL));alvo=1+rand()%50;}int palpite;do{palpite=inteiro();exigir(palpite>=1&&palpite<=50,"Palpite entre 1 e 50");if(palpite<alvo)puts("Maior");else if(palpite>alvo)puts("Menor");}while(palpite!=alvo);puts("Acertou!");
    return 0;
}
