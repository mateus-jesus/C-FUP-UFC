#include <stdio.h>
#include <stdlib.h>

int main(){

  int matriz[3][5];
  int soma[3] = {0,0,0};

  for(int i=0; i<3; i++){
    printf("\n-------------------------");
    printf("\nColuna %d", i+1);
    for(int c=0; c<5; c++){
      printf("\nDigite o %d: ", c+1);
      scanf("%d", &matriz[i][c]);

        }
      }
      for(int x=0; x<3; x++){
        for(int y=0; y<5; y++){
          soma[x] = soma[x] + matriz[x][y];
        }
      }
      printf("\nMATRIZ");
      printf("\n---------------------");
      for(int x=0; x<3; x++){
        printf("\n");
        for(int y=0; y<5; y++){
          printf("[%d] ", matriz[x][y]);
        }
      }
      for(int cc=0; cc<3; cc++){
        printf("\nA soma da linha %d e igual a: %d", cc, soma[cc]);
      }


    return 0;
    }
