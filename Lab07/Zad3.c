#include<stdio.h>

void reku_fun(int n){
    if(n>0){
        reku_fun(n-1);
        printf("%d\n", n);
    }
    
    

}

int main(){
    int n = 123;
    reku_fun(n);
    return 0;
}