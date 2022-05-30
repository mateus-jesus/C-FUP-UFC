#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    float celsius, farenheit;
    printf("Digite o celsius: \n");
    scanf("%f",&celsius);

    farenheit = ((celsius - 32) /1,8);

    printf(" %2.f graus de celsius em farenheit e igual a: %2.fF", celsius,farenheit);


    return 0;
}