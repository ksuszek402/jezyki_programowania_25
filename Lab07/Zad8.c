#include<stdio.h>
#include<string.h>
int if_palindrom(const char *napis, int left, int right){
    if(left>= right){
        return 1;
    } else if(napis[left]!=napis[right]){
        return 0;
    } else (napis, ++left, --right);
}

int main(){
    printf("Podaj wyraz max 100 znakow, a ja podam, czy to palindrom: \n");
    char napis[100];
    scanf("%s", &napis);
    if(if_palindrom(napis, 0, strlen(napis) - 1)){
        printf("To palindrom!\n");
    } else {
        printf("To nie palindrom!\n");
    }
    
}