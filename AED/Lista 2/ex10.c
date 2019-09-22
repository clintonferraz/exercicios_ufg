#include<stdio.h>
#include<math.h>

int numdigit(int n){
    if(n/10 == 0)
        return 0;
    else
        return 1+numdigit(n/10);
}

int reverso(int n){    
    if(n/10 == 0){
        return n;
    }else{
        return (n%10)*pow(10,numdigit(n))+reverso(n/10);
    }  
}

int main(void){
    int n;
    scanf("%d",&n);
    printf("%d",reverso(n));
    return 0;
}
