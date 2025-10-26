#include<stdio.h>


int main(){
    printf("Podaj dwie liczby oddzielone przecinkami abym zwrócił większą z nich: \n");
    int a, b = 0;
    scanf("%d, %d", &a, &b);
    int c=0;

    if (a>b)
        c=a;
    else
        c=b;

    printf("Więszka liczba to %d\n", c);
}