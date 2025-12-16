#include<stdio.h>

int my_tab[] = {1,2,3,4,5,6,7,8,9,11,13,15,17,18,19,20,23,29};

int dig_on_list(int a,int my_tab[], int tab_size){
    
    
    if(tab_size<=0){ 
        return 0;
    } 
    int mid_dig = tab_size/2;

    if(a==my_tab[mid_dig]){ 
        return 1;
    } 
    else if(a>my_tab[mid_dig]){ 
        return dig_on_list(a, my_tab + mid_dig +1 , tab_size - mid_dig -1);
    } 
    else return dig_on_list(a, my_tab, mid_dig);
    }


int main(){
    int a;
    printf("Podaj liczbe, sprawdze czy jest na liscie: \n");
    int size_tab = sizeof(my_tab) / sizeof(my_tab[0]); 
    

    scanf("%d", &a);
    if(dig_on_list(a, my_tab, size_tab)){
        printf("Liczba jest na liscie\n");
    } else {
        printf("Liczba nie jest na liscie\n");
    }
}