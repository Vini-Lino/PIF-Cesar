#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char secreta, letra;
    int tentativas = 0;

    srand(time(NULL));
    secreta = rand() % 26 + 'a';

    do {
        printf("Adivinhe a letra (a-z): ");
        scanf(" %c", &letra);
        tentativas++;

        if (letra < secreta) {
            printf("A letra secreta vem depois no alfabeto.\n");
        } else if (letra > secreta) {
            printf("A letra secreta vem antes no alfabeto.\n");
        } else {
            printf("Parabens! Voce acertou em %d tentativas!\n", tentativas);
        }
    } while (letra != secreta);

    return 0;
}