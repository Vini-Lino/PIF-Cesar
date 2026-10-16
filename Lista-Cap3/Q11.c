#include <stdio.h>

int main()
{
    int A, B, i;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &A, &B);

    if (A <= B) {
        for (i = A; i <= B; i++) {
            printf("%d ", i);
        }
    } else {
        for (i = A; i >= B; i--) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
