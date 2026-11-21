#include <stdio.h>

int main() {

int n, i;
char nome[50];
float compra, venda, lucro, percentual;
float somaCompra = 0, somaVenda = 0, lucroTotal;
int abaixo10 = 0, entre10e20 = 0, acima20 = 0;

printf("Serao digitados dados de quantos produtos? ");
scanf("%d", &n);

 for (i = 0; i < n; i++) {
printf("Produto %d:\n", i + 1);
printf("Nome: ");
scanf("%s", nome);
printf("Preco de compra: ");
scanf("%f", &compra);
printf("Preco de venda: ");
scanf("%f", &venda);

somaCompra = somaCompra + compra;
somaVenda = somaVenda + venda;

lucro = venda - compra;
percentual = (lucro * 100) / compra;

if (percentual < 10) {
  abaixo10++;
 } else if (percentual <= 20) {
  entre10e20++;
 } else {
  acima20++;
 }
}

lucroTotal = somaVenda - somaCompra;

printf("\nRELATORIO:\n");
printf("Lucro abaixo de 10%%: %d\n", abaixo10);
printf("Lucro entre 10%% e 20%%: %d\n", entre10e20);
printf("Lucro acima de 20%%: %d\n", acima20);
printf("Valor total de compra: %.2f\n", somaCompra);
printf("Valor total de venda: %.2f\n", somaVenda);
printf("Lucro total: %.2f\n", lucroTotal);
}