#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
   int a,b,c;
   scanf("%d%d", &a,&b);
   c=1;
   while(a>b){
       a = a - b;
       c++;
   }
    printf("Quociente: %d", c);
    return 0;
}
