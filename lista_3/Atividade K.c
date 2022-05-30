#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    float largura, comprimento, potencia;
    printf("Digite a largura e comprimento: \n");
    scanf("%f%f", &largura, &comprimento);

    potencia = ((largura * comprimento) * 18);

    printf("A potencia necessaria sera= %2.fW", potencia);



    return 0;
}