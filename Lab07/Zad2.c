#include<stdio.h>

int reku_euk(int n, int a, int b){
    if (a%n ==0 && b%n ==0){
        return n;
    } else return reku_euk(n-1, a, b);
    

}

int main(){
    int a = 20;
    int b = 175;
    if (a>b){
        printf("%d\n", reku_euk(a, a, b));

    } else {
        printf("%d\n", reku_euk(b, a, b));
    }

}