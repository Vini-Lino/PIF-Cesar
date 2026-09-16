#include <stdio.h>
#include <math.h>

int main() {
    double lado_a, lado_b, hipotenusa;

    printf("Digite o valor do cateto A: ");
    scanf("%lf", &lado_a);

    printf("Digite o valor do cateto B: ");
    scanf("%lf", &lado_b);

    hipotenusa = sqrt(lado_a * lado_a + lado_b * lado_b);

    printf("Hipotenusa: %.2f\n", hipotenusa);

    return 0;
}
