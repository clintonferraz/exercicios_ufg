#include<stdio.h>


unsigned long long int bin(int n){    
    if(n == 0){
        return 0;
    } else{ 
        return 10*bin(n/2) + n%2;     
    }
}

void printbin(int n){
    int k;
    if(n!=0){
        scanf("%d",&k);
        printf("%llu\n",bin(k));
        printbin(n-1);
    }
}


int main(void){
    int n;
    scanf("%d",&n);
    printbin(n);
    return 0;
}
