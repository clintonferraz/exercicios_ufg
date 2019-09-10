#include<stdio.h>
 
int main(void){
    int n,i;
    scanf("%d",&n);
    int vet[n];
    for(i=0; i<n; i++){
        scanf("%d",&vet[i]);
    }
    int vetinv[n];
    for(i=0; i<n; i++){
        vetinv[i]=(vet[i]%10)*1000 + ((vet[i]%100)/10)*100 + ((vet[i]%1000)/100)*10 + vet[i]/1000;
        if(vetinv[i]==vet[i])
            printf("yes ");
        else
            printf("no ");
    }
}