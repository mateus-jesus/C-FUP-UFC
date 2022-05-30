#include <stdio.h>

int mdc(int x, int y);
int main(){
    int n1,n2, resp;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &n1, &n2);
    resp=mdc(n1,n2);
    printf("MDC: %d",resp);

    return 0;
}

int mdc(int x, int y){
    if(x%y==0){
        return y;
    }
    else{
        return mdc(x,(x%y));
    }
    
}