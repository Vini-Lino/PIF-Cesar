#include <stdio.h>

int main()
{
    double celsius, fahrenheit, kelvin;

    printf("Celsius\t\tFahrenheit\tKelvin\n");
    printf("---------------------------------------------\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;

        printf("%.2f\t\t%.2f\t\t%.2f\n",
               celsius, fahrenheit, kelvin);
    }

    return 0;
}
