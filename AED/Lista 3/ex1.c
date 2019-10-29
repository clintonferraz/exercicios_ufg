#include<stdio.h>
#include<math.h>
 
int gcd(int a, int b) {
    int r;
    do{
        r=a%b;
        a=b;
        b=r;
    }while(r!=0);
    return a;
}
 
int main(void){
    double k,n,d,cont=0;
    int x=0;
    while(k!=0){
        scanf("%lf",&k);
        cont=0;
        if(k!=0){
                x=0;
                d=1;
                while(x==0){
                    for(n=0; n<=d; n++){
                        if(gcd(n,d) == 1){
                            cont++;
                            if(cont==k){
                                printf("%.0lf/%.0lf\n",n,d);
                                x=1;
                            }
                        }
                    }
                    d++;
                }
 
 
        }
    }
}