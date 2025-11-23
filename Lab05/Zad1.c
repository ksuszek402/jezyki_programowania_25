#include<stdio.h>

int main(){
    int n;
    printf("Podaj liczbę, abym podał sumę kwadratów od 1 do tej liczby: \n");
    scanf("%d", &n);

    int wynik = 0;
    int i;

    for (i=1; i < n+1; i++ ){
        wynik += i*i;
    }

    printf("Wynik wynosi: %d\n", wynik );



}