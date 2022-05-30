#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float produto;

    scanf("%f", &produto);
    printf("O valor do produto é: %2.f\n", produto - (produto*10)/100);

    return 0;
}