#include <stdio.h>
#include <math.h>  //importando a biblioteca math

// Funções para cálculo do valor futuro e valor presente
double calcular_valor_futuro(double valor_presente, double taxa_juros, int periodos) {
    return valor_presente * pow(1 + taxa_juros, periodos);

}
double calcular_valor_presente(double valor_futuro, double taxa_juros, int periodos) {
    return valor_futuro / pow(1 + taxa_juros, periodos);

}
int main() {
    // Variáveis para cada problema
    double vp1, taxa1, vf1; // Problema 1
    double vp2, taxa2, vf2; // Problema 2
    double vf3, taxa3, vp3; // Problema 3
    double vf4, taxa4, vp4; // Problema 4
    int n1, n2, n3, n4;

    // Problema 1
    vp1 = 1200.0;
    taxa1 = 0.09;
    n1 = 10;
    vf1 = round(calcular_valor_futuro(vp1, taxa1, n1) * 100) / 100.0;
    printf("Joana Fulana terá ao final de %d anos: $%.2lf\n", n1, vf1);

    // Problema 2
    vp2 = 2000.0;
    taxa2 = 0.10;
    n2 = 8;
    vf2 = round(calcular_valor_futuro(vp2, taxa2, n2) * 100) / 100.0;
    printf("Joana Ciclana terá ao final de %d anos: $%.2lf\n", n2, vf2);

    // Problema 3
    vf3 = 12000.0;
    taxa3 = 0.09;
    n3 = 10;
    vp3 = round(calcular_valor_presente(vf3, taxa3, n3) * 100) / 100.0;
    printf("João Fulano precisa depositar aproximadamente: $%.2lf\n", vp3);

    // Problema 4
    vf4 = 14000.0;
    taxa4 = 0.10;
    n4 = 12;
    vp4 = round(calcular_valor_presente(vf4, taxa4, n4) * 100) / 100.0;
    printf("João Ciclana precisa depositar aproximadamente: $%.2lf\n", vp4);

    return 0;
}
