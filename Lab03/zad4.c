#include<stdio.h>

int main(){
    int a,b,c =0;
    printf("Podaj 3 liczby oddzielone przecinkami abym podał największą z nich: \n");
    int d =0;

    scanf("%d,%d,%d", &a, &b, &c);

    if (a>b)
    d = a;
    else d = b;

    if (c>d)
    d=c;
    
    printf("Największa liczba spośród 3 podanych to: %d\n", d);
}