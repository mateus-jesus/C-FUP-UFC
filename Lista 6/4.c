#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Escreva um programa que receba a altura de 10 atletas. Esse programa deve
imprimir a altura daqueles atletas que tem altura maior que a média
    */
    
    float alturas[10],medias;
    float md;
    
    for(int i=0;i<10;++i){
        scanf("%f", &alturas[i]);
        medias += alturas[i];
    }
    md = 0;
    md = medias/10;
    printf("A media de alturas foi: %.2f\n", md);
    printf("As alturas acima da media foram: \n");
    for(int i=0; i<10;i++){
        if(alturas[i] > md){
            printf("[%.2f]",alturas[i]);
        }
    }
    
    return 0;
}
