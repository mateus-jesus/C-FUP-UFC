#include <stdio.h>
#include <stdlib.h>

main(){

float delta_s=780,t=0,Dzero_aquiles=0,Dzero_tarta=780,v,v_tarta=1;

puts("Quantas vezes a velocidade de Aquiles é maior do que a da tartaruga: ");

scanf("%f",&v);

for(;delta_s>=0;t+=0.0001){

delta_s=Dzero_tarta+v_tarta*t-(Dzero_aquiles+v*t);

}

printf("O tempo nescessario para Aquiles ultrapassar a tartaruga é de, aproximadamente, %fs",t);

system("PAUSE");

return 0;

}
