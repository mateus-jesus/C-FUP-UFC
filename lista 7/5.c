#include <stdio.h>
#include <stdlib.h>

int main(){

  int matriz[4][4];
  int nova_matriz[4][3];
  int repetido=0;

  for(int i=0; i<4; i++){
    printf("\n-------------------------");
    printf("\nColuna %d", i+1);
    for(int c=0; c<4; c++){
      printf("\nDigite o %d: ", c+1);
      scanf("%d", &matriz[i][c]);

        }
      }
      for(int x=0; x<4; x++){
        printf("\n");
        repetido = 0;
        for(int y=0; y<4; y++){
          if(x!=1 && y!=4 || x!=2 && y!=3 || x!=3 && y!=2 || x!=4 && y!=1 ){
            nova_matriz[x][y-repetido] = matriz[x][y];
          }
          else{
            repetido++;
          }
        }
      }
      printf("\nMATRIZ SEM ALTERACAO");
      printf("\n---------------------");
      for(int x=0; x<4; x++){
        printf("\n");
        for(int y=0; y<4; y++){
          printf("[%d] ", matriz[x][y]);
        }
      }
      printf("\n---------------------");
      printf("\nMATRIZ SEM DIAGONAL SECUNDARIA");
      printf("\n---------------------");
      for(int x=0; x<4; x++){
        printf("\n");
        for(int y=0; y<3; y++){
          printf("[%d] ", nova_matriz[x][y]);
        }
      }
      printf("\n---------------------");

    return 0;
    }
