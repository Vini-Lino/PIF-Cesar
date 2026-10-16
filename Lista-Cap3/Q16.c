#include <stdio.h>

int main() {
    int senhaSecreta = 2026;
    int senhaDigitada;
    int tentativas;

    for (tentativas = 1; tentativas <= 3; tentativas++) {
        printf("Digite a senha: ");
        scanf("%d", &senhaDigitada);

        if (senhaDigitada == senhaSecreta) {
            printf("Acesso Concedido!\n");
            printf("Numero de tentativas utilizadas: %d\n", tentativas);
            return 0;
        }
    }

    printf("Conta Bloqueada por Seguranca!\n");

    return 0;
}
