#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    float salario, vendas, comissao, salariofinal;


    scanf("%f", &vendas);
    scanf("%f", &salario);

    comissao =(vendas * 4) /100;
    salariofinal = comissao + salario;
    printf("O valor do salario e= %2.f\nO valor da comissao e= %2.f", salariofinal, comissao);


    return 0;
}