#include<stdio.h>
int main(void){
    int n=0;
    while(n<1 || n>5000){
        scanf("%d",&n);   
    }
    int V[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&V[i]); 
    }
    for(int i = 0; i < n; i++){
       printf("%d ",V[i]);
    }

    return 0;
}