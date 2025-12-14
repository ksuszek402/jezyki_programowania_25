#include<stdio.h>

int main(){
    
    printf("Podaj znak ASCII char lub kod ASCII int a ja podam czy to litera alfabetu\n");
    printf("Najpierw daj mi znać czy wprowadzasz \nchar-1 \nczy \nint-2: \n");
    //int a =0;
    //char b;
    //int liczba;
    //scanf("%d", &a);
   // if (a==1)
 //       scanf("")

    int wybor;
    scanf("%d ", &wybor);
    char znak;
    int liczba;
    if (wybor==1) {
        scanf("%d", &liczba);
        if(((liczba>64)&& (liczba<91))||((liczba>96)&&(liczba<123))){
            printf("Litera");
        }
    } else if (wybor==2) {
        scanf("%c", &znak);
        if
    }
   
    
}