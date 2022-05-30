#include <stdio.h>
#include <stdlib.h>


int main()
{
    /*Escreva um programa que armazene em um vetor todos os números múltiplos de 5,
no intervalo fechado de 1 a 500. Após isso, o programa deve imprimir todos os valores
armazenados.*/

    int i[500];

    for(int n=0; n<=500; ++n){
        if(n%5==0){
            i[n] = n;
            printf("[%d]\n", i[n]);
        }
    }
    return 0;
}
