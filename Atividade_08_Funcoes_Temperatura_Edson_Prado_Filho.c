#include <stdio.h>

double fahrenheitParaCelsius(double f) {
    return (5.0 / 9.0) * (f - 32.0);
}

int main() {
    
double f, c;

printf("Digite a temperatura em Fahrenheit: ");
scanf("%lf", &f);

c = fahrenheitParaCelsius(f);

printf("Temperatura equivalente em Celsius: %.2lf\n", c);
}