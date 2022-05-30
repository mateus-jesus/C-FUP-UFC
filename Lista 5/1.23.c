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
        fibo = a + b;
        a = b;
        b = fibo;

        printf("%d\n", fibo);
        soma = soma + fibo;
        
    }
    printf("Soma total= %d", soma);
    return 0;
}
