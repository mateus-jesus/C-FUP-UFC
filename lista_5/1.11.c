#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int liminf=0, limsup=0,soma=0;
  printf("Digite o limite inferior: \n");
  scanf("%d", &liminf);
  printf("Digite o limite superior: \n");
  scanf("%d", &limsup);
  printf("Numeros pares nesse intervalo.... são:\n");
  while(liminf < limsup){
    if(liminf % 2 ==0){
      printf("%d\n", liminf);
      soma += liminf;
      liminf++;
      
      }
    else{
      liminf = liminf + 1;
    }
    

  }
  printf("A soma fechada é igual a: %d", soma);
  return 0;
}