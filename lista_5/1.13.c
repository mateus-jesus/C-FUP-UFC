#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n = 1,par=0,impar=0;
  printf("-------------\n");
  while(n!=0){
    printf("digite um numero: \n");
    scanf("%d", &n);
    if(n % 2 == 0 && n != 0){
      par++;
    }
    if(n % 2 != 0 && n != 0){
      impar++;
    }
  }
  printf("\n-------------\n");
  printf("Pares: %d\n", par);
  printf("Impares: %d\n", impar);
  return 0;
}