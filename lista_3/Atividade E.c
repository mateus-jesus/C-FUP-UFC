#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    float bma, bme, h, a;


    printf("Digite a base maior=\n");
    scanf("%f",&bma);
    printf("Digite a base menor=\n");
    scanf("%f",&bme);
    printf("Digite a altura=\n");
    scanf("%f",&h);

    a = ((bma + bme) * h)/2;
    printf("A area do trapezio =%2.f\n",a);


    return 0;
}