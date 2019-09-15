#include<stdio.h>

void imprimirNatural(unsigned int n){
    if(n==1){
        printf("%d ", n);
    }else{
        imprimirNatural(n-1);
        printf("%d ", n);
    }

       
}

int main(void){
    int n;
    scanf("%d",&n);
    imprimirNatural(n);
    return 0;
}