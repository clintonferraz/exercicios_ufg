#include<stdio.h>
 
int main(void){
    int t,n,k,i,j,l,m,cont,preso;
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
                if(mat[j][l]=='D'){
                    preso=0;
                    m=l-k;
                    if(m<0)
                        m=0;
                    while(m>=0 && m<=l+k && m<n && preso==0){
                        if(mat[j][m]=='L'){
                            mat[j][m]='A';
                            cont++;
                            preso=1;
                            m=l+k;
                        }
                        m++;
                    }
                    m=j-k;
                    if(m<0)
                        m=0;
                    while(m>=0 && m<=j+k && m<n && preso==0){
                        if(mat[m][l]=='L'){
                            mat[m][l]='A';
                            cont++;
                            preso=1;
                            m=j+k;
                        }
                        m++;
                    }
 
 
 
                }
            }
        }
        printf("%d\n",cont);
 
 
    }
 
 
 
}