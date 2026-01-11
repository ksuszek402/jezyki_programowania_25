#include<stdio.h>

int main(){

    int tablica[10];
    int *wsk = tablica;

    for(int i=0; i<10; i++){
        printf("Podaj liczbę %d: ", i+1);
        scanf("%d", wsk+i);
    }

    for(int i =0; i<10;i++){
        printf("%d ", *(wsk+i));
    }

}