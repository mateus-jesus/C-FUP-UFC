#include <stdio.h>
#include <stdlib.h>

int main(){
    double fibona[50];
    double a,b,fibo;
    
    a=0;
    b=1;
    for(int i=0;i<50;++i){
        fibo = a + b;
        a = b;
        b = fibo;
        if(i==0){
            fibona[0] = 1;
        }
        else{
            fibona[i] = fibo;
        }
    }
    for(int i=0; i<50; ++i){
        printf("[%.0lf] ", fibona[i]);
    }
    return 0;
}
