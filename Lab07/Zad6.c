#include<stdio.h>

int sum_dig(int a){
    if(a<10) {
        return a;
    } else if(a==10){
        return 1;
    } else if(a%10!=0){
        return a%10 + sum_dig((a - (a%10))/10);
    } else {
        return sum_dig(a/10);
    }
}

int main(){
    printf("Wprowadz liczbe, podam sume jej cyfr:\n");
    int a;
    scanf("%d", &a);
    printf("%d", sum_dig(a));
}