#include<stdio.h>

int bin_fun(int a){
    if(a==0){ 
        printf("\n"); 
        return 0;
    }
    if(a%2==1){
        printf("%d", 1);
        bin_fun((a-1)/2);
    } else {
        printf("%d", 0);
        bin_fun(a/2);
    }

}

int main(){
    printf("Wprowadz liczbe, wpiszę ja binarnie: ");
    int a;
    scanf("%d", &a);
    bin_fun(a);

}
