#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Recebe n -> laço de 0 até n, dividindo i por todos numeros de 0 até i, caso modulo seja 0, não é primo, e sai do laço
pro proximo numero;*/

int primo(int n);
int main()
{
    int i,c;

    printf("Quantos primos?: ");
    scanf("%d", &i);

    for(c=3;c<=i; c++){
        primo(c);
    }

    return 0;
}

int primo(int n){
    int cont;
    for(cont=2; cont < n; cont++){
            while(cont <n){
                if(n % cont == 0){
                    break;
                }
                else{
                    printf("\n%d", n);
                    break;
                }
            }
    }
    return 0;
}
