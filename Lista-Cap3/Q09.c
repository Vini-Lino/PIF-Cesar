#include <stdio.h>

int main()
{
    float valor, soma = 0.0, media;
    int quantidade = 0;

    printf("Digite valores positivos (negativo para parar):\n");
    scanf("%f", &valor);

    while (valor >= 0.0) {
        soma += valor;
        quantidade++;

        scanf("%f", &valor);
    }

    printf("Quantidade de valores: %d\n", quantidade);
    printf("Soma total: %.2f\n", soma);

    if (quantidade > 0) {
        media = soma / quantidade;
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("Nao foi digitado nenhum valor valido.\n");
    }

    return 0;
}
