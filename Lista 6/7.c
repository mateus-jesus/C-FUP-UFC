#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*Em uma cidade do interior, sabe-se que, de janeiro a abril de 1976 (121 dias), não
ocorreu temperatura inferior a 15ºC nem superior a 40ºC. As temperaturas verificadas
em cada dia estão disponíveis em uma unidade de entrada de dados. Fazer um programa
que calcule e imprima:
- A menor temperatura ocorrida;
- A maior temperatura ocorrida;
- A temperatura média;
- O número de dias nos quais a temperatura foi inferior à temperatura média.*/

int main()
{
    int dias[10],menort,maiort,menmed=0;
    double mediat;
 
    for(int i=0; i<10; ++i){
        scanf("%d", &dias[i]);
        mediat+= dias[i];
        if(i==0){
            menort= dias[i];
            maiort= dias[i];
        }
        else if(menort>dias[i]){
            menort = dias[i];
        }
        else if(maiort<dias[i]){
            maiort = dias[i];
        }
    }
    mediat= mediat /10;
    printf("\nA menor temperatura foi: %d graus.", menort);
    printf("\nA maior temperatura foi: %d graus.", maiort);
     for(int i=0; i<10; ++i){
        if(dias[i]<mediat){
            menmed++;
        }
        }
    printf("\nA media de tempraturas foi: %0.f graus.", mediat);
    printf("\nHouveram %d dias com temperaturas menor que a media.", menmed);
    
    
    





    return 0;
}
