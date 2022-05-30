#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  int n = 1;
  int p = 1;
  while(n != 0){
    printf("Digite um numero:(Digite 0 para sair) \n");
    scanf("%d", &n);
    if(n != 0){
      p = (n * p); 
      printf("A soma dos produtos atuais é igual a: %d\n", p);
      }
    else{
      printf("\nsaindo..");
      }
    }
  printf("\nO valor total da soma dos produtos é igual a: %d", p);
  






  
    return 0;
}