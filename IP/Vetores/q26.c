#include<stdio.h>
int main(void){
    int t,soma=0,aux=0;
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        int v[9],va[7];
        for(int j=0; j<9; j++){
            scanf("%d",&v[j]);
        }
        for(int j=0; j<9; j++){
            for(int k=0; k<9; k++){
                if(k==j)
                    k++;
                for(int l=0; l<9; l++){
                    if(l!=j && l!=k){
                        soma+=v[l];
                        va[aux]=v[l];
                        aux++;
                    }    
                }
                aux=0;
                if(soma==100)
                    k=9;
                else{
                    soma=0;
                }

            }
            if(soma==100)
                j=9;
        }


        if(soma==100){
            int j;
            for(int k = 1; k < 7; k++){
                j = k;
                while(j > 0 && va[j-1] > va[j]){
                    aux = va[j-1];
                    va[j-1] = va[j];
                    va[j] = aux;
                    j--;
                }
            }
            for(int j=0; j<7; j++){
                printf("%d\n",va[j]);
            }
            soma=0;
        }


    }
 
    return 0;
}