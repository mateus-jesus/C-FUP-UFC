#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    
    float salminimo, salareceber, horastrabalhadas, horasextras, valorhrtrabalhada,valorhrextra;
    printf("Digite as horas trabalhadas: \n");
    scanf("%f",&horastrabalhadas);

    printf("Digite as horas extras trabalhadas: \n");
    scanf("%f",&horasextras);

    printf("Digite o salario minimo: \n");
    scanf("%f",&salminimo);

    valorhrtrabalhada = (salminimo/8);
    valorhrextra = (salminimo/4);

    salareceber =  (horastrabalhadas * valorhrtrabalhada) + (horasextras * valorhrextra);
    printf("valor da hora de trabalho =%f\n", valorhrtrabalhada);
    printf("O salario foi de %2.f", salareceber);

    


    return 0;
}