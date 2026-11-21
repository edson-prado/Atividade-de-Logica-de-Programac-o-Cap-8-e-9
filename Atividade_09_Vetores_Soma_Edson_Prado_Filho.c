#include <stdio.h>

int main()
{
int i, n;
float soma = 0.0, vet[20];

printf("Quantos números você vai digitar? ");
scanf("%d", &n);

 for(i = 0; i<n; i++){
    printf("Digite um número: ");
    scanf("%f", &vet[i]);
    soma = soma + vet[i];
}

printf("\nVALORES = ");
 for(i = 0; i<n; i++){
    printf("%.2f ", vet[i]);
}

float media = soma / n;
printf("\nSOMA = %.2f", soma);

printf("\nMÉDIA = %.2f", media);





}