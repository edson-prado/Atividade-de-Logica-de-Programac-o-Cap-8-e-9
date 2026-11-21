#include <stdio.h>

float areaCirculo(float raio) {
  return 3.14159 * raio * raio;
}

float areaRetangulo(float base, float altura) {
  return base * altura;
}

float areaTriangulo(float base, float altura) {
  return (base * altura) / 2.0;
}

int main() {

int opcao;
float raio, base, altura, area;

printf("--- CALCULADORA GEOMETRICA ---\n");
printf("1 - Circulo\n");
printf("2 - Retangulo\n");
printf("3 - Triangulo\n");
printf("Escolha uma opcao: ");
scanf("%d", &opcao);

 if (opcao == 1) {
printf("\nDigite o raio: ");
scanf("%f", &raio);
area = areaCirculo(raio);
printf("AREA DO CIRCULO = %.2f\n", area);}

  else if (opcao == 2) {
printf("\nDigite a base: ");
scanf("%f", &base);
printf("Digite a altura: ");
scanf("%f", &altura);

area = areaRetangulo(base, altura);
printf("AREA DO RETANGULO = %.2f\n", area);}
  
  else if (opcao == 3) {
printf("\nDigite a base: ");
scanf("%f", &base);
printf("Digite a altura: ");
scanf("%f", &altura);

area = areaTriangulo(base, altura);
printf("AREA DO TRIANGULO = %.2f\n", area);} 
  
  else {
printf("\nOpcao invalida!\n");
 }
}