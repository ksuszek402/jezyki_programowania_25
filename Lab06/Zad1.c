#include<stdio.h>

int dodwania(int a, int b){
    return a+b;
}

int odejmowanie(int a, int b){
    return a-b;
}

int mnozenie(int a, int b){
    return a*b;
}

float dzielenie(float a, float b){
    return a/b;
}

int main(){
    float a,b;
    int wybor;
    printf("Podaj dwie liczby: \n");
    scanf("%f, %f", &a, &b);

    printf("Wybierz jaki wynik chcesz otrzymac:\n 1 to dodawanie\n2 to odejmowanie\n3 to mnozenie\n4 to dzielenie\n");
    scanf("%d", &wybor);
    switch(wybor){
        case 1: 
        printf("%d", dodwania(a,b));
        break;

        case 2: 
        printf("%d", odejmowanie(a,b));
        break;

        case 3:
        printf("%d", mnozenie(a,b));
        break;

        case 4:
        printf("%.2f\n", dzielenie(a,b));
        break;
    }

    
}