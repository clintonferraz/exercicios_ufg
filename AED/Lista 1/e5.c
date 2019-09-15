#include<stdio.h>
 
int main(void){
    int n,i,j,k,p;
    scanf("%d",&n);
    int vet[n];
    for(i=0; i<n; i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<n;i++){
        j=0;
        p=vet[i];
        while(p>=4){
            p=p/4;
            j++;
        }
        while(j>=0){
            p=vet[i];
            for(k=j; k>0; k--){
                p=p/4;
            }
            if(p%4==0)
                printf("A");
            if(p%4==1)
                printf("C");
            if(p%4==2)
                printf("G");
            if(p%4==3)
                printf("T");
            j--;
        }
        printf("\n");
    }
}