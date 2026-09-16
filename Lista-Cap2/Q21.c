#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    /*
     * O caractere eh armazenado como um valor numerico.
     * Ao usar %d, eh exibido o valor inteiro correspondente
     * ao codigo do caractere na tabela ASCII.
     */
    printf("Caractere: %c\n", caractere);
    printf("Codigo ASCII: %d\n", caractere);

    return 0;
}
