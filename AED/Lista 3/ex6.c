#include<stdio.h>
 
int main(void){
    int a,b,c,n,i;
    unsigned long long int k, x0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d %d %d %llu",&a,&b,&c,&k);
        x0=0;
        while(a*x0*x0 + b*x0 + c < k){
            x0++;
        }
        printf("%d\n",x0);
 
    }
 
 
 
}