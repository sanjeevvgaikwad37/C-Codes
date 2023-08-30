#include <stdio.h>

int main() {
    int startFahrenheit = 0;
    int endFahrenheit = 100;
    int stepSize = 10;

    printf("Fahrenheit to Celsius Conversion Table\n");
    printf("-------------------------------------\n");
    printf("Fahrenheit\tCelsius\n");
    printf("-------------------------------------\n");

    for (int fahrenheit = startFahrenheit; fahrenheit <= endFahrenheit; fahrenheit += stepSize) {
        double celsius = (fahrenheit - 32) * 5.0 / 9.0;
        printf("%d\t\t%.2f\n", fahrenheit, celsius);
    }

    return 0;
}
