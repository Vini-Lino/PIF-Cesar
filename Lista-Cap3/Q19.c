#include <stdio.h>

int main() {
    int n, i, a = 1, b = 1, proximo;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Digite um valor positivo.\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", a);

        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\nO %d-esimo termo e: %d\n", n, a == 1 && n == 1 ? 1 : a == 1 ? 1 : a);

    return 0;
}