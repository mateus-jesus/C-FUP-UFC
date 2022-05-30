#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int n = 1, c = 0, s= 0;
  double product;
  
  while(n != 0){
    printf("Digite um numeros:(0 para sair!)\n");
    scanf("%d", &n);
    c++;
    s = n + s;
    


    
  }
  printf("O total da média é: \n");
  printf("%d", (s/(c-1)));
  printf("\nCom um total de %d numeros digitados", (c-1));
  printf("\nE uma soma aritimetica de %d", s);








  
  return 0;
}