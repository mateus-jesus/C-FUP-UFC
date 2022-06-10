#include <stdio.h>
#include <stdlib.h>

int main(){

  int a[6][3];
  int menor, maior;

  for(int i=0; i<6; i++){
    printf("\n-------------------------");
    printf("\nColuna %d", i+1);
    for(int c=0; c<3; c++){
      printf("\nDigite o %d: ", c+1);
      scanf("%d", &a[i][c]);
      if(c==0 && i==0){
        menor = a[i][c];
        maior = a[i][c];
      }
      else{
        if(a[i][c] < menor){
          menor = a[i][c];
        }
        else if(a[i][c] > maior){
          maior = a[i][c];
        }
      }

    }
  }
  printf("\n-------------------------");
  printf("\n O menor numero foi: %d", menor);
  printf("\n O maior numero foi: %d", maior);

  return 0;
}
