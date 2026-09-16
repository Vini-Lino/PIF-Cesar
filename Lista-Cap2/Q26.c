#include <stdio.h>

int main() {
    double comprimento, largura;
    double preco_metro;
    double perimetro, metros_arame, custo_total;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%lf", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%lf", &largura);

    printf("Digite o preco por metro de arame (em reais): R$ ");
    scanf("%lf", &preco_metro);

    perimetro = 2.0 * (comprimento + largura);
    metros_arame = 3.0 * perimetro;
    custo_total = metros_arame * preco_metro;

    printf("Quantidade de arame: %.2f metros\n", metros_arame);
    printf("Custo total: R$ %.2f\n", custo_total);

    return 0;
}
