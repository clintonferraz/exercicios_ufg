#include<stdio.h>
int main(void){
    int n,m,enc=0;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    scanf("%d",&m);
    int vb[m];
    for(int i=0;i<m;i++){
        scanf("%d",&vb[i]);
    }
    for(int i = 0; i<m;i++){
        for(int j = 0;j<n;j++){
            if(vb[i]==v[j])
                enc=1;
        }
        if(enc==1)
            printf("ACHEI\n");
        else
            printf("NAO ACHEI\n");
        enc=0;
    }

    return 0;
}
