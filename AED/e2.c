#include<stdio.h>
 
int main(void){
    int n1,n2,n1i,n2i,res;
    scanf("%d %d",&n1,&n2);
    n1i = (n1%10 * 100) + ((n1%100)/10)*10 + (n1/100);
    n2i = (n2%10 * 100) + ((n2%100)/10)*10 + (n2/100);
    if(n1i>n2i)
        printf("%d\n",n1i);
    else
        printf("%d\n",n2i);
}