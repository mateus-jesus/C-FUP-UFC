#include <stdlib.h>
#include <stdio.h>


/*Escreva um programa que leia um conjunto de 50 fichas, cada uma contendo, a
altura e o código do sexo de uma pessoa (código = 1 se for masculino e 2 se for
feminino). Esses dados devem ser armazenados em vetores. Em seguida, o programa
deve inserir o nome das pessoas ordenadas pela altura (em ordem crescente).*/

//Vamos fazer assim:
// vamos ler as alturas e sexo
//organizar eles
// perguntar qual o nome da pessoa de altura x com sexo y.
// imprimir elas



int main(){
  float alturas[5];
  int sexo[5];

  for(int i =0; i < 5; i++){
      do{
        printf("Digite a altura da %d pessoa: ");
        scanf("%d", &alturas[i]);
      }while(alturas[i] > 0.50 || alturas[i] < 2.50);
    }
      do{
        printf("Digite o sexo da %d pessoa: ");scanf("%d", &sexo[i]);
      }while(sexo[i] != 1 && sexo[i] != 0);


  return 0;
}
