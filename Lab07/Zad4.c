#include<stdio.h>

int fibo_fun(int a){
    if (a == 0){
        return 0;
    } else if (a==1){
        return 1;
    } else return fibo_fun(a-1) + fibo_fun(a-2);

}

int main(){
    int a;
    printf("Wprowadz indeks ciagu fibo: \n");
    scanf("%d", &a);
    printf("%d\n", fibo_fun(a));
}