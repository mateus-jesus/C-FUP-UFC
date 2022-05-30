#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* recebe o numero n */
  int n,d;
  printf("Digite N: \n");
  scanf("%d",&n);
  double v[n];
 
 /* começa com d= 0 até d = N, nisso, checa se o resto == 0, se for, matriz recebe d. */
 for(d=0;d==n; d++){
    if(n % d == 0){
        v[d] = d; 
    }
    else{
        printf("%d não foi", d);
    }
 
 }
printf("--------------------");
    for(d=0;d==n;d++){
        printf("%f", v[d]);
    }
  return 0;
}