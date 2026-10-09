/* Sua alternativa: alternativas/seu-nick/volume-1/capitulo-15/exercicio-03/
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
    char nome[100];texto(nome,sizeof nome);double a=real(),b=real(),c=real();exigir(a>=0&&a<=10&&b>=0&&b<=10&&c>=0&&c<=10,"Nota invalida");double m=(a+b+c)/3;printf("%s: %.2f - %s\n",nome,m,m>=6?"Aprovado":"Reprovado");
    return 0;
}
