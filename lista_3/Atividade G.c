#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    float salmin, sal, qnt;
    printf("Digite o valor do salario minimo:\n");
    scanf("%f",&salmin);
    printf("Digite o valor do seu salario:\n");
    scanf("%f",&sal);

    qnt = (sal / salmin);
    printf("Voce recebe %2.f salarios minimos", qnt);

    return 0;
}