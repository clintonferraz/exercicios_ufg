#include<stdio.h>
int main(void){
    int n,aux=0,cont=0;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j!=i){
                if(v[i]==v[j]){
                    aux=1;
                }
            }

        }
        if(aux==0)
            cont++;
        aux=0;
    }
    printf("%d\n",cont);


    return 0;
}
