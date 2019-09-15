#include<stdio.h>
int main(void){
    int q1=0,q2=0,aux=0;

    while(q1<1 || q1>100){
        scanf("%d",&q1);
    }
    while(q2<1 || q2>100){
        scanf("%d",&q2);
    }

    int V1[q1],V2[q2];

    for(int i = 0; i < q1; i++){
        scanf("%d",&V1[i]);
        for(int j = 0; j < i; j++){
            if(V1[i] == V1[j]){
                i--;
                break;
            }
        }
    }

    for(int i = 0; i < q2; i++){
        scanf("%d",&V2[i]);
        for(int j = 0; j < i; j++){
            if(V2[i] == V2[j]){
                i--;
                break;
            }
        }
    }

    printf("(");
    for(int i = 0; i < q1; i++){
        if(i!=0)
            printf(",");
        printf("%d",V1[i]);
    }
    for(int i = 0; i < q2; i++){
        for(int j = 0; j < q1; j++){
           if(V2[i]==V1[j])
                aux=1;
        }
        if(aux==0)
            printf(",%d",V2[i]);
        aux=0;
    }
    printf(")");




    printf("\n(");
    for(int i = 0; i < q2; i++){
        for(int j = 0; j < q1; j++){
            if(V2[i]==V1[j]){
                if(aux==0){
                    printf("%d",V2[i]);
                    aux=1;
                }else
                    printf(",%d",V2[i]);
            }
        }
    }
    printf(")\n");



    return 0;
}
