#include <stdio.h>

int main() {
    int num1, num2;
    double divisao;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Soma: %d\n", num1 + num2);
    printf("Subtracao: %d\n", num1 - num2);
    printf("Multiplicacao: %d\n", num1 * num2);

    // Para evitar matematicamente a divisao por zero, o denominador (num2) deve ser diferente de zero.
    if (num2 != 0) {
        divisao = (double)num1 / num2;
        printf("Divisao: %.2f\n", divisao);
    } else {
        printf("Divisao: Nao eh possivel dividir por zero.\n");
    }

    return 0;
}