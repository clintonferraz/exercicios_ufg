#include<stdio.h>
 
int main(void){
    int t,n,k,i,j,l,m,cont;
    scanf("%d",&t);
    for(i=0; i<t; i++){
        cont=0;
        scanf("%d %d",&n,&k);
        char mat[n][n];
        for(j=0; j<n; j++){
            for(l=0; l<n; l++){
                scanf(" %c",&mat[j][l]);
            }
        }
        for(j=0; j<n; j++){
            for(l=0; l<n; l++){
                if(mat[j][l]=='P'){
                    m=l-k;
                    if(m<0)
                        m=0;
                    while(m>=0 && m<=l+k && m<n){
                        if(mat[j][m]=='L'){
                            mat[j][m]='A';
                            cont++;
                            m=l+k;
                        }
                        m++;
                    }
                }
            }
        }
        printf("%d\n",cont);
 
 
    }
 
 
 
}