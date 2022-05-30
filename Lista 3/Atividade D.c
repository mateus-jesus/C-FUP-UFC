#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    float peso, grama;

    scanf("%f",&peso);
    grama = peso * 1000;
    printf("O peso em grama = %2.fg",grama);

    return 0;
}