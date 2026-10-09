/* Sua alternativa: alternativas/seu-nick/volume-1/capitulo-16/exercicio-01/
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

int main(void) {
    int op;while(1){puts("1 Soma | 2 Subtracao | 3 Multiplicacao | 4 Divisao | 0 Sair");op=inteiro();if(op==0)break;exigir(op>=1&&op<=4,"Opcao invalida");double a=real(),b=real(),r=0;switch(op){case 1:r=a+b;break;case 2:r=a-b;break;case 3:r=a*b;break;case 4:exigir(b!=0,"Divisao por zero");r=a/b;break;}printf("Resultado: %.2f\n",r);}
    return 0;
}
