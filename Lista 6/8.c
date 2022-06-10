#include <stdio.h>
#include <stdlib.h>

/*1.8. Fazer um programa que:
a) Leia o valor inteiro de n (n <= 1000) e os n valores de uma variável composta A
de valores numéricos, ordenados de forma crescente;
b) Determine e imprima, para cada número que se repete no conjunto, a quantidade
de vezes em que ele aparece repetido;
c) Elimine os elementos repetidos, formando um novo conjunto;
d) Imprima o conjunto obtido no item c.
*/

int main(){
  int n, repetido=0;

  printf("Digite N: ");
  scanf("%d", &n);
  int compa[n];

  for(int i =0; i<n; ++i){
    printf("\nDigite o valor %d: ", i+1);
    scanf("%d", &compa[i]);
  }
  for(int i=0; i<n; i++){
    for(int c=0; c<n; c++){
      if(compa[i]== compa[c]){
        repetido++;
      }
    }
  }
  printf("Houveram %d valores repetidos", repetido);

  return 0;
}
