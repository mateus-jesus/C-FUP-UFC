#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int n,c=1;
  printf("digite um numero: \n");
  scanf("%d", &n);
  printf("-------------\n");
  while(c<=n){
    if(c % 3 == 0 && c % 5 == 0){
      printf("%d\n", c);
      c++;
    }
    else{
      c++;
    }
  }
  
  return 0;
}