#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
  int n,ze=0,gil=0,gal=0;
  printf("Vote: Ze=1 Gal =2 Gil = 3\n");
  while(n!= 0){
    scanf("%d", &n);
    if(n==1){
      ze++;
    }
    if (n==2){
      gal++;
    }
    if(n==3){
      gil++;
    }
  }
  printf("pontos:\nZe:%d\nGal:%d\nGil:%d\n", ze,gal,gil);
  printf("----------------\n");
  if (ze > gal && ze > gil ){
    printf("O vencedor foi: Zé");
  }
  if (gal > ze && gal > gil ){
    printf("O vencedor foi: Gal");
  }
  if (gil > gal && gil > ze ){
    printf("O vencedor foi: Gil");
  }
  
  return 0;
}