#include<stdio.h>
int main(void){
    int n=0,k,cont=0;
    while(n<1 || n>1000){
        scanf("%d",&n);   
    }
    int V[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&V[i]); 
    }
    scanf("%d",&k); 
    for(int i = 0; i < n; i++){
        if(k <= V[i])
            cont++;
    }
    printf("%d\n",cont);

    return 0;
}
