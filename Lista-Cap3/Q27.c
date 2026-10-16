#include <stdio.h>

int main() {
    int valor, cedulas;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &valor);

    if (valor <= 0 || valor % 2 != 0) {
        printf("Valor invalido! Digite um valor positivo e compativel com as cedulas.\n");
        return 0;
    }

    int notas[] = {100, 50, 20, 10, 5, 2};
    int i;

    for (i = 0; i < 6; i++) {
        cedulas = 0;

        while (valor >= notas[i]) {
            valor -= notas[i];
            cedulas++;
        }

        if (cedulas > 0) {
            printf("%d cedula(s) de R$ %d\n", cedulas, notas[i]);
        }
    }

    return 0;
}