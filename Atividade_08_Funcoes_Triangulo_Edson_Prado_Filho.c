#include <stdio.h>

int eTrianguloValido(float a, float b, float c) {
 if (a + b > c && a + c > b && b + c > a) {
    return 1; // Verdadeiro
 }
 else {
    return 0; // Falso
 }
}

void classificarTriangulo(float a, float b, float c) {
 if (a == b && b == c) {
printf("EQUILATERO\n");
 } else if (a == b || a == c || b == c) {
printf("ISOSCELES\n");
 } else {
printf("ESCALENO\n");
 }
}

int main() {

float a, b, c;

printf("Digite o primeiro lado: ");
scanf("%f", &a);
printf("Digite o segundo lado: ");
scanf("%f", &b);
printf("Digite o terceiro lado: ");
scanf("%f", &c);

 if (eTrianguloValido(a, b, c)) {
classificarTriangulo(a, b, c);
 } else {
printf("NAO FORMA UM TRIANGULO\n");
 }
}