#include <stdio.h>

int main()
{
    int NUM, i;
    int encontrou = 0;

    printf("Digite um numero limite inteiro positivo: ");
    scanf("%d", &NUM);

    if (NUM <= 0) {
        printf("Erro: o limite deve ser um numero positivo.\n");
        return 0;
    }

    for (i = 1; i <= NUM; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (encontrou == 0) {
        printf("Nenhum numero atende a condicao.");
    }

    printf("\n");

    return 0;
}
