#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int i,n,x,y;
    printf("Digite o tamanho da sequencia:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x = pow(i,2);
        printf("%d-",x);
    }
    return 0;
}
