#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  int n = 1;
  int p;
  while(n != 0){
    printf("Digite um numero: (Digite 0 para sair) \n");
    scanf("%d", &n);
    if(p < n){
      p = n;
    }
    
  }
  printf("O maior numero é igual a: \n");
  printf("%d", p);
  







  
  return 0;
}