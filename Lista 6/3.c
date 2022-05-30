#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Escreva um programa que armazene em um vetor o quadrado dos números ímpares
no intervalo fechado de 1 a 20. Após isso, o programa deve imprimir todos os valores
armazenados
    */

    int n[20],c=0;

    for(int i=0; i<20; ++i){
        if(i%2!=0){
            n[c] = i;
            c++;

        }
    }
    printf("Imprimindo todos os valores impares de 1 a 20:\n");
    for(int i=0; i<c; i++){
        printf("[%d] ", n[i]);
    }

    return 0;
}
