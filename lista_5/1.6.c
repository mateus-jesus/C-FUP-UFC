#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

  int n,fat;
  printf("Digite um numero: \n");
  scanf("%d", &n);
  printf("----------\n");
  
  for(fat =1; n > 1; n = n -1){
    fat = fat * n;
  }
  printf("%d", fat);
    
  





  
  return 0;
}