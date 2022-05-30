#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
   int a,b;
   scanf("%d%d", &a,&b);
   while(a>b){
       a = a - b;
   }
    printf("Resto: %d", a);
    return 0;
}
