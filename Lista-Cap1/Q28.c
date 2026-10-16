#include <stdio.h>

int main()
{
    int a, b, c;
    double media;

    printf("Digite tres valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);

    media = (double)(a + b + c) / 3;

    printf("Media aritmetica: %.2f\n", media);

    return 0;
}
