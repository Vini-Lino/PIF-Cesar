#include <stdio.h>

int main() {
    int senhaSecreta = 2026, senhaDigitada;
    int tentativas = 0;

    while (tentativas < 3) {
        printf("Digite a senha: ");
        scanf("%d", &senhaDigitada);
        tentativas++;

        if (senhaDigitada == senhaSecreta) {
            printf("Acesso Concedido!\n");
            return 0;
        }
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}