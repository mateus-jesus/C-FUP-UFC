#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int n,a,b,fibo,i,soma=0;
    
    printf("Qual a quantidade:\n");
    scanf("%d",&n);
    printf("Digite o termo A:\n");
    scanf("%d", &a);
    printf("Digite o termo B:\n");
    scanf("%d", &b);
    for(i=0;i<n;i++){
        if(fibo% 2== 0){
            fibo = a + b;
            a = b;
            b = fibo;
            printf("%d\n", fibo);
        }
        if(fibo% 2== 0){
            fibo = a - b;
            a = b;
            b = fibo;
            printf("%d\n", fibo);
        }
        
    }
    return 0;
}
