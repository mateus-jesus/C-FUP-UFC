#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
   int n;
   float h=0;
   
   printf("Digite N: \n");
   scanf("%d", &n);
   
   if(n!= 0){
       for(int i=1; i<= n; i++){
            if(i%2 ==0){
               h-= (float)1/i;
           }
           else{
                h += (float)1/i;
            }
           printf("H=%f", h);
       }    
   }


    return 0;
}
