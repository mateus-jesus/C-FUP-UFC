#include <stdio.h>
#include <stdlib.h>

int main(){

  int matriz[4][4];
  int ds[4];

  for(int i=0; i<4; i++){
    printf("\n-------------------------");
    printf("\nColuna %d", i+1);
    for(int c=0; c<4; c++){
      printf("\nDigite o %d: ", c+1);
      scanf("%d", &matriz[i][c]);
      if(i==0 && c==3 || i==1 && c==2 || i==2 && c==1 || i==3 && c==0){
        ds[i] = matriz[i][c];
      }

        }
      }
      printf("\n---------------------");
      printf("\nA diagonal secundaria consiste dos valores: \n");
      for(int y=0; y<4; y++){
        printf("[%d] ", ds[y]);
      }
      printf("\n---------------------");


      return 0;
      }
