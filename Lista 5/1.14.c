#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
  double areal;
  int bint, produto, cont;
  printf("Digite o A(real): \n");
  scanf("%lf", &areal);
  printf("\nDigite o B(inteiro): \n");
  scanf("%d", &bint);

 for(cont = 0;cont !=areal; cont++ ){
   produto = produto + bint;
 }
  printf("O resultado é igual a: %d", produto);
  






  
  return 0;
}