#include <stdio.h>

int main() {
    double nota1, nota2, nota3, nota4;
    double media_simples, media_ponderada;

    printf("Digite a nota da prova 1: ");
    scanf("%lf", &nota1);

    printf("Digite a nota da prova 2: ");
    scanf("%lf", &nota2);

    printf("Digite a nota da prova 3: ");
    scanf("%lf", &nota3);

    printf("Digite a nota da prova 4: ");
    scanf("%lf", &nota4);

    media_simples = (nota1 + nota2 + nota3 + nota4) / 4.0;
    media_ponderada = (nota1 * 1.0 + nota2 * 1.0 + nota3 * 2.0 + nota4 * 2.0) / 6.0;

    printf("Media aritmetica: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n", media_ponderada);

    return 0;
}