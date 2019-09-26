#include<stdio.h>

int main(void){
    int n,m;
    int i,j=0,k,l,rep=0;

    scanf("%d %d",&n,&m);
    int mat[m][2],vet[n];

    for(i=0;i<m;i++){
        scanf("%d %d",&mat[i][0],&mat[i][1]);
    }
    vet[0]=mat[0][0];
    for(l=0; l<=j; l++){
        for(i=0; i<=m; i++){
            if(mat[i][0]==vet[l]){
                for(k=0; k<=j; k++){
                    if(mat[i][1]==vet[k])
                        rep=1;
                }
                if(rep==0){
                    j++;
                    vet[j]=mat[i][1];
                }else
                    rep=0;
            }else if(mat[i][1]==vet[l]){
                for(k=0; k<=j; k++){
                    if(mat[i][0]==vet[k])
                        rep=1;
                }
                if(rep==0){
                    j++;
                    vet[j]=mat[i][0];
                }else
                    rep=0;
            }                                
        }    
    }


    for(i=0; i<=j; i++){
        printf("%d\n",vet[i]);
    }
    return 0;
}
