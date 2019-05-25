#include<stdio.h>
int main(void){
    int n=1, m;
    while(n!=0){
        scanf("%d",&n);
        if(n!=0){
            int v[n];
            for(int i=0; i<n; i++){
                scanf("%d",&v[i]);
            }
            m=v[0];
            for(int i=0; i<n; i++){
                if(m<v[i])
                    m = v[i];
            }
            int vCount[m+1], vOrd[n];
            for(int i=0; i<(m+1); i++){
                vCount[i] = 0;
            }
            for(int i=0; i<n; i++){
                vCount[v[i]]++;
            }
            for(int i=1; i<m+1; i++){
                vCount[i]=vCount[i]+vCount[i-1];
            }
            for(int i=0; i<n; i++){
                vOrd[vCount[v[i]]-1] = v[i];
                vCount[v[i]]--;
            }
            for(int i=0; i<n; i++){
                printf("%d ",vOrd[i]);
            }
            printf("\n");
        }
    }
    return 0;
}