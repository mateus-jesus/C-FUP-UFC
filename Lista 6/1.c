#include <stdio.h>
#include <stdlib.h>


int main()
{
    /*Escreva um programa que armazene em um vetor todos os números inteiros de 200
a 100 (em ordem decrescente). Após isso, o programa deve imprimir todos os valores
armazenados.*/

    int i[100];

    for(int n=0; n<=100; ++n){
        i[n] = 200 - n;
    }

    for(int n =0; n<=100; n++){
        printf("[%d]\n", i[n]);
    }


    return 0;
}
