#include<stdio.h>

int troia(int a, int b){
    


}



int main(void){
    int m,n,i,j,k=0,nf,aux;
    scanf("%d %d",&m,&n);
    aux[n];
    nf=n;
    int p[n][2];  
    for(i=0;i<n;i++){
        scanf("%d %d",&p[i][1],&p[i][2]);
    }
    for(i=1;i<=m;i++){
        for(j=0;j<n;j++){
            if(i == p[j][1] || i == p[j][2]){
                if(aux[j]!=1){
                    aux[j]=1;
                    k++;  
                } 
            }                           
        }
        nf=nf-(k-1);
        if(nf<1)
            nf=1;  
        k=0;        
    }
    printf("%d",nf);
    return 0;
}
