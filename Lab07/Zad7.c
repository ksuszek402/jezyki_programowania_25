#include<stdio.h>
int my_tab[10] = {1,3,5,7,11,13,17,19,23};
int if_contain(int a, int i){
    if(a==my_tab[i]){
        return printf("Liczba wystepuje w tablicy\n");
    } else if(i>9){ printf("Liczba nie wystepuje w tablicy\n");
    }
    else return(if_contain(a,++i));
}
int main(){
    int a;
    printf("Podaj liczbe, sprawdze, czy jest w tablicy\n");
    scanf("%d", &a);
    if_contain(a,0);
}