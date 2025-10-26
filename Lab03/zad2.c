#include<stdio.h>

int main(){
    printf("Podaj dwie liczby oddzielone przecinkiem abym wykonał na nich działania: \n");
    int a = 0;
    int b = 0;

    scanf("%d, %d", &a, &b);

    printf("Dodawnie: %d\n", a+b);
    printf("Odejmowanie: %d\n", a-b);
    printf("Mnożenie: %d\n", a*b);
    printf("Dzielenie: %f\n", (double)a/b);
    printf("Reszta z dzielenia: %d\n", a%b);
}