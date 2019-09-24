#include<stdio.h>

int main(void){
    int s,valor=0,comb=0;
    int n2,n5,n10,n20,n50,n100;
    int i,j,k,l,m,n;
    scanf("%d",&s);
    scanf("%d %d %d %d %d %d",&n2,&n5,&n10,&n20,&n50,&n100);
  
    for(i=0;i<=n100;i++){
        for(j=0;j<=n50;j++){
            for(k=0;k<=n20;k++){ 
                for(l=0;l<=n10;l++){
                    for(m=0;m<=n5;m++){
                        for(n=0;n<=n2;n++){                            
                            valor=i*100+j*50+k*20+l*10+m*5+n*2;                                   
                            if(valor==s){
                                comb++; 
                            }
                        } 
                    }
                }
            }
        }
    }
               
    printf("%d\n", comb);

    return 0;
}
