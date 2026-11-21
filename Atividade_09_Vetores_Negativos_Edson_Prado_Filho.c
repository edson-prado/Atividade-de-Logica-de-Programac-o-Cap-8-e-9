#include <stdio.h>

int main()
{
int n, i; 
int vet[10];

printf("Quantos números você vai digitar? ");
scanf("%d", &n);

 for(i = 0; i<n; i++){
    printf("Digite um número: ");
    scanf("%d", &vet[i]);
}

printf("NÚMEROS NEGATIVOS: \n"); 
  for(i = 0;i<n; i++){
  if(vet[i]<0){
    printf("%d\n", vet[i]);
  }
  }


}