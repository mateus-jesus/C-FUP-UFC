#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
  float x, sen_x[18], aux, resultado;
  scanf("%f", &x);
  x*=0.0174533;
  resultado = x;
  for(int i=1; i<=15; i++){
    aux=1;
    for (int j=(2*i)+1; j>0; j--){
      aux*=j;      
    }
    if (i%2==0){
      sen_x[i] = (pow(x, (2*i)+1))/aux;
    }else{
      sen_x[i] = -1*((pow(x, (2*i)+1))/aux);
    }
    resultado+=sen_x[i];
  }
  printf("%f", resultado);
  return 0;
}