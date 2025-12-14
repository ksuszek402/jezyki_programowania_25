#include<stdio.h>

int main(){
    int a,b;
    void dodawanie(int a,int b){
        printf("%d\n",a+b);
    }

    scanf("%d, %d", &a, &b);
    dodawanie(a,b);
}