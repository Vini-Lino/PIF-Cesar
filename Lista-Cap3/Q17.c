#include <stdio.h>

int main() {
    float nota, maior, menor, soma = 0, media;
    int total = 0;

    printf("Digite uma nota (-1 para encerrar): ");
    scanf("%f", &nota);

    while (nota != -1.0) {
        if (total == 0) {
            maior = nota;
            menor = nota;
        } else {
            if (nota > maior) {
                maior = nota;
            }
            if (nota < menor) {
                menor = nota;
            }
        }

        soma += nota;
        total++;

        printf("Digite uma nota (-1 para encerrar): ");
        scanf("%f", &nota);
    }

    if (total > 0) {
        media = soma / total;

        printf("\nTotal de alunos avaliados: %d\n", total);
        printf("Maior nota: %.2f\n", maior);
        printf("Menor nota: %.2f\n", menor);
        printf("Media geral: %.2f\n", media);
    } else {
        printf("Nenhuma nota foi informada.\n");
    }

    return 0;
}