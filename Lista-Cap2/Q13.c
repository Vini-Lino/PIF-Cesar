#include <stdio.h>

int main(){
    double L, B, H;
    double area_quadrado, area_retangulo, area_triangulo;

    printf("Digite o lado do quadrado: ");
    scanf("%lf", &L);

    printf("Digite a base do quadrado: ");
    scanf("%lf", &B);

    printf("Digite a altura do quadrado: ");
    scanf("%lf", &H);

    area_quadrado = L * L;
    area_retangulo = B * H;
    area_triangulo = (B * H) / 2.0;

    printf("Area do quadrado: %.2f\n", area_quadrado);
    printf("Area do retangulo: %.2f\n", area_retangulo);
    printf("Area do triangulo retangulo: %.2f\n", area_triangulo);

    return 0;
}