#include <stdio.h>
#include <string.h>

int main() {

int n, i, menores16 = 0;

printf("Quantas pessoas serao digitadas? ");
scanf("%d", &n);

char nomes[n][50];
int idades[n];
double alturas[n], somaAlturas = 0.0;

  for (i = 0; i < n; i++) {
  printf("Dados da %da pessoa:\n", i + 1);
  printf("Nome: ");
  scanf("%s", nomes[i]);
  printf("Idade: ");
  scanf("%d", &idades[i]);
  printf("Altura: ");
  scanf("%lf", &alturas[i]);

somaAlturas += alturas[i];
  if (idades[i] < 16) {
  menores16++;
 }
}

double mediaAltura = somaAlturas / n;
double percentual = ((double)menores16 / n) * 100.0;

printf("\nAltura media: %.2lf\n", mediaAltura);
printf("Pessoas com menos de 16 anos: %.1lf%%\n", percentual);

  for (i = 0; i < n; i++) {
  if (idades[i] < 16) {
  printf("%s\n", nomes[i]);
  }
 }
}

