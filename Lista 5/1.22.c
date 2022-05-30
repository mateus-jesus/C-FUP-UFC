#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n,a,b,fibo,i;
    
    printf("Qual o numero:\n");
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=0;i<n;i++){
        fibo = a + b;
        a = b;
        b = fibo;
        if(i==0){
            printf("%d\n", a);
        }
        else{
            printf("%d\n", fibo);
        }
    }
    return 0;
}
