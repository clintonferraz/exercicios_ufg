#include<stdio.h>
#include<math.h>
 
int main(void){
    int n,q,i,j,cont=0;
    scanf("%d",&n);
    int x[n];
    for(i=0; i<n; i++){
        scanf(" %d",&x[i]);
    }
    scanf(" %d",&q);
    int m[q];
    for(i=0; i<q; i++){
        scanf(" %d",&m[i]);
    }
    for(i=0; i<q; i++){
        cont=0;
        for(j=0; j<n; j++){
            if(m[i]>=x[j]){
                cont++;
 
            }
 
        }
        printf("%d ",cont);
        for(j=0; j<n; j++){
            if(m[i]>=x[j]){
             printf("%d ",j+1);
 
            }
 
        }
        printf("\n");
 
    }
 
}