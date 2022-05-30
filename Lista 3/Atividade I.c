#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    
    int anonascimento,anoatual;

    printf("Digite o seu ano de nascimento: \n");
    scanf("%d",&anonascimento);
    printf("Digite o ano atual: \n");
    scanf("%d",&anoatual);

    //idade em anos
    printf("Sua idade em anos:%d anos.\n",anoatual-anonascimento);
    //idade em meses
    printf("Sua idade em meses:%d meses.\n",((anoatual * 12)-(anonascimento * 12)));
    //idade em dias
    printf("Sua idade em meses:%d dias.\n",((anoatual * 365)-(anonascimento * 365)));
    //idade em semanas
    printf("Sua idade em meses:%d semanas.\n",(((anoatual * 365)/7)-((anonascimento * 365)/7)));




    return 0;
}