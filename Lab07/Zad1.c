#include<stdio.h>

int silnia(int n){
    if(n>0){
        return n*silnia(n-1);
    }else {
        return 1;
    }
}

int main(){
    int e;
    int a;
    printf("Wprowadz wartosc, ja wylicze silnie: \n");
    scanf("%d", &a);
    int k = silnia(a);
    printf("%d\n", k);
}