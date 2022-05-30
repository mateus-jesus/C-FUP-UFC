#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    float lado,a;

    printf("Digite o lado do quadrado:\n");
    scanf("%f",&lado);
    a = (lado * lado);
    printf("A area do quadrado = %2.f\n", a);


    return 0;
}