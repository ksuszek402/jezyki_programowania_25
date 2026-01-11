#include<stdio.h>

int zmienna_globalna = 10;

void zwroce_adrsy_zmiennych(int a, int b){
    int *adr1 = &a;
    int *adr2 = &b;

    printf("To adres pierwszego wyrazu: %p, \nadres drugiego: %p\n", adr1, adr2);
}

int main(){
    int zmienna_lokalna = zmienna_globalna;
    int *pointer_glob = &zmienna_globalna;
    int *pointer_local = &zmienna_lokalna;
    printf("Adres zmiennej globalnej: %p\n", pointer_glob);
    printf("Adres zmiennej lokalnej: %p\n", pointer_local);

    zwroce_adrsy_zmiennych(zmienna_globalna, zmienna_lokalna);

}