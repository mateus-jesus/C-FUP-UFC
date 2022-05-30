#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

  int erros=1,semanas;
  for(semanas= 1; semanas != 13; semanas++){
    printf("%d\n", (erros = erros * 2)); 

  
  }
  printf("%d", erros);
  return 0;
}