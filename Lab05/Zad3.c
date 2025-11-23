#include<stdio.h>

int main(){
    int a,b;
    printf("Podaj 2 liczby po przecinku: ");
    scanf("%d, %d", &a, &b);
    int c = 0;
    int wc =1;
    while (wc<=b){
        c++;
        wc*=a;
    }
    printf("Wynik, %d\n", c);
}