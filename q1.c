#include<stdio.h>

struct fracao{
    int num;
    int den;
    float decimal;
};

int main(void){
    int n,m,i,j,k,aux=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&m);
        struct fracao frac1[m];
        for(j=0; j<m; j++){
            scanf("%d/%d",&frac1[j].num, &frac1[j].den);
        }
        for(j=0; j<m; j++){
            frac1[j].decimal=(float)frac1[j].num/(float)frac1[j].den;
        }
        printf("Caso de teste %d\n",i+1);
        for(j=0; j<m; j++){
            for(k=j+1; k<m; k++){
                if(frac1[j].decimal==frac1[k].decimal){
                    printf("%d/%d equivalente a %d/%d\n",frac1[j].num,frac1[j].den,frac1[k].num,frac1[k].den);
                    aux=1;
                }

            }
        }
        if(aux==0)
            printf("Nao ha fracoes equivalentes na sequencia\n");
        aux=0;


    }
















    return 0;
}
