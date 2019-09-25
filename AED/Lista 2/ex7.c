#include<stdio.h>

int main(void){
    int m,n,i,j,nf;
    scanf("%d %d",&m,&n);
    int p[n][2];
    int fam[n];  
    for(i=0;i<n;i++){
        scanf("%d %d",&p[i][0],&p[i][1]);
    }
    fam[0] = p[0][0];
    j=0
    for(i=0; i<n; i++){
        if(fam[j] == p[i][0]){
            j++;
            fam[j] = p[i][1];
        }else if(fam[j] == p[i][1]){
            j++;
            fam[j] = p[i][0];
        }






    }







    return 0;
}
