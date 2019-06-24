#include<stdio.h>
#include<string.h>
int main(void){
    int n,i,j,k;
    char a[50],b[50],c[100];
    scanf("%d",&n);
    for(i = 0; i < n; i++){

        scanf("%s%s",a,b);
        for(j = 0; j < 100; j++)
            c[j]='\0';
        for(j = 0, k = 0; j < strlen(a) && j < strlen(b); j++, k += 2){
            c[k]=a[j];
            c[k+1]=b[j];
        }
        for(; j<strlen(a); j++){
            c[k]=a[j];
            k++;
        }
        for(; j<strlen(b); j++){
            c[k]=b[j];
            k++;
        }
        printf("%s\n",c);
    }
    return 0;
}