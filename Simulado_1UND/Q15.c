#include <stdio.h>

int main() {
    int N, i, j, numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Numero invalido!\n");
        return 0;
    }

    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d", numero);

            if (j < i) {
                printf(" ");
            }

            numero++;
        }

        printf("\n");
    }

    return 0;
}