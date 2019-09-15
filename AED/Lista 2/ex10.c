#include<stdio.h>

unsigned long long int fatorialduplo(unsigned long long int n){
    unsigned long long int k=n;
    if(n==1){
        return 1;
    }else {
        if(n%2==0){
            k=1;
        }
        return k*fatorialduplo(n-1); 
    }
}

int main(void){
    unsigned long long int n;
    scanf("%llu",&n);
    printf("%llu",fatorialduplo(n));
    return 0;
}