#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Podaj dwie liczby naturalne a i b rozdzielone przecinkiem, ja podam Ci a^b:");
    scanf("%d,%d", &a, &b);

    int wynik =a;

    if(b!=0) {
        

    while(b!=1){

        

        wynik = wynik *a;

        b--;

    }
   }
    else
     wynik =1;

    printf("a^b wynosi: %d\n", wynik);


}