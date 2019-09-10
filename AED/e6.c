#include<stdio.h>
 
int main(void){
    int n,k,i,j=1,env,aux=0;
    scanf("%d %d", &n, &k);
    env=n;
    int vet[n];
    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
    }
    for(j=1;j<=k;j++){
        for(i=0;i<n;i++){
            if(vet[i]==j)
                aux++;
        }
        if(aux < env)
            env = aux;
        aux=0;
    }
    printf("%d",env);
 
 
 
}