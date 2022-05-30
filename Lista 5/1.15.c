#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
  double areal;
  int bint, produto=1, cont;
  printf("Digite o A(base): \n");
  scanf("%lf", &areal);
  printf("\nDigite o B(expoente): \n");
  scanf("%d", &bint);
  
  for(cont=0;cont!=bint;cont++){
    produto = areal * produto;
    
  }
  printf("Resultado: %d", produto);




  
  return 0;
}