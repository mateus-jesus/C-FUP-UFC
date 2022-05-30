#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    
    int n,x=1,y=1,z=1;
    printf("Digite o tamanho: \n");
    scanf("%d", &n);
    
    while(y<=n){
        x=z;
        printf("%d,", x);
        y+=1;
        x+=3;
        for(int i=0;i<2;i++){
            printf("%d,", x);
            y+=1;
        }
        z+=1;
    }
    printf("...");
    return 0;
}
