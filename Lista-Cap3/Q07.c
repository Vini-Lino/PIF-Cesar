#include <stdio.h>

int main()
{
    int i;

    // Versão 1: utilizando for
    for (i = 0; i <= 100; i++) {
        printf("%d\n", i);
    }

    // Versão 2: utilizando while
    i = 0;
    while (i <= 100) {
        printf("%d\n", i);
        i++;
    }

    // Versão 3: utilizando do-while
    i = 0;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 100);

    return 0;
}

/*
Comentário:
A estrutura for é a mais adequada para este caso, pois a contagem
possui um valor inicial, uma condição de parada e um incremento
bem definidos. Essas três expressões ficam reunidas no cabeçalho
do laço, tornando o código mais organizado e legível.
*/ 
