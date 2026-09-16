#include <stdio.h>

int main() {
    char maiuscula, minuscula;

    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &maiuscula);

    /*
     * Na tabela ASCII, as letras minusculas estao
     * 32 posicoes depois das respectivas maiusculas.
     */
    minuscula = maiuscula + 32;

    printf("Letra minuscula: %c\n", minuscula);

    return 0;
}
