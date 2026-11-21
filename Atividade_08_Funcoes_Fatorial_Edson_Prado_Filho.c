#include <stdio.h>

int calcularFatorial(int n) {
int i, fatorial = 1;

for (i = 1; i <= n; i++) {
 fatorial = fatorial * i;
 }
return fatorial;
}

int main() {

int n, resultado;

printf("Digite o valor de N: ");
scanf("%d", &n);

resultado = calcularFatorial(n);

printf("FATORIAL = %d\n", resultado);
}