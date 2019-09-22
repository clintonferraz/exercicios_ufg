#include<stdio.h>
int fack(int m,int n){    
    if(m == 0){
        return n+1;
    }else if(n==0 && m>0){
        return fack(m-1,1);
    }else if(n>0 && m>0){
        return fack(m-1,fack(m,n-1));
    }  
}

int main(void){
    int m,n;
    scanf("%d %d",&m,&n);
    printf("%d",fack(m,n));
    return 0;
}
