#include <stdio.h>
#include <stdlib.h>

int main()
{   int a,b;
    printf("insira 2 numeros\n");
    scanf("%d%d",&a,&b);
    if (a%b != 0 && b%a !=0){
        printf("%d e %d sao primos entre si", a,b);
    }
    else{
        printf("%d e %d nao sao primos entre si",a,b);
    }
    return 0;
}
