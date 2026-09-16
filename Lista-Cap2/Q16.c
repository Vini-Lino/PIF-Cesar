#include <stdio.h>

int main() {
    double altura_degrau, altura_total_m, altura_total_cm;
    int quantidade_degraus;

    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%lf", &altura_degrau);

    printf("Digite a altura total desejada (em metros): ");
    scanf("%lf", &altura_total_m);

    // Conversao de metros para centimetros
    altura_total_cm = altura_total_m * 100.0;

    quantidade_degraus = (int)(altura_total_cm / altura_degrau);

    printf("Numero minimo de degraus: %d\n", quantidade_degraus);

    return 0;
}