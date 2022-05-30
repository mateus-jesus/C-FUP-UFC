#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    double n =0;
    int p= 0;

  printf("Digite a potencia desejada: \n");
  scanf("%d", &p);
  printf("\nGerando as potencias...\n");
  for(n = 0; n < p; n++){
      printf("%.0f\n", pow(2,n));



  }
    return 0;
}