#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float nota1, nota2, media;
    printf("Digite as nota 1,2: ");
    scanf("%f%f", &nota1,&nota2);
    media = ((nota1 * 2) + (nota2 * 3)) / 5;
    printf("O valor da media e= %.2f!\n", media);


    return 0;
}