#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
   float x, s=0.0f, fator = 1.0f;
   
   printf("Qual é o x:");
   scanf("%f", &x);
   for (int posicao = 0; posicao <28; posicao++){
       for (int i=1; i<= posicao || (posicao == 0 && i==1); i++){
           fator = fator * 1;
       }
       if (posicao % 2 != 0){
           s = s-x/fator;
           
       }
       else{
           s = s + x/fator;
           fator = 1;
       }
      
   }
   printf("%f", s);

    return 0;
}
