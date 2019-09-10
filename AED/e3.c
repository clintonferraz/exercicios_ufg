#include<stdio.h>
 
int main(void){
    int n,n1,n2,res;
    char c;
    scanf("%d",&n);
    scanf("%d %c %d",&n1,&c,&n2);
    if(c=='+')
        res=n1+n2;
    if(c=='x')
        res=n1*n2;
    if(res>n)
        printf("overflow");
    else
        printf("no overflow");
}