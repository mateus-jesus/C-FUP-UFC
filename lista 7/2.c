#include <stdio.h>
#include <stdlib.h>

int main(){

  int matriz[4][4];
  int dp[4];

  for(int i=0; i<4; i++){
    printf("\n-------------------------");
    printf("\nColuna %d", i+1);
    for(int c=0; c<4; c++){
      printf("\nDigite o %d: ", c+1);
      scanf("%d", &matriz[i][c]);
      if(c==i){
        dp[i] = matriz[i][c];
      }

        }
      }
      printf("\n---------------------");
      printf("\nA diagonal principal consiste dos valores: \n");
      for(int y=0; y<4; y++){
        printf("[%d] ", dp[y]);
      }
      printf("\n---------------------");











  return 0;
}
