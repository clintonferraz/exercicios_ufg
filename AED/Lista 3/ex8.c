#include<stdio.h>
 
int main(void){
    unsigned long long int n,i,k=0;
    double mul=1,mulk=1;
    scanf("%llu",&n);
    unsigned long long int vet[n];
    for(i=0; i<n; i++){
        scanf(" %llu",&vet[i]);
    }
    for(i=0; i<n; i++){
        mul*=vet[i];
    }
 
    while(mulk<=mul){
        k++;
        mulk=1;
        for(i=0; i<n; i++){
            mulk*=k;
        }
 
    }
 
 
    printf("%llu",k);
    printf("\n");
 
}