#include<stdio.h>

struct produtos{
    char nome[50];
    double preco;
    int quantidade;

};

int main(void){
    int n,m,p,i,j,k,aux=0;

    scanf("%d",&n);
    double precototal[n];

    for(i=0; i<n; i++)
        precototal[i]=0;

    for(i=0; i<n; i++){
        scanf("%d",&m);
        struct produtos feira[m];
        for(j=0; j<m; j++){
            scanf("%s %lf",&feira[j].nome, &feira[j].preco);
        }
        scanf("%d",&p);
        struct produtos compras[p];
        for(j=0; j<p; j++){
            scanf("%s %d",&compras[j].nome, &compras[j].quantidade);
        }
        for(j=0; j<p; j++){
            for(k=0; k<m; k++){
                if(strcmp(compras[j].nome, feira[k].nome)==0){
                        precototal[i]+=(compras[j].quantidade) * (feira[k].preco);
                }
            }
        }
        printf("R$ %.2lf\n",precototal[i]);


    }



    return 0;
}
