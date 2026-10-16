#include <stdio.h>

int main() {
    int opcao;
    float salario, novoSalario, imposto;

    do {
        printf("\n--- MENU FOLHA DE PAGAMENTO ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 2000) {
                    novoSalario = salario * 1.15;
                } else {
                    novoSalario = salario * 1.10;
                }

                printf("Novo salario: R$ %.2f\n", novoSalario);
                break;

            case 2:
                printf("Digite o salario: R$ ");
                scanf("%f", &salario);

                if (salario <= 3000) {
                    imposto = salario * 0.08;
                } else {
                    imposto = salario * 0.15;
                }

                printf("Imposto retido: R$ %.2f\n", imposto);
                printf("Salario apos desconto: R$ %.2f\n", salario - imposto);
                break;

            case 3:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 3);

    return 0;
}