#include <stdio.h>

int main() {
    int n, i, j, numero = 1;

    printf("Digite o numero de linhas: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
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