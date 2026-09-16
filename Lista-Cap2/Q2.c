#include <stdio.h>

int main() {
    int c;

    do {
        c = getchar();
    } while (c == '\n');

    printf("Caractere lido: %c\n", c);

    return 0;
}