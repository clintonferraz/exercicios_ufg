#include<stdio.h>
int main(void){
    int n=0,k,cont=0;
    while(n<1 || n>5000){
        scanf("%d",&n);   
    }
    int V[n],Vinv[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&V[i]); 
    }
    for(int i = 0; i < n; i++){
       Vinv[i]=V[n-1-i];
       printf("%d ",Vinv[i]);
    }

    return 0;
}
