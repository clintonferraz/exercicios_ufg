#include<stdio.h>
int n2,n5,n10,n20,n50,n100;

int atm(int i, int j, int k, int l, int m, int n, int s){  
    int valor=i*100+j*50+k*20+l*10+m*5+n*2;
    int comb=0;
    if(valor==s)
        comb++;
    n++;
    if (n==n2+1) {
        n = 0;
        m++;
    }
    if(m==n5+1){
        m = 0;
        l++;
    }
    if (l==n10+1) {
        l = 0;
        k++;
    }
    if (k==n20+1) {
        k = 0;
        j++;
    }
    if(j==n50+1){
        j = 0;
        i++;
    }
    if(i==n100+1){
        return comb;
    }
    return comb + atm(i,j,k,l,m,n,s);
}

int main(void){
    int s,valor=0,comb=0;
    int i,j,k,l,m,n;
    scanf("%d",&s);
    scanf("%d %d %d %d %d %d",&n2,&n5,&n10,&n20,&n50,&n100);
    printf("%d",atm(0,0,0,0,0,0,s));
    return 0;
}