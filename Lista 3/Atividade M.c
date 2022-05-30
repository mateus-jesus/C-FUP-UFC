#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    float dinheiro, dolar, euro, libra;

    printf("Digite seu dinheiro: \n");
    scanf("%f", &dinheiro);

    dolar = (dinheiro * 5,23);
    euro = (dinheiro * 6,39);
    libra = (dinheiro * 7,43);

    printf("Dolar= %2.f\nEuro= %2.f\nLibra= %2.f\n", dolar, euro, libra);
    
    


    return 0;
}