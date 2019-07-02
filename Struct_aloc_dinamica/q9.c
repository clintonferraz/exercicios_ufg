#include<stdio.h>
#include<stdlib.h>
struct fracao{
    int num;
    int den;
    float decimal;
};

int main(void){
    int n,m=0,i=0,j=0,k=0,l=0,aux=0,a=0,b=0;
    struct fracao *frac1;
    frac1 = (struct fracao *)malloc(sizeof(struct fracao));
    scanf("%d",&n);
    getchar();
    for(i=0; i<n; i++){
        while( m != '\n' ){
            frac1 = (struct fracao *) realloc( frac1, (j+1)*sizeof(struct fracao) );
            scanf("%d/%d",&frac1[j].num,&frac1[j].den);


            m=getchar();
            j++;

        }
        for(k=0; k<j; k++){
            frac1[k].decimal=(float)frac1[k].num/(float)frac1[k].den;
        }
        printf("Caso de teste %d\n",i+1);
        for(k=0; k<j; k++){
            for(l=k+1; l<j; l++){
                if(frac1[k].decimal==frac1[l].decimal){
                    printf("%d/%d equivalente a %d/%d\n",frac1[k].num,frac1[k].den,frac1[l].num,frac1[l].den);
                    aux=1;
                }

            }
        }
        if(aux==0)
            printf("Nao ha fracoes equivalentes na sequencia\n");
        aux=0;
        j=0;
        m=0;



    }
















    return 0;
}
