#include <stdio.h>

int main() {
    int A, B, i, j, divisores, soma = 0;

    printf("Digite dois numeros inteiros positivos (A < B): ");
    scanf("%d %d", &A, &B);

    if (A <= 0 || B <= 0 || A >= B) {
        printf("Valores invalidos!\n");
        return 0;
    }

    printf("Numeros primos no intervalo: ");

    for (i = A; i <= B; i++) {
        divisores = 0;

        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisores++;
            }
        }

        if (i > 1 && divisores == 2) {
            printf("%d ", i);
            soma += i;
        }
    }

    printf("\nSoma dos primos: %d\n", soma);

    return 0;
}