#include<stdio.h>


int main(){
    int SIZE;
    scanf("%d", &SIZE);
    int tablica_1 [SIZE];
    for(int i =0; i<=SIZE; i++){
        tablica_1[i] = i*i;
        printf("%d\n", tablica_1[i]);
    }


    

    return 0;

}