#include<stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacci(n-2)+fibonacci(n-1);    
    }
}

void printfibonacci(int n){
    if(n<0){
        return;
    }else{
        printfibonacci(n-1);
        printf("%d ",fibonacci(n));
    }  
}

int main(void){
    int n;
    scanf("%d",&n);
    printfibonacci(n);
    return 0;
}